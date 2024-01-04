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
1:6x1
2:6x2
.
.
.
n:6xn
sum = 6*n*(n+1)/2
cells affected = sum+1
*****************************************/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin>>n;
    cout<<3*n*(n+1) +1;

    return 0;
}


