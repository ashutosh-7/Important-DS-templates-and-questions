#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define translow transform(s.begin(),s.end(),s.begin(),::tolower);
#define transup transform(s.begin(),s.end(),s.begin(),::toupper);
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll mod=1e9+7;
 
 
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

                    ll dp[300]={-1};
                    dp[0]=0;
                    for(ll i=1;i<=m;i++)
                    {
                        ll mn=LLONG_MAX;
                        for(ll j=0;j<n;j++)
                        {
                            if(i-arr[j]>=0 and dp[i-arr[j]]!=-1)
                            {
                                mn=min(mn,dp[i-arr[j]]+1);
                            }
                        }
                        if(mn!=LLONG_MAX)
                        dp[i]=mn;
                    }
                    // for(ll i=0;i<=m;i++)
                    //     cout<<dp[i]<<" ";
                    cout<<dp[m]<<endl;
                

                return 0;
            }