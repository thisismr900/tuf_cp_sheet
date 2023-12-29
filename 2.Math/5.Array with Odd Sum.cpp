#define MOD 1000000007
#define ll long long
#include<bits/stdc++.h>
using namespace std;
/****************************************************************/

int main()
{
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        
        int sum=0,countOdd=0, countEven=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]%2) countOdd++;
            else countEven++;
        }
        
        //n=even && countOdd=0 -> NO
        if(countOdd==0 || (n%2==0 && countEven==0) )
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        
        
        
        
        
        
    }
    return 0;
}