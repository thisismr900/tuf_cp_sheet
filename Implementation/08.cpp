//bismillah
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    vector<string>collection(n);
    
    for(int i=0; i<=n; i++)
        cin>>collection[i];
        
    map<char,int>mp;
    
    for(auto col:collection){
        mp[col[0]]++;
    }
    
    int totalFaces= mp['T']*4+mp['C']*6+mp['O']*8 +mp['D']*12 + mp['I']*20;
    
    cout<<totalFaces;
    return 0;
}