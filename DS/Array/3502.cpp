class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int n = cost.size();
        vector<int> answer(n,-1);
        int mini = cost[0];
        for(int i=0;i<n;++i){
            mini = min(mini,cost[i]);
            answer[i] = mini;
        }
        return answer;
    }
};
