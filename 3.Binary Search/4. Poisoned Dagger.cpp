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
bool canKill(ll d, ll n, ll health, vector<ll>&attackFreq){
  //return true: if dragon is killed with 'd' as duration of poison effect
  // if(d*n<health)return false;
  ll damage=0;
  for(int i=0; i<n; i++){
    if(i==n-1)
      damage+=d;
    else
      damage += min(d,attackFreq[i+1]-attackFreq[i]);
    
    if(damage >= health)
      return true;
  }
  return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll testcases;
    cin>>testcases;
    while(testcases--){
        ll n; // no of attacks
        ll h; //health of dragon
        cin>>n>>h;
        vector<ll>a(n);
        for(int i=0; i<n; i++)  cin>>a[i];//attack frequency
        
        ll l = 0; //bad
        ll r = h; // good
        ll mid;
        while(l+1<r){
          mid = l+(r-l)/2;
          if(canKill(mid,n,h,a))
            r=mid;
          else 
            l=mid;
          
          // cout<<"L: "<<l<<" "<<"R:"<<r<<endl;
            
        }
        cout<<r<<"\n";
        
    }
    return 0;
}


