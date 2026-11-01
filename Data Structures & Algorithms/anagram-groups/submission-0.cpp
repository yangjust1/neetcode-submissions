class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for (const auto& s : strs) {
            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());
            res[sortedS].push_back(s);
        }
        vector<vector<string>> result;
        //The usage of auto in for (auto& pair : res) 
        //refers to iterating over the elements of the unordered_map named res
        for (auto& pair : res) {
            result.push_back(pair.second);
        }
        return result;
    }
};