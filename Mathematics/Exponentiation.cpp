/*Your task is to efficiently calculate values a^b modulo 10^9+7.
Note that in this task we assume that 0^0=1.*/

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
const long long M = 1e9+7;


ll pw(ll a, ll b){
  if(b==1) return a%M;
  if(b==0) return 1;
  ll pro = pw(a,b/2);
  if(b%2==0) return (pro*pro)%M;
  else return (((pro*pro)%M)*a)%M;
}


void solve(){
  ll n;
  cin>>n;
  while(n--){
    ll a,b;
    cin>>a>>b;
    cout<<pw(a,b)<<nl
  }
  
}
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     //ll t;
     //cin>>t;
    // while(t--){  
       solve();
     //}
    return 0;
}
