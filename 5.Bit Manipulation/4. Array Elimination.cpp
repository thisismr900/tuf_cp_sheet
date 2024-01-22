//Bismillahir Rahmanir Raheem
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll testcases;
    cin>>testcases;
    while(testcases--){
      ll n;cin>>n;
      vector<ll>a(n);
      for(ll i=0; i<n; i++)cin>>a[i];
      
      vector<ll>cntSetBits(31,0);
      for(ll bits = 0; bits<= 30; bits++){
        for(ll i=0; i<n; i++){
          if(a[i] & (1<<bits))//set bit
            cntSetBits[bits]++;
        }
      }
      cout<<1<<" ";
      for(ll k=2; k<=n; k++){
        bool ok = true;
        for(ll bits = 0; bits<= 30; bits++){
          if(cntSetBits[bits]>0 && cntSetBits[bits]%k != 0)
          {
            ok=false;
            break;
          }
        }
        if(ok)cout<<k<<" ";
        
      }
      cout<<"\n";
      
        
    }
    return 0;
}


