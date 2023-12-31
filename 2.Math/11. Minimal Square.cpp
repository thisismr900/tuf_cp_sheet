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
        ll l,b;
        cin>>l>>b;
        if(b>l)swap(b,l);

        if(l>=2*b)
          cout<<l*l;
        else 
          cout<<(2*b)*(2*b);
        cout<<"\n";
    }
    return 0;
}


