class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<int>ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        for(auto it: mpp){
            p.push({it.second,it.first});
            if(p.size()>k)p.pop();
        }
        
        while(!p.empty()){
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;
    }
};
