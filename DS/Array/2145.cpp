class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        int n=differences.size();
        long long temp=lower,res=0;
        long long minElement,maxElement;
        minElement=maxElement=lower;

        for(int i=0;i<n;++i){
            temp+=differences[i];
            minElement = min((int)temp,(int)minElement);
            maxElement = max((int)temp,(int)maxElement);
        }
        
        int diff = lower - minElement;
        maxElement+=diff;
        if(maxElement>upper) return 0;
        return upper-maxElement+1;

    }
};
