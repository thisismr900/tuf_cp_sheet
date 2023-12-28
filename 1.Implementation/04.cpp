//bismillah
#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
   
    
    
    int cokeLast= (k*l) / (n*nl);
    int sliceLast = (c*d)/(n*1);
    int saltLast = (p)/(np*n);
    
    cout<<min(cokeLast,min(sliceLast,saltLast));
    
    // int toastCount=0;
    // while(remCoke>0 && remSalt>0 && remLimeSlices>0){
        
    //     remCoke -= n*(nl);
    //     remLimeSlices -= n;
    //     remSalt -= n*(np);
        
    //     if(remCoke>0 && remSalt>0 && remLimeSlices>0)
    //         toastCount++;
        
    // }
    // cout<<toastCount;
    
    return 0;
}