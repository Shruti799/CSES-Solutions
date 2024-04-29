/*There are n applicants and m free apartments. Your task is to distribute the apartments so that as many applicants as possible will get an apartment.
Each applicant has a desired apartment size, and they will accept any apartment whose size is close enough to the desired size.*/

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
 ll n,m,k,i=0,j=0,ct=0;
 cin>>n>>m>>k;
 ll a[n],b[m];
 forn cin>>a[i];
 for(i=0;i<m;i++) cin>>b[i];
 
 sort(a,a+n);
 sort(b,b+m);
 
 i=0,j=0;
 while(i<n && j<m){
  if(b[j]>=a[i]-k && b[j]<=a[i]+k){
    ct++,i++,j++;
  }
  else if(b[j]<a[i]-k) j++;
  else i++;
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
