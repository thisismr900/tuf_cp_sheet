//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    string s;
    cin>>s;
 
    int luckyDigitCount=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] =='4' || s[i]=='7')
            luckyDigitCount++;
    }
    
    if(luckyDigitCount ==4 || luckyDigitCount ==7 )
        cout<<"YES";
    else
        cout<<"NO";
    
    
    return 0;
}