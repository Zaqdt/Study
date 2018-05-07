#include <iostream>
#include <cstring>
using namespace std;  
const int MAXN = 200005;
int dp[MAXN];
int val[MAXN];           // 价值
int c[MAXN];             // 体积
int n,m;
int main()
{
  while(cin>>n>>m){
    for(int i = 0;i<n;i++){
      cin>>c[i]>>val[i];
    }
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++){
      for(int j=m;j>=c[i];j--){
        dp[j] = max(dp[j],dp[j-c[i]]+val[i]);
      }
    }
    cout<<dp[m]<<endl;
  }
  return 0;
}
