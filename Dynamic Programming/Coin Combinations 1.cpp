/*Consider a money system consisting of n coins. Each coin has a positive integer value. Your task is to calculate the number of distinct ways you can produce a money sum x using the available coins.*/

#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
 
 
 
int main() {
    
  int mod = 1e9+7;
  int n,x;
  cin>>n>>x;
   vi c(n);
  for (int i = 0; i < n; i++)
  {
    cin>>c[i];
  }
  vi dp(x+1,0);
  dp[0]=1;
  for (int i = 1; i <=  x; i++)
  {
    for (int j = 0; j < n ; j++)
    {
        if(i-c[j]>=0){
      (dp[i]+=dp[i-c[j]])%=mod;
        }
    }
    
  }
  cout<<dp[x]<<endl;
 
    return 0;
}
    
 
