#include<bits/stdc++.h>
using namespace std;
int Happy(int n){
    
    int res=0,ans=0,final=0;
    res=n/10;
    ans=n%10;
    n=res*res+ans*ans;
    if(n==1){
        return 1;
    }
    return Happy(n);
   
}
int main()
{
    int n ;
    cin>>n;
     Happy(n);
    return 0;
}