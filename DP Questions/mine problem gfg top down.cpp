#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll mod=1e9+7;

                ll step(ll i,ll j,ll arr[][100],ll n,ll m,ll dp[][100])
                {
                    //base case
                    if(j==m){
                        dp[i][j]=arr[i][j];
                    return arr[i][j];}

                    ll op1=0,op2=0,op3=0;
                    //right step
                    if(dp[i][j]!=0)
                        return dp[i][j];
                    else{
                    if(j+1<=m)
                    
                     op1=arr[i][j]+step(i,j+1,arr,n,m,dp);
                    
                        

                     //right up       
                    if(j+1<=m and i-1>=1)
                    op2=arr[i][j]+step(i-1,j+1,arr,n,m,dp);
                
                    //right down
                    if(j+1<=m and i+1<=n)
                     op3=arr[i][j]+step(i+1,j+1,arr,n,m,dp);
              


                    return dp[i][j]=max(op1,max(op2,op3));
                }

                }            

int main() {
                fast
                // #ifndef ONLINE_JUDGE
                // freopen("input.txt","r",stdin);
                // freopen("output.txt","w",stdout);
                // #endif
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
                    ll ans=0;
                    for(ll i=1;i<=n;i++)
                    {
                        ans=max(ans,step(i,(ll)1,arr,n,m,dp));
                    }
                    cout<<ans<<endl;
                    
                }

                return 0;
            }