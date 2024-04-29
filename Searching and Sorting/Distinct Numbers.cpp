/*You are given a list of n integers, and your task is to calculate the number of distinct values in the list.*/

#include<bits/stdc++.h>
using namespace std;
const int N1 = (int)2e5 + 100;
#define PI 3.14159265358979323846264338327
#define forn for(i=0;i<n;i++)
#define fornn for(i=1;i<=n;i++)
#define all(x) (x).begin(), (x).end()
#define f first
#define s second
#define pb push_back
#define pp pop_back
#define mp make_pair
#define yes cout<<"YES"<<'\n';
#define no  cout<<"NO"<<'\n';
#define one  cout<<-1<<'\n';
#define nl  '\n';
typedef long long ll;



void solve(){
 ll n,i,ct=1;
 cin>>n;
 ll a[n];
 forn cin>>a[i];
 sort(a,a+n);
 for(i=0;i<n-1;i++){
  if(a[i]!=a[i+1]) ct++;
 }
 cout<<ct<<nl
}
 
 
int main(){
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     //ll t;
     //cin>>t;
     //while(t--){  
      solve();
     //}
    return 0;
}
