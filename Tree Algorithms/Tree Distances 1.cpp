/*You are given a tree consisting of n nodes.
Your task is to determine for each node the maximum distance to another node.*/

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
 
ll bfs1(ll node,ll& n,vector<ll> adj[]){
    queue<ll> q;
    q.push(node);
    vector<ll> vis(n+1,0);
    ll node1,i;
    while(!q.empty()){
        ll m = q.size();
        for(i=0;i<m;i++){
            ll node = q.front();
            vis[node]=1;
            node1 = node;
            q.pop();
            for(auto it : adj[node]){
                if(!vis[it]) q.push(it);
            }
        }
    }
    return node1;
}
 
void bfs2(ll node,ll n,vector<ll>& v,vector<ll> adj[]){
    queue<ll> q;
    q.push(node);
    vector<ll> vis(n+1,0);
    ll ct = -1,i;
    while(!q.empty()){
        ll m = q.size();
        ct++;
        for(i=0;i<m;i++){
            ll node = q.front();
            v[node] = max(v[node],ct);
            vis[node]=1;
            q.pop();
            for(auto it : adj[node]){
                if(!vis[it]) q.push(it);
            }
        }
    }
}
    
 
int main() {
    ll n,i;
    cin>>n;
    vector<pair<int,int>> edges;
    for(i=1;i<=n-1;i++){
        ll x,y;
        cin>>x>>y;
        edges.push_back({x,y});
    }
    vector<ll> adj[n+1];
 
    for(i=0;i<edges.size();i++){
        adj[edges[i].first].push_back(edges[i].second);
        adj[edges[i].second].push_back(edges[i].first);
    }
    ll node1 = bfs1(1,n,adj);
    ll node2 = bfs1(node1,n,adj);
    vector<ll> v(n+1,0);
 
    bfs2(node1,n,v,adj);
    bfs2(node2,n,v,adj);
 
    for(i=1;i<=n;i++) cout<<v[i]<<" ";
    cout<<endl;
 
 
    return 0;
}