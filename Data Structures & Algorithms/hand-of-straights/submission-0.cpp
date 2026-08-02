class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int g) {
        int n=hand.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[hand[i]]++;
        }
        while(!mpp.empty()){
            int curr=mpp.begin()->first;
            for(int i=0;i<g;i++){
                if(mpp[curr+i]==0)return false;
                mpp[curr+i]--;
                if(mpp[curr+i]<1)mpp.erase(curr+i);
            }
        }
        return true;
    }
    
};
