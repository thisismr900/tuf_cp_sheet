//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;

    long long n=s.size();

    long long trainMissed = n/2;
  
    if(n%2==0)//even
    {
        cout<<trainMissed;
        return 0;
    }

    for(long long i=1; i<s.size(); i++){
        if(s[i]=='1'){
            trainMissed++;
            break;
        }
    }
    cout<<trainMissed<<endl;
    return 0;
}
