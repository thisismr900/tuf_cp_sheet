//Bismillahir Rahmanir Raheem
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
        string s1,s2;
        cin>>s1>>s2;
        ll n1=s1.size(), n2 = s2.size();
        //s1->"aba" n1=3
        //s2:"ab"  n2=2
        string res1="",res2="";
        ll lcm = (n1*n2)/__gcd(n1,n2);
        for(int i=1; i<= lcm/n1; i++)
          res1+=s1;
        //res1: "abaaba"
        for(int i=1; i<= lcm/n2; i++)
          res2+=s2;
        //res2: "ababab"
        if(res1==res2)
          cout<<res1;
        else 
          cout<<-1;
        cout<<"\n";
        
          
        
        
    }
    return 0;
}


