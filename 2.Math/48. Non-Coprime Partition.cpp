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
    
    ll n;
    cin>>n;

    if(n<3){
      cout<<"No";
    }
    else{
      cout<<"Yes\n";
      ll n1 = ceil(n/2.0);//size of s1
      ll n2 = n/2;//size of s2
      cout<<n1<<" ";
      for(int i=1; i<=n; i+=2)cout<<i<<" ";
      cout<<" "<<n2<<" ";
      for(int i=2; i<=n; i+=2)cout<<i<<" ";
    }




    return 0;
}


