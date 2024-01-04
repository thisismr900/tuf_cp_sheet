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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll testcases=1;
    // cin>>testcases;
    while(testcases--){
        ll n, maxiPylon=-1;
        cin>>n;

        for(int i=1; i<=n; i++){
          ll pylon;
          cin>>pylon;
          maxiPylon = max(maxiPylon, pylon);
        }
        cout<<maxiPylon;
        
    }
    return 0;
}


