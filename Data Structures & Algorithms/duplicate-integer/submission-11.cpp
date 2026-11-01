class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> dic;
        for(int n: nums){
            if(dic.count(n)){
                return true;
            }
            dic.insert(n);
        }
    return false;
    }
};
