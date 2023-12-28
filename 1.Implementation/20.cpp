//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

// void swap(int &a, int &b){
//     b = b-a;
//     a = a+b;
//     b = a-b;
// }

int main()
{
    int t;
    cin>>t;
    while(t--){
        
        int a,b,n;
        cin>>a>>b>>n;
        
        if(a>n || b>n)cout<<0;
        
        int operations = 0;
        
        while(a<=n && b<=n){
            if(a<b)
                a += b;
            else
                b += a;
                
            operations++;
        }
        
        cout<<operations<<endl;
        
    }
    return 0;
}