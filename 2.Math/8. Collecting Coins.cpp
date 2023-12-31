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
        ll a,b,c,n;
        cin>>a>>b>>c>>n;

        if( (n+a+b+c) %3 !=0)
        {
          cout<<"no\n";
          continue;
        }
        ll each = (n+a+b+c)/3;
        if(a>each || b>each|| c>each){
          cout<<"no\n";
        }
        else cout<<"yes\n";

    }
    return 0;
}


