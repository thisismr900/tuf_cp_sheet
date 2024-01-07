//Bismillahir Rahmanir Raheem
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#include<bits/stdc++.h>
using namespace std;
/****************************************
LOGIC:

*****************************************/
bool canBake(ll c, vector<ll>&a, vector<ll>&b, ll n, ll k){
  ll reqMagicPowder = 0;
  // for 'c' cookies:
  for(int i=0; i<n; i++){
    ll deficit = c*(a[i])-b[i];
    if(deficit>0){
      reqMagicPowder+=(deficit);
    }
    if(reqMagicPowder>k)return false;
  }
  return true; //possible to bake 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n); //req n indgredients
    vector<ll>b(n); // n ingredients present
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    
    //111111111111111111111111000000000000000000
    ll l = 0;//good
    ll r = 1e10; //bad
    ll mid;
    while(l+1<r){
      mid = l+(r-l)/2;
      if(canBake(mid,a,b,n,k))
        l = mid;
      else 
        r = mid;
    }
    cout<<l;
    
    return 0;
}


