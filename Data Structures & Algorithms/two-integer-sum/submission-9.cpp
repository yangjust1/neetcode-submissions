class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>dic;
        for(int i = 0; i<nums.size();i++){
            int current = nums[i];
            int complement = target - current;

            if(dic.find(complement) != dic.end()){
                return{dic[complement],i};
            }else{
                dic.insert({nums[i],i});
            }
        }
        return {};
    }
};
