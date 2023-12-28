//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        int n;//length of cipher text
        cin>>n;

        string cipher;
        cin>>cipher;

        int ptr=0;
        for(int i=1; ptr<cipher.size(); i++){
            cout<<cipher[ptr];
            ptr += i;
        }

    }
    return 0;
}