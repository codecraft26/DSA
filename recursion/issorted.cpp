#include <bits/stdc++.h>
using namespace std;
bool issorted(int arr[],int n ){
    if(n==0||n==1)
        return true;
    if(arr[0]>arr[1])
        return false;
    else{
        return issorted(arr+1,n-1);
    }
}
int main(){
  int arr[6] = {2,4,9,4,9,9};
    int size = 5;
     bool ans = issorted(arr, size);

    if(ans){
        cout << "Array is sorted " << endl;
    }
    else {
        cout << "Array is not sorted " << endl;
    }

return 0;
}