//bismillah
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; //numero string
    cin>>s;
    
    int n=s[0]-'0';
    if(  n>4 && n<9 )//invert
        n=9-n;
    s[0]='0'+n;
    
    for(int i=1; i<s.size(); i++)
    {
        int x=s[i]-'0';
        if(x>4)//invert
            x=9-x;
        s[i]='0'+x;  //converting integer to character
    }
    cout<<s;
    
    return 0;
}