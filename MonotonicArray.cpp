class Solution{
public:
    bool isMonotonic(vector<int>& nums) {
        int i,c=1,p=1;
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
            c=0;
            else if(nums[i]>nums[i+1])
            p=0;
        }
        return c==1||p==1;
    }
};
