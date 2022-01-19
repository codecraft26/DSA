#include <bits/stdc++.h>
using namespace std;
int  twosum(vector<int> &a,int key,int n ){
 
    int i=0;
    int j=n-1;
    while(i<j){
        if(a[i]+a[j]==key){
            return 1;

        }
       else if(a[i]+a[j]<key)
            i++;
        else j--;
    }
    return 0;
}
int main(){
    vector <int> arr;
    int key;
    cin>>key;
    int n =arr.size();
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    twosum(arr,key,n);


return 0;
}