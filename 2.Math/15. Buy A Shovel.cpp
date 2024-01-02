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
    
    ll testcases=1;
    // cin>>testcases;
    while(testcases--){
        ll k,r;
        cin>>k>>r;

        for(int i=1; i<=10; i++){
          ll res = ((k%10)*i)%10;
          if(res == r || res ==0){
            cout<<i;
            break;
          }
        }
        
        
    }
    return 0;
}


