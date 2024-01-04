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
        ll h1, h2, h3;
        cin>>h1>>h2>>h3;
        ll totalHealth = h1+h2+h3;
        ll minHealth = (totalHealth)/9;
        if( (totalHealth %9 ==0) && h1>=minHealth && h2>=minHealth && h3>=minHealth )
          cout<<"yes\n";
        else
          cout<<"no\n";
          

    }
    return 0;
}


