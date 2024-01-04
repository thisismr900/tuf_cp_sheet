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
ll miniXmaxi(ll num){
  int mini=10,maxi=-1;

  while(num>0){
    int lastDigit = num%10;
    mini = min(mini, lastDigit);
    maxi = max(maxi, lastDigit);
    if(mini==0)break;
    num/=10;
  }
  return mini*maxi;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll testcases;
    cin>>testcases;
    while(testcases--){
        ll a1,k;
        cin>>a1>>k;


        if(k==1){
          cout<<a1<<"\n";
          continue;
        }
        ll i=2;
        while(i<=k){
          ll a_next = a1 + miniXmaxi(a1);
          if(a_next == a1)
            break;
          a1=a_next;          
          i++;
        }
        cout<<a1<<"\n";
        
    }
    return 0;
}


