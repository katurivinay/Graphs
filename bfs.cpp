#include <bits/stdc++.h>
using namespace std;
void  bfs(vector<vector<int>> edges , int node , vector<bool> &visited,vector<int>&ans)
{
   queue<int> q;
   q.push(node);
   while(!q.empty()){
       int present_node = q.front();
       ans.push_back(present_node);
       visited[present_node] = true;
       q.pop();
       for(auto child : edges[present_node]){
           if(!visited[child]){
               q.push(child);
           }
       }
   }
}
int main() {
    int n;
    cin>>n;
    vector<vector<int>> edges(n+1);
    int e;cin>>e;
    for(int i = 0 ; i < e ;i++){
        int u , v ; 
        cin>>u>>v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    vector<bool> visited(n+1,false);
    vector<int> ans;
    bfs(edges , 2 , visited , ans);
    for(auto i : ans)cout<<i<<" ";
    return 0;
}
