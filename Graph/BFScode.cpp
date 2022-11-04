#include <bits/stdc++.h> 

void preparedAdjList(unordered_map<int, set<int>>& AdjList, vector<pair<int,int>> &edges){
    for(int i=0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;
        
        AdjList[u].insert(v);    // we use insert in list instead of push back
        AdjList[v].insert(u);
    }
}
void bfs(unordered_map<int, set<int>>&AdjList, unordered_map<int, bool>& visited, vector<int>&ans, int node){
    
    queue<int> q;
    q.push(node);
    visited[node] =1;
    
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();
        
        // store frontNode into ans
        ans.push_back(frontNode);
        
        // traverse all neighbour of frontNode
        for(auto i: AdjList[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
    
    
}
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Write your code here
    unordered_map<int, set<int>> AdjList;
    vector<int> ans;
    unordered_map<int, bool> visited;
    
    preparedAdjList(AdjList, edges);
    // traverse all components of a graph
    for(int i =0; i<vertex; i++){
        if(!visited[i]){
            bfs(AdjList, visited, ans, i);
        }
    }
    return ans;
}