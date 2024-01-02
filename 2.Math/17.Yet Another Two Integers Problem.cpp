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
        ll a,b,moves=0;
        cin>>a>>b;

        while(a!=b){
          if( a-b >= 10){
            moves+=(a-b)/10;
            a=a-(10*((a-b)/10));
          }
          else if( a-b > 0 && a-b < 10 ){
            a = a - (a-b);
            moves++;
          }
          else if( a-b > (-10) && a-b < 0 ){
            a = a + abs(a-b);
            moves++;
          }
          else if(a-b <=-10){
            moves+=abs(a-b)/10;
            a=a+(10*((b-a)/10));
          }
          
          }
        cout<<moves<<"\n";       
        }
    return 0;
}


