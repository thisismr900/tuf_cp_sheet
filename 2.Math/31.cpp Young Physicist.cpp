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
        int n;
        cin>>n;
        int sumx=0, sumy=0, sumz=0;
        while(n--){
            int x,y,z;
            cin>>x>>y>>z;
            sumx+=x;
            sumy+=y;
            sumz+=z;
        }
        if(sumx==0 && sumy==0 && sumz==0)
            cout<<"YES\n";
        else 
            cout<<"NO\n";
        
        
    }
    return 0;
}


