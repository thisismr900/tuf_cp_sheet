//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>gift(n);
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>gift[i];
        
        ans[gift[i]-1]=i+1;
        
    }
    for(auto i:ans)
        cout<<i<<" ";
    return 0;
}