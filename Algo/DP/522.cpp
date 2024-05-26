#define MOD 1000000007

class Solution {
public:
    vector<vector<vector<int>>> v;

    int dfs(int n, int p, int c) {
        if (n == 0) return 1;
        if (v[n][p][c] != -1) return v[n][p][c];
        int sum = 0;
        sum = (sum + dfs(n - 1, p, 0)) % MOD;
        if (p < 1) sum = (sum + dfs(n - 1, p+1, 0)) % MOD;
        if (c < 2) sum = (sum + dfs(n - 1, p, c + 1)) % MOD;
        return v[n][p][c] = sum % MOD;
    }

    int checkRecord(int n) {
        if (n == 1) return 3;
        v.resize(n + 1, vector<vector<int>>(2, vector<int>(3, -1)));
        return dfs(n,0,0)%MOD;
    }
};
