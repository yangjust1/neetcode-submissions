class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>dic;
        for(int num: nums){
            if(dic.count(num)){
                return true;
            }else{
                dic.insert(num);
            }

        }
        return false;
    }
};
