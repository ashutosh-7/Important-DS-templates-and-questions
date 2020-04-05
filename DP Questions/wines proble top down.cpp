#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll mod=1e9+7;
ll n;
ll dp[100][100];
                
                ll wines(ll i,ll j,ll arr[])
                {
                    if(i>j)
                        return 0;
                    if(dp[i][j]!=0)
                        return dp[i][j];
                    ll y=n-j+i;
                    ll op1=arr[i]*y+wines(i+1,j,arr);
                    ll op2=arr[j]*y+wines(i,j-1,arr);
                    return dp[i][j]=max(op1,op2);
                }


int main() {
				fast
                #ifndef ONLINE_JUDGE
                freopen("input.txt","r",stdin);
                freopen("output.txt","w",stdout);
                #endif
                
                     cin>>n;
                    
                   ll arr[n+1];
                for(ll i=1;i<=n;i++)
                {
                    cin>>arr[i];
                }
                cout<<wines(1,n,arr);


                return 0;
            }