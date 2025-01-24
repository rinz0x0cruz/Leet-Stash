class Solution {
private:
    vector<int> iSafe;
    vector<bool> visited;
public:
    bool dfs(vector<vector<int>>& graph,int& root){
        if(graph[root].empty()) return iSafe[root]=1;
        if(iSafe[root]!=-1) return iSafe[root];
        if(visited[root]) return iSafe[root]=0;
        visited[root] = true;
        bool judge = false;
        for(int& x:graph[root]){
            judge = dfs(graph,x);
            if(!judge) return iSafe[x]=0;
        }
        return iSafe[root]=1;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        iSafe.resize(n,-1);
        visited.resize(n,false);
        vector<int> res;
        for(int i=0;i<n;++i)
            if(dfs(graph,i)) res.push_back(i);
        
        return res;
    }
};
