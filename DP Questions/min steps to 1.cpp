#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define translow transform(s.begin(),s.end(),s.begin(),::tolower);
#define transup transform(s.begin(),s.end(),s.begin(),::toupper);
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll mod=1e9+7;
    
    ll steps(ll n,ll dp[])
    {
        if(n==1)
            return 0;
        if(n==2 or n==3)
            return 1;
        if(dp[n]!=0)
            return dp[n];
        ll x,y,z;
        x=y=z=LLONG_MAX;
        if(n%2==0)
            x=steps(n/2,dp)+1;
        if(n%3==0)
            y=steps(n/3,dp)+1;
        z=steps(n-1,dp)+1;
        return dp[n]=min(min(x,y),z);
    }
 
 
int main() {
				fast
                #ifndef ONLINE_JUDGE
                freopen("input.txt","r",stdin);
                freopen("output.txt","w",stdout);
                #endif


                ll n;
                cin>>n;
                ll dp[100]={0};
                cout<<steps(n,dp);

            
                return 0;
            }