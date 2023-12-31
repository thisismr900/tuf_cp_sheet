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
        int n;
        cin>>n;
        vector<int>a(n);
        int evensAtOddIdx = 0, oddsAtEvenIdx = 0;
        for(int i=0; i<n; i++)
          cin>>a[i];

        for(int i=0; i<n; i++){
          if(i%2 == 1 && a[i]%2 == 0)
              evensAtOddIdx++;
          else if(i%2 == 0 && a[i]%2 == 1)
              oddsAtEvenIdx++;
          
        }
        if(evensAtOddIdx != oddsAtEvenIdx)
          cout<<-1;
        else 
          cout<<evensAtOddIdx;
        cout<<"\n";
    }
    return 0;
}


