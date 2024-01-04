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
    
    ll testcases;
    cin>>testcases;
    while(testcases--){
        ll a,b,c,x,y,z;
        cin>>a>>b>>c;
        z = pow(10,c-1);
        x=z;y=z;
        while(to_string(x).size()<a)x*=2;
        while(to_string(y).size()<b)y*=3;
        cout<<x<<" "<<y<<"\n";        
    }
    return 0;
}


