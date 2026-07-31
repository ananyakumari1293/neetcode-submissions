class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>>st;
        
        
        for(int i=0;i<nums.size();i++){
            unordered_set<int>mpp;
            for(int j=i+1;j<nums.size();j++){
                int t=0-(nums[i]+nums[j]);
                if(mpp.find(t)!=mpp.end()){
                    vector<int>temp={nums[i],nums[j],t};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                    
                }
                mpp.insert(nums[j]);
            }

        }
        vector<vector<int>>ans(st.begin(),st.end());

        return ans;
        
    }
};
