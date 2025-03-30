class Solution {
public:
    int reverseDegree(string s) {
        int sum =0;
        int i = 1;
        for(char x:s){
            sum += ('z'-x + 1) * i;
            ++i;
        }
        return sum;   
    }
};
