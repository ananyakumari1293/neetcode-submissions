class Solution {
public: 
    int rob1(vector<int>& nums) {
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
        return prev;}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp1,temp2;
        if(n==1)return nums[0];
        for(int i=0;i<n;i++){
            if(i!=0)temp1.push_back(nums[i]);
            if(i!=n-1)temp2.push_back(nums[i]);
        }
        int ans=max(rob1(temp1),rob1(temp2));
        return ans;
        
    }
};
