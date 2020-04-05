#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll mod=1e9+7;

                     

int main() {
                fast
                #ifndef ONLINE_JUDGE
                freopen("input.txt","r",stdin);
                freopen("output.txt","w",stdout);
                #endif
                ll t;
                cin>>t;
                while(t--)
                {
                    ll n,m;
                    cin>>n>>m;
                    ll arr[100][100];
                    ll dp[100][100];

                    for(ll i=1;i<=n;i++)
                    {
                        for(ll j=1;j<=m;j++){
                            cin>>arr[i][j];
                            dp[i][j]=0;
                        }
                    }
                    for(ll i=1;i<=n;i++)
                    {
                        dp[i][1]=arr[i][1]; //pehle column ki sb ki same vale hogi
                    }

                    for(ll i=2;i<=m;i++) //column column vise hum bharenge
                    {
                        for(ll j=1;j<=n;j++)  //row
                        {
                            ll x=0,y=0,z=0;
                            if(j-1>=1 and i-1>=1)
                             x=dp[j-1][i-1]+arr[j][i];
                            if(j+1<=n and i-1>=1)
                            y=dp[j+1][i-1]+arr[j][i];
                            if( i-1>=1)
                            z=dp[j][i-1]+arr[j][i];
                            dp[j][i]=max(x,max(y,z));
                        }
                    }
                    ll ans=0;
                    for(ll i=1;i<=n;i++)
                        ans=max(ans,dp[i][m]);
                    cout<<ans<<endl;
                    
                    
                }

                return 0;
            }