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
    
    ll n;
    bool ok = false;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0; i<n; i++)cin>>a[i];
    ll v = 1<<n;
    // cout<<"v:"<<v<<endl;
    for(ll i = 0; i < (1<<n) ; i++){
      ll sum = 0;
      // cout<<endl<<"i:"<<i<<endl;
      for(ll bits = 0; bits<n; bits++){
        // cout<<"bits:"<<bits<<endl;
        if(i & (1<<bits) )//set bit
          sum+=a[bits];
        else sum-=a[bits];
      }
        // cout<<"sum:"<<sum<<endl;
      if(sum%360 == 0){
        ok = true;
        break;
      }
    }
    if(ok)
      cout<<"yes\n";
    else cout<<"no"<<"\n";
    
    return 0;
}

 