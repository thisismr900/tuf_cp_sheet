//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string p,h;
        cin>>p>>h;
        if(size(h)<size(p))
        {
            cout<<"NO"<<endl;
            continue;
        }
        int n=p.size();
        string sortedP=p;
        sort(sortedP.begin(),sortedP.end());

        bool ok=false;
        int i=0;
        for(int i=0; i<=h.size()-n; i++){
            string r=h.substr(i,n);
            sort(r.begin(),r.end());
            if(r==sortedP){
                ok=true;
                break;
            }
        }

        if(ok)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;

    }
    return 0;
}