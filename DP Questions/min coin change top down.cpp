#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define translow transform(s.begin(),s.end(),s.begin(),::tolower);
#define transup transform(s.begin(),s.end(),s.begin(),::toupper);
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll mod=1e9+7;

    ll coin(ll n,ll x,ll dp[],ll coins[])
    {
        if(x==0)
            return 0;

        if(dp[x]!=0)
            return dp[x];

        ll mn=LLONG_MAX;
        for(ll i=0;i<n;i++)
        {
            if(x-coins[i]>=0)
            {
                ll temp=coin(n,x-coins[i],dp,coins);
                mn=min(temp+1,mn);
            }
        }
        dp[x]=mn;
        return dp[x];
    }
 
 
int main() {
				fast
                #ifndef ONLINE_JUDGE
                freopen("input.txt","r",stdin);
                freopen("output.txt","w",stdout);
                #endif

                
                	ll m,n;
                	cin>>m>>n;
                	ll arr[n];
                	for(ll i=0;i<n;i++)
                	cin>>arr[i];

                    ll dp[300]={0};
                    dp[0]=0;
                    cout<<coin(n,m,dp,arr);
                

                return 0;
            }