/*Consider a money system consisting of n coins. Each coin has a positive integer value. Your task is to calculate the number of distinct ordered ways you can produce a money sum x using the available coins.*/

#include<bits/stdc++.h>
using namespace std;
 
const int N = (int)2e5 + 100;
 
#define gc getchar_unlocked
#define PI 3.1415926535897932384626
#define f first
#define s second
#define pb push_back
#define pp pop_back
#define mp make_pair
 
typedef long long ll;


int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int mod = 1e9+7;
  int n,x;
  cin>>n>>x;
  vector<int> c(n);
  for (int&v : c) cin >> v;

  vector<vector<int>> dp(n+1,vector<int>(x+1,0));
  dp[0][0] = 1;

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= x; j++) {
      dp[i][j] = dp[i-1][j];
      int left = j-c[i-1];
      if (left >= 0) {
	(dp[i][j] += dp[i][left]) %= mod;
      }
    }
  }
  cout << dp[n][x] << endl;
 
 
 
    return 0; 
}
    
   
 
 
   
   
    
