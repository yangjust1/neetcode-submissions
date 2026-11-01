class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int length = nums.size();
        int row = 0;
        int max = 0;
        for(int i = 0; i<length; i++ )
        {
            if (nums[i] == 1)
            {
                row ++;
                if(row > max)
                {
                    max = row;
                }
            }else
            {
                row =0; 
            }
        }
        return max;
    }

};