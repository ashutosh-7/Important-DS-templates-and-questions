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
               ll dp[100];
               dp[0]=0;
               dp[1]=0;
               for(ll i=2;i<=n;i++)
               {
                 ll x,y,z;
                x=y=z=LLONG_MAX; 
                if(i%2==0)
                    x=dp[i/2];
                if(i%3==0)
                    y=dp[i/3];
                z=dp[i-1];
                dp[i]=min(x,min(y,z))+1;
               }
               cout<<dp[n];

                return 0;
            }