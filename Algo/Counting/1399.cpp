class Solution {
public:
    int sum(int x){
        int sum = 0;
        while(x){
            sum+=x%10;
            x/=10;
        }
        return sum;
    }
    int countLargestGroup(int n) {
        if(n<10) return n;
        vector<int> groups(46,0);
        int maxGroup = 1;
        int count = 0;
        for(int i=1;i<=n;++i){
            maxGroup=max(maxGroup,++groups[sum(i)]);
        }
        for(const int& x:groups) (x==maxGroup) ? ++count : count;
        return count; 
    }
};
