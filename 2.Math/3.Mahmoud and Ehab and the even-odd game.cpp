#define MOD 1000000007
#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    string winner= "Mahmoud";
    
    a=n;
    if(n%2)//n is odd
        a=n-1;
    
    n-=a;//n=n-a
    
    if(n==1)
        winner="Ehab";
    
    cout<<winner;
    return 0;
}