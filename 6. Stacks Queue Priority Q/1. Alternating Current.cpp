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
    
    string s;
    cin>>s;
    stack<char>stack;
    
    for(auto c:s){
      if(stack.size()==0)
        stack.push(c);
      else{
        if(stack.top() == c)
          stack.pop();
        else
          stack.push(c);
      }
    }
    if(stack.size()==0)
      cout<<"YES";
    else cout<<"NO";
    return 0;
}

 