/*Your task is to count the number of ways to construct sum n by throwing a dice one or more times. Each throw produces an outcome between 1 and  6.*/

#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
 
 
 
int main() {

  int mod = 1e9+7;
  int n;
  cin>>n;
  vi dp(n+1,0);
  dp[0]=1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= 6 ; j++)
    {
        if(i-j>=0){
      (dp[i]+=dp[i-j])%=mod;
        }
    }
    
  }
  cout<<dp[n]<<endl;
 
    return 0;
}
    
 
 
 
 
 
 
