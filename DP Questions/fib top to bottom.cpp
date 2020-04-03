#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define translow transform(s.begin(),s.end(),s.begin(),::tolower);
#define transup transform(s.begin(),s.end(),s.begin(),::toupper);
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll mod=1e9+7;

    ll fib(ll n,ll dp[])
    {
        if(n==0)
            return 0;
        if(n==1 or n==2)
            return 1;
        if(dp[n]!=0)
            return dp[n];
         dp[n]=fib(n-1,dp)+fib(n-2,dp);
         return dp[n];
    }
 
int main() {
				fast
                #ifndef ONLINE_JUDGE
                freopen("input.txt","r",stdin);
                freopen("output.txt","w",stdout);
                #endif

                ll n;
                cin>>n;
               ll dp[1000]={0};
                cout<<fib(n,dp);

                return 0;
            }