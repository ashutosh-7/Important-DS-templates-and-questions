#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll mod=1e9+7;			
ll N=100000;
	   
int main() {
			fast
			#ifndef ONLINE_JUDGE
			freopen("input.txt","r",stdin);
			freopen("output.txt","w",stdout);
			#endif

               bool check[100000];
               for(ll i=0;i<N;i++) check[i]=1;
               check[1]=0;

               vector<ll>prime;
               for(ll i=2;i*i<N;i++)
               {
                    for(ll j=i*i;j<N;j=j+i)
                    check[j]=0;
               }
               for(ll i=2;i<N;i++)
               if(check[i]==1)
               prime.pb(i);


               ll t;
               cin>>t;
               while(t--)
               {
                    ll a,b;
                    cin>>a>>b;
                    ll arr[b-a+1];
                    for(ll i=0;i<(b-a+1);i++) arr[i]=1;

                    for(ll i=0;i<prime.size() and prime[i]*prime[i]<=b;i++)
                    {
                         ll x=(a+i)/prime[i];
                         x=(x*prime[i]);
                         
                         if(x<a)
                         x+=prime[i];

                         if(prime[i]>=a)
                         {
                              x=2*prime[i];
                         }
                         
                         for(ll j=x;j<=b;j=j+prime[i])
                         {
                             
                              arr[j-a]=0;
                         }
                    }
                    for(ll i=0;i<(b-a+1);i++)
                    if(arr[i]==1 and (a+i)!=1)
                    cout<<a+i<<endl;

                    cout<<endl;
               }
			
			return 0;
		 }	
