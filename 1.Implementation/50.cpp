//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        vector<vector<int>>b(m,vector<int>(n));
        vector<vector<int>>a(m,vector<int>(n,1)); //have all cell value as 1

        for(int i=0; i<m;i++){
            for(int j=0; j<n; j++){
                cin>>b[i][j];
                if(b[i][j]==0){
                    for(int c=0; c<n; c++) //make all row value 0
                        a[i][c]=0;
                    for(int r=0; r<m; r++) //make all col value 0
                        a[r][j]=0;
                }           
            }
        }
        //check whether mat (b) is a possible transformation of mat (a) or not
        bool ok=true;
        for(int i=0; i<m; i++){
            for(int j=0;j<n; j++){
                if(b[i][j]==1){
                    int sum=0;
                    for(int c=0; c<n; c++)
                        sum+=a[i][c];
                    for(int r=0; r<m; r++)
                        sum+=a[r][j];
                    if(sum==0){
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
            }
        }

        cout<<"YES"<<endl;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }

    }
    return 0;
}