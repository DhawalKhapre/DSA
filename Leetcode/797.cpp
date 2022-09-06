class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<vector<int>>& graph, vector<int>& temp, int pos, int n)  {
        if(pos == n-1)    {
            temp.push_back(n-1);
            ans.push_back(temp);
            temp.pop_back();
        }
        
        for(int i=0; i<graph[pos].size(); i++)    {
            temp.push_back(pos);
            solve(ans, graph, temp, graph[pos][i], n);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> temp{0};
        int n = graph.size();
        
        for(int i=0; i<graph[0].size(); i++)
            solve(ans, graph, temp, graph[0][i], n);
        
        return ans;
    }
};