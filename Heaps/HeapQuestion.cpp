
//kth smallest element 
#include <bits/stdc++.h>
using namespace std;
int kthsmallest(int arr[],int k){
    int n =4;
    sort(arr,arr+n);
    return arr[k-1];
}



int main(){
    int arr[]={7,10,4,20,15};
    int k =3;
   cout<< kthsmallest(arr,k);
    
    



return 0;
}