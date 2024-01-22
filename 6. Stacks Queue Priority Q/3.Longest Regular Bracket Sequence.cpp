//Bismillahir Rahmanir Raheem
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;cin>>s;
    stack<int>stack;
    vector<int>dp(s.size()+1);
     
    for(int i=0; i<s.size(); i++){
      char c = s[i];
      if(c == '(')
        stack.push(i);
      else{
        if(stack.size()>0){
          int j = stack.top();
          stack.pop();
          // cout<<" j:"<<j<<"   i:"<<i<<endl;
          dp[i] = i-j+1;
          if(j>0)
            dp[i]+=dp[j-1];
          // cout<<"dp["<<i<<"]:"<<dp[i]<<endl;
        }
      }
    }

    int maxi = 0;
    int cntOfMaxi = 0;
    for(int i=0; i<dp.size(); i++){
      // cout<<dp[i]<<" ";
      if(dp[i]>maxi){
        maxi = dp[i];
        cntOfMaxi=1;
      }  
      else if(dp[i] == maxi){
        cntOfMaxi++;
      }
    }

    if(maxi == 0)cout<<"0 1\n";
    else cout<<maxi<<" "<<cntOfMaxi;
    return 0;
}


