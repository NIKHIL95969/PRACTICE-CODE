#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // Write your code here.
    unordered_map<int, list<pair<int,int>> > adj;
    for(int i = 0; i<edges ; i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];
        
        adj[u].push_back( {v,w});
        adj[v].push_back( {u,w});
    }
    
    vector<int> dist(vertices);
    for(int i=0; i<vertices; i++){
        dist[i] = INT_MAX;
    }
    
    set<pair<int,int> > st;
    
    dist[source] = 0;
    st.insert({0,source});
    while(!st.empty()){
        // fetch top record
        auto top = *(st.begin());
        
        int nodeDistance = top.first;
        int topNode = top.second;
        
        // remove top record now 
        st.erase(st.begin());
        
        //traverse on neighbours
        for(auto neighbour: adj[topNode]){
            if(nodeDistance + neighbour.second < dist[neighbour.first]){
                auto record = st.find({dist[neighbour.first], neighbour.first});
                // if record found,  then earse it
                if(record != st.end()){
                    st.erase(record);
                }
                // distance update
                
                dist[neighbour.first] = nodeDistance + neighbour.second;
                // record push in set
                st.insert({dist[neighbour.first],neighbour.first});   
            }
        }
        
    }
    
    return dist;
}
