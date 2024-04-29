/*You are given a tree consisting of n nodes.
Your task is to determine for each node the sum of the distances from the node to all other nodes.*/

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void dfs1(ll node,vector<ll>& ct,vector<ll>& vis1,vector<ll>& sub,vector<ll> adj[]){
        vis1[node]=1;
        for(auto it : adj[node]){
            if(!vis1[it]){
                dfs1(it,ct,vis1,sub,adj);
                ct[node] += ct[it];
                sub[node] += sub[it]+ct[it];
            }
        }
}
    
void dfs2(ll node,ll& n,vector<ll>& ct,vector<ll>& vis2,vector<ll>& ans,vector<ll> adj[]){
    vis2[node]=1;
    for(auto it : adj[node]){
        if(!vis2[it]){
            ans[it] = ans[node]-ct[it]+(n-ct[it]);
            dfs2(it,n,ct,vis2,ans,adj);
        }
    }
}
 
int main() {
    ll n,i;
    cin>>n;
    vector<pair<ll,ll>> edges;
    for(i=0;i<n-1;i++){
        ll x,y;
        cin>>x>>y;
        edges.push_back({x,y});
    }
 
    vector<ll> adj[n+1];
    for(i=0;i<edges.size();i++){
        adj[edges[i].first].push_back(edges[i].second);
        adj[edges[i].second].push_back(edges[i].first);
    }
    vector<ll> ct(n+1,1),sub(n+1,0),vis1(n+1,0),vis2(n+1,0),ans(n+1);
    
    dfs1(1,ct,vis1,sub,adj);
    ans[1]=sub[1];
    dfs2(1,n,ct,vis2,ans,adj);
 
    for(i=1;i<=n;i++) cout<<ans[i]<<" ";
    cout<<endl;
        
 
    return 0;
}