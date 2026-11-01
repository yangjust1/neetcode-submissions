class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>dic;
        //sort(strs.begin(), strs.end());
        for(const auto & s: strs){
            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());
            dic[sortedS].push_back(s);
        }

        vector<vector<string>>ans;

        for(auto &p: dic){
            ans.push_back(p.second);
        }
        return ans;
    }
};
