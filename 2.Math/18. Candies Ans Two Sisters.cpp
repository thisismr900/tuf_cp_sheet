#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#include<bits/stdc++.h>
using namespace std;
/****************************************************************/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll testcases;
    cin>>testcases;
    while(testcases--){
      ll n;
      cin>>n;
      if(n<=2)
        cout<<0;
     else
        cout<<(n-1)-(n/2);
    cout<<"\n";
        
    }
    return 0;
}


