/*Given the structure of a company, your task is to calculate for each employee the number of their subordinates.*/

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void dfs1(ll node,vector<ll>& ct,vector<ll>& vis1,vector<ll> adj[]){
        vis1[node]=1;
        for(auto it : adj[node]){
            if(!vis1[it]){
                dfs1(it,ct,vis1,adj);
                ct[node] += ct[it];
            }
        }
}
    
int main() {
    ll n,i;
    cin>>n;
    vector<ll> adj[n+1];
    
    for(i=2;i<=n;i++){
        ll x;
        cin>>x;
        adj[x].push_back(i);
        adj[i].push_back(x);
    }
 
    vector<ll> ct(n+1,1),vis1(n+1,0);
    dfs1(1,ct,vis1,adj);
    
    for(i=1;i<=n;i++) cout<<ct[i]-1<<" ";
    cout<<endl;
        
 
    return 0;
}