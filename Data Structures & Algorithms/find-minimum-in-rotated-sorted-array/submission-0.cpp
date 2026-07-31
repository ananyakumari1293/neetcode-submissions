class Solution {
public:
    int findMin(vector<int> &nums) {
        int l=0,h=nums.size()-1;
        int mn=INT_MAX;
        while(l<=h){
             if (nums[l] <= nums[h]) {
                mn = min(mn, nums[l]);
                break;
            }
            int m=l+(h-l)/2;
            //left sorted
            if(nums[l]<=nums[m]){
                mn=min(nums[l],mn);
                l=m+1;

            }
        else {
            
            mn=min(nums[m],mn);
            h=m-1;}
        }
        return mn;
    }
};
