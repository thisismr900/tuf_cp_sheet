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
        int n,m;
        cin>>n>>m;
        int lights=0;
        if(m%2 ==0)
            lights = n*(m/2);
        else{
            if(n%2==0){
                lights = (n*(m/2))+(n/2);
            }
            else
                lights = (n*(m/2)) + (n+1)/2;
        }
        
        cout<<lights<<endl;
        
    }
    return 0;
}