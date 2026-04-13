class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a(2);
        for(int i=0;i<nums.size();i++)
        {
          a[1]=target-nums[i];
           for(int j=i+1;j<nums.size();j++)
           {
                if(a[1]==nums[j])
                {
                    a[0]=i;
                    a[1]=j;
                return a;
                }
           }
        }
    }
};
