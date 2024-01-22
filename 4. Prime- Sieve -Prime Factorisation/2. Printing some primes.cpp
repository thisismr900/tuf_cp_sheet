//Bismillahir Rahmanir Raheem
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#include<bits/stdc++.h>
using namespace std;

const int N = 1e8;
vector<bool> sieve(N+1,true);
vector<int>primes;

void createSieve(){
  
	primes.pb(-1);
	sieve[0]=sieve[1]=false;
  	
  	for(int i=2; i*i <= N; i++){
    	if(sieve[i]){
    		// make its multiple as false
     		for(int j=i*i; j<N; j+=i)
        		sieve[j] = false;
    	}
  	}
  	
  	for(int i=2; i<=N; i++){
  		if(sieve[i])
  			primes.pb(i);
  	}

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    createSieve();
    for(int i=1; i<primes.size(); i+=100){
    	cout<<primes[i]<<"\n";
    }
    return 0;
}


