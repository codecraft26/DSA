#include <bits/stdc++.h>
using namespace std;
int  sumof(int arr[],int n ){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int remainingpart=sumof(arr+1,n-1);
    int ans=remainingpart+arr[0];
  return ans ;


}

int main(){
  int arr[5] = {2,4,9,9,9};
    int size = 5;
   cout<< sumof(arr,size);
return 0;
}