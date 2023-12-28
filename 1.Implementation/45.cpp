//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string res="YES";
        int i=0,j=n-1;
        while( i<j ){
            int k = abs(s[i++] - s[j--]);
            if(k==1 || k>2){
                res="NO";
                break;
            }        
        }
        cout<<res<<endl;
    }
    return 0;
}