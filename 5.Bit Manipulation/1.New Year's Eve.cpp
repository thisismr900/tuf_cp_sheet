#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long k,n,m=1;
    cin>>n>>k;

    if(k==1)
    {
        cout<<n;
        return 0;
    }
    while(m<n)
    {
        m=2*m+1;
    }

    cout<<m;

    return 0;
}