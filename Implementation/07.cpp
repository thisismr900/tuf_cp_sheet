//Approach 1:

//bismillah
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
    
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
    
                if(i&1 == 1)//i:odd
                    cout<<"#";
                else{
                    if((i/2)&1 == 1){
                        if(j==m)cout<<"#";
                        else cout<<".";
                    }
                    else{
                        if(j==1)cout<<"#";
                        else cout<<".";
                    }
                }
            }
            cout<<endl;
        }
    }
    return 0;
}




****************************************************
//Approach2:
//bismillah
#include<bits/stdc++.h>
using namespace std;
void l1(int m){
    for(int i=1;i<=m;i++)
        cout<<"#";
}
void l2(int m){
    for(int i=1;i<=m-1;i++)
        cout<<".";
    cout<<"#";
}
void l3(int m){
    cout<<"#";
    for(int i=2;i<=m;i++)
        cout<<".";
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){

        if(i%4 == 1 || i%4 ==3)
            l1(m);
        else if(i%4 == 2)
            l2(m);
        else 
            l3(m);
        
        cout<<endl;
    }
    return 0;
}