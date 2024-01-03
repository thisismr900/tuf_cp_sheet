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
        double H,L;
        cin>>H>>L;
        cout<<fixed << setprecision(15) << ((L+H)*abs(L-H))/(2.0*H);
        
    }
    return 0;
}


