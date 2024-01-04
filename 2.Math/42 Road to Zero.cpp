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

op1:   pay a/-  
        x++ or x-- or y++ or y--
op2:   pay b/-  
        (x++ & y++) or (x-- & y--)


ex:
x y
1 3
a    b            b>a. op2 is costlier
391 555
    
x y
1 3
op2
0 2
op1
0 1
op1
0 0
cost = 2*op1 + op2
*****************************************/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll testcases;
    cin>>testcases;
    while(testcases--){
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        ll cost =0;
        int mini = min(x,y);
        if(b<2*a){
          x-=mini;
          y-=mini;
          cost += mini*b;
        }
        cost += (x+y)*a;
        cout<<cost<<"\n";
        
    }
    return 0;
}


