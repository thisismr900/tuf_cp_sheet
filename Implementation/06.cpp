//bismillah
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        int terms=0;
        string s = to_string(num);
        vector<int>ans;
        
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            int c = s[i]-'0';
            
            if(c != 0)//valid term
            {
                ans.push_back(c*pow(10,n-1-i));
                terms++;
            }
        }
        
        cout<<terms<<endl;
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}