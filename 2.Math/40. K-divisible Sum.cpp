

//Bismillahir Rahmanir Raheem
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
        double n,k; //you must take double here!!!!!!
        cin>>n>>k;
        ll f = ceil(n/k);
        k = k*f;
        int res = ceil(k/n);
        cout<<res<<"\n";
        
    }
    return 0;
}
