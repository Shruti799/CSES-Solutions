/*You are given a tree consisting of n nodes.
The diameter of a tree is the maximum distance between two nodes. Your task is to determine the diameter of the tree.*/

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void dfs1(ll node,ll& mx,ll& ct,vector<ll>& vis1,vector<ll> adj[]){
        vis1[node]=1;
        for(auto it : adj[node]){
            if(!vis1[it]){
                ct++;
                dfs1(it,mx,ct,vis1,adj);
            }
        }
        mx = max(mx,ct);
        ct--;
}
    
 
int main() {
    ll n,i,ct=0,node1;
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
 
    vector<int> vis(n+1,0);
    queue<int> q;
    q.push(1);
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
    for(i=1;i<=n;i++) vis[i]=0;
    q.push(node1);
    while(!q.empty()){
        ll m = q.size();
        ct++;
        for(i=0;i<m;i++){
            ll node = q.front();
            vis[node]=1;
            q.pop();
            for(auto it : adj[node]){
                if(!vis[it]) q.push(it);
            }
        }
    }
    cout<<ct-1<<endl;
    return 0;
}