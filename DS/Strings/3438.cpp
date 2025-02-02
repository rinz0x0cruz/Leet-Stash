class Solution {
public:
    string findValidPair(string s) {
        unordered_map<int,int> mp;
        for(auto& x:s) ++mp[x];
        int n=s.size();
        for(int i=0;i<n-1;++i){
            char x='0'+mp[s[i]];
            char y='0'+mp[s[i+1]];
            if(s[i]!=s[i+1] && x==s[i] && y==s[i+1]) return string(1,s[i])+s[i+1];
        }
        return "";
    }
};
