class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m)return false;
        unordered_map<char,int>mpp;
        for(char ch:s){
            mpp[ch]++;
        }
        for(char ch:t){
            mpp[ch]--;
        }
        for(auto it:mpp){
            if(it.second!=0)return false;
        }
        return true;
        
    }
};
