class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            int a=nums[i];
            int req=target-nums[i];
            if(mpp.find(req)!=mpp.end())return {mpp[req],i};
            else mpp[a]=i;
        }
        
        
    }
};
