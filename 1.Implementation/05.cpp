#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    
    int l=min(x1,min(x2,x3));
    int r=max(x1,max(x2,x3));
    
    
    cout<<abs(l-r);
    
    return 0;
}