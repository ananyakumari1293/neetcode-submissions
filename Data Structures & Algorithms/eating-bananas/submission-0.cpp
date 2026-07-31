class Solution {
public:
    int reqt(vector<int>&piles,int hrs){
        int th=0;
        for(int i=0;i<piles.size();i++){
            int rh=ceil((double)piles[i]/hrs);
            th+=rh;

        }
        return th;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int hi=0;
        for(int i=0;i<piles.size();i++){
            hi=max(hi,piles[i]);

        }
        int l=1;
        while(l<=hi){
            int mid=l+(hi-l)/2;
            if(reqt(piles,mid)<=h)hi=mid-1;
            else l=mid+1;
        }
        return l;;
    }
};
