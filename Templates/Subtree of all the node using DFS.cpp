#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll mod=1e9+7;		
vector<ll>adj[200005];
ll visited[200005];	
ll start[200005];
ll endd[200005];
vector<ll>printOrder;

			void dfs(ll node,ll &b)
			{
				visited[node]=1;
				start[node]=b;
				printOrder.pb(node);
				b+=1;

				for(auto it:adj[node])
				{
					if(visited[it]==0)
					{
					dfs(it,b);
					}
				}

				endd[node]=b;
			}
	   

			void print(ll n)
			{
				
				for(ll i=1;i<=n;i++)
				{
					
					cout<<"Subtree at Node = "<<i-1<<"   -> ";
					for(ll j=start[i];j<endd[i];j++)
					{
						if(printOrder[j]==i)
						continue;
						cout<<printOrder[j]<<" ";
					}
					cout<<endl;
				}
			}

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
                for(ll i=1;i<=m;i++)
				{
					ll a,b;
					cin>>a>>b;
					adj[a].pb(b);
					adj[b].pb(a);
					
				}
				ll b=0;
				dfs(1,b);
				for(auto it:printOrder)
				cout<<it<<" ";
				cout<<endl;
				print(n);


				cout<<endl;
                
			}
			return 0;
		 }	


