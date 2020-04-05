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
                
                ll n;
                cin>>n;
                ll arr[n+1];
                for(ll i=1;i<=n;i++)
                    cin>>arr[i];
                ll dp[100][100];
                for(ll i=1;i<=n;i++)
                {
                    for(ll j=1;j<=n;j++)
                    {
                        if(i>j)
                            dp[i][j]=0;
                        if(i==j)
                        {
                            dp[i][j]=n*arr[i];
                        }
                    }
                }
                ll day=n-1;
                for(ll bot=2;bot<=n;bot++)
                {
                    ll i=1;
                    ll j=bot;
                    while(j<=n)
                    {

                        ll op1=arr[i]*day+dp[i+1][j];
                        ll op2=arr[j]*day+dp[i][j-1];
                        dp[i][j]=max(op1,op2);
                        i+=1;
                        j+=1;
                    }
                    day-=1;

                }
                // for(ll i=1;i<n;i++)
                // {
                //     for(ll j=1;j<=n;j++)
                //         cout<<dp[i][j]<<" ";
                //     cout<<endl;
                // }
                cout<<dp[1][n];
                return 0;
            }