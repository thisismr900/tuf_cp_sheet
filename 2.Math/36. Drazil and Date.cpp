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
    
    ll testcases=1;
    // cin>>testcases;
    while(testcases--){
        ll a,b,s;
        cin>>a>>b>>s;
        ll minPath = abs(a)+abs(b);

        if(s>=minPath && minPath%2 == s%2)
          cout<<"Yes\n";
        else cout<<"No\n";

        }
        

        
    
    return 0;
}


