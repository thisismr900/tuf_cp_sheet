#define MOD 1000000007
#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        cout<<2<<endl;

        for(int i=n-1; i>=1; i--){
            if(i==n-1)
                cout<<n<<" "<<i<<endl;
            else
                cout<<i+2<<" "<<i<<endl;
        }
    }
    return 0;
}