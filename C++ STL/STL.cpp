#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second
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

               //stl algorithms ;

               sort(arr.begin(),arr.end());

               reverse(arr.begin(),arr.end());

               *max_element(vect.begin(), vect.end()); 

               *min_element(vect.begin(), vect.end());

               accumulate(vect.begin(), vect.end(), 0);   //find sum of arrays

               count(vect.begin(), vect.end(), 20);  //count occurence of 20 in array

               find(vect.begin(), vect.end(),5) //find return iterator to elemnt if not presnet to return end iteraror

               // Returns the first occurrence of 20 
               auto q = lower_bound(vect.begin(), vect.end(), 20);


                // Returns the last occurrence of 20 
               auto p = upper_bound(vect.begin(), vect.end(), 20);  //returns iterator

               // Delete second element of vector 
               vect.erase(vect.begin()+1); 


               next_permutation(vect.begin(), vect.end()); 

               prev_permutation(vect.begin(), vect.end()); 






               //containers and iterator

               pair<ll,ll> arr;

               vector<ll>arr;

               set<ll> arr;

               queue<ll> arr;

               priority_queue<ll>arr;

               deque<ll>arr ;

               stack<ll>arr;

               map<ll,ll>arr;

               multimap<ll,ll>arr;

               multiset<ll>arr;

               list<ll>arr; //same as linked list , non contiguous memory allocation

               unordered_map<ll,ll>arr;

               unordered_set<ll>arr; 

               unordered_multimap<ll,ll>arr;

               unordered_multiset<ll,ll>arr;


               for(auto it:arr)
               {
                    //iterators
               }

               arr.begin();
               arr.end();
               arr.push();
               arr.push_back();
               arr.push_front();
               arr.pop();
               arr.pop_front();

               ...etc
               

			return 0;
		 }	
