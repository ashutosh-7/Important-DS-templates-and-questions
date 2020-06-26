#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll mod=1e9+7;		
vector<ll>adj[2000];
ll visited[2000];	
ll degree[2000];

			void dfs(ll node)
			{
				visited[node]=1;
				cout<<node<<" ";
				for(auto it:adj[node])
				{
					if(visited[it]==0)
					{
				
					dfs(it);

					}
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
				ll n,x;
                cin>>n>>x;
                for(ll i=1;i<=n;i++)
				{
					ll a,b;
					cin>>a>>b;
					adj[a].pb(b);
					adj[b].pb(a);
					degree[a]+=1;
					degree[b]+=1;
				}

				vector<ll>arr;
				visited[x]=1;

				
				//print subtree of node = x ke neechay kitne diffrent subtree hai
				for(auto it:adj[x])
				{
					if(visited[it]==0 and it!=x)
					{
						dfs(it);
						cout<<endl;
					}
				}

                
			}
			return 0;
		 }	


