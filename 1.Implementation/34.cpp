//Bismillahir Rahmanir Raheem
#include<iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;

    //upper half
    for(int i=0;i<=n;i++)
    {
    //initial spaces
        for(int j=n-1;j>=i;j--)
        cout<<"  ";
    
    //row - increase
        for(int j=0;j<=i;j++)
        {
            cout<<j;
            if(i!=j)
            cout<<" ";
        }
                
    //row- decrease
        for(int j=i-1;j>=0;j--)
        {
            if(j!=i)
            cout<<" ";
            cout<<j;
        }
        cout<<endl;

    }

    //lower half
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i;j<=n-1;j++)
        cout<<"  ";
    //row - increase

        for(int j=0;j<=i;j++)
        {
            cout<<j;
            if(j!=i)
            cout<<" ";
        }
    
    //row- decrease
        for(int j=i-1;j>=0;j--)
        {
            cout<<" ";
            cout<<j;
        }

        cout<<endl;
    }
    return 0;
}
