class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev=nums[0];
        int p2=0;
        for(int i=1;i<n;i++){
            int t=nums[i];
            if(i>1)t+=p2;
            int nt=0+prev;
            int curr=max(t,nt);
            p2=prev;
            prev=curr;
        }
        return prev;
        
    }
};
