//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c){
    if(c=='A'|| c=='O'||c=='Y' ||c=='E' ||c=='U' ||c=='I')
        return true;
    else if(c=='a'|| c=='o'||c=='y' ||c=='e' ||c=='u' ||c=='i')
        return true;
    return false;
}

bool isUpper(char c){
    if(c>='A' && c<='Z')
        return true;
    return false;
}

int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans="";

        for(auto c:s){
            if(isVowel(c))
                continue;
            if(isUpper(c))
                c = c + (97-65);
            ans +='.';
            ans += c; 
        }

        cout<<ans;
    }
    return 0;
}