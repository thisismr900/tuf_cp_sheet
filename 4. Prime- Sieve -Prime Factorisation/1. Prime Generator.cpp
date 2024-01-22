//Bismillahir Rahmanir Raheem
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#include<bits/stdc++.h>
using namespace std;
ll N = 1e6;
vector<bool> sieve(N+1,true);


void createSieve(){
	sieve[0]= sieve[1]=false;
  
  for(ll i=2; i*i <= N; i++){
    if(sieve[i]){
      // make its multiple as false
      for(ll j=i*i; j<=N; j+=i)
        sieve[j] = false;
    }
  }
}

vector<ll> generatePrimes(ll r){
	vector<ll>ds;
	for(ll i=2; i<=r; i++){
		if(sieve[i])
			ds.pb(i);
	}
	return ds;
}
	

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    createSieve();
    ll testcases;
    cin>>testcases;
    while(testcases--){
        ll l,r;
        cin>>l>>r;
        
        //step 1:
        vector<ll>ds = generatePrimes(sqrt(r)); // ds has all primes till sqrt(r)
		
		vector<bool> dummy(r-l+1,true);
		
		for(auto pr:ds){
			ll firstMultiple = (l/pr)*pr;
			if(firstMultiple<l)firstMultiple+=pr;
			
			for(ll j=max(firstMultiple,pr*pr); j<=r; j+=pr){
				dummy[j-l] = false;
			}
		}
		//get all primes
		for(ll i=l; i<=r; i++){
			if(i == 0 || i==1)continue;
			if(dummy[i-l] == true)
				cout<<i<<"\n";
		}
		cout<<"\n";
 
    }
    return 0;
}


