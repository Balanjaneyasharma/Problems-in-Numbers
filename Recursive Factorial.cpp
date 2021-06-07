#include<iostream>
using namespace std;
int dp[10000];
int fac(int n)
{
  if(n<=1)
  {
    dp[n]=1;
    return 1;
  }
  if(dp[n]!=0)
   {
      return dp[n];
   }
   return dp[n]=n*fac(n-1);
}
int main()
{
  int n;
  cin>>n;
  cout<<fac(n)<<'\n';
  for(int i=0;i<=n;i++)
  {
     cout<<dp[i]<<' ';
 }
}
