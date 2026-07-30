class Solution {
public:
    
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.empty())return 0;
        int cnt=1;
        int mx=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i])continue;
            else if((nums[i-1]+1)==nums[i]){
                cnt++;
                

            }
            else cnt=1;
            mx=max(cnt,mx);  

        }
        return mx;
        
    }
};
