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

                ll n;
                cin>>n;
                ll dp[101];
                dp[0]=0;
                dp[1]=1;
                for(ll i=2;i<=n;i++)
                {
                    dp[i]=dp[i-1]+dp[i-2];
                }
                cout<<dp[n];

                return 0;
            }