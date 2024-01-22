//Bismillahir Rahmanir Raheem
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#include<bits/stdc++.h>
using namespace std;
ll N = 100000001;
vector<bool> sieve(100000001,true);
vector<ll>primes;
void createSieve(){
  
  for(ll i=2; i*i <= N; i++){
    if(sieve[i]){
      // make its multiple as false
      for(ll j=i*i; j<=N; j+=i)
        sieve[j] = false;
    }
  }
  primes.pb(-1);
  for(ll i=2; i<=N; i++){
    if(sieve[i])
      primes.pb(i);
  }

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    createSieve();
    ll q;
    cin>>q;
    while(q--){
        ll k;
        cin>>k;
        cout<<primes[k]<<"\n";
        
    }
    return 0;
}


