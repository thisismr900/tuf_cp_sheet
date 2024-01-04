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
    
    ll testcases=1;
    // cin>>testcases;
    while(testcases--){
        ll n;
        cin>>n;
       
        vector<int>v(n);
        for(int i=0; i<n; i++)
          cin>>v[i];
          
        sort(v.begin(), v.end());
        int a = v[n-3];
        int b = v[n-2];
        int c = v[n-1];
        if(c< a+b){
          cout<<"YES\n";
          cout<<v[n-1]<<" ";
          for(int i=n-3; i>=0; i--)
            cout<<v[i]<<" ";
          
          cout<<v[n-2];
        }
        else cout<<"NO\n";
        
    }
    return 0;
}


