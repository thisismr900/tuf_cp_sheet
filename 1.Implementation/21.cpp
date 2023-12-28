//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        int maxLen = 1;
        int currLen=1;
        vector<int>a(n);
        cin>>a[0];
        for(int i=1; i<n; i++)
        {
            cin>>a[i];
            if(a[i]>a[i-1])
            {
                currLen++;
                maxLen = max(maxLen, currLen);
            }
            else
                currLen = 1;
        }
        
        cout<<maxLen;
    }
    return 0;
}