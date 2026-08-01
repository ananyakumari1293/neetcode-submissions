class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mI=0;
        for(int i=0;i<nums.size();i++){
            if(i>mI)return false;
            mI=max(i+nums[i],mI);
            if(mI>nums.size()-1)return true;
        }
        return true;
        
    }
};
