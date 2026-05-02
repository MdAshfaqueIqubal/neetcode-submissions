class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool check = false;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    check = true;
                }
            }
        }
        if(check){
            return true;
        }else{
            return false;
        }
    }
};