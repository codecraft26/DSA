#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &nums,int low,int high,int key){

while (low<=high)

    {

        int mid=(low+high)/2;
        if(nums[mid]==key){
            return mid; 
            // returning the mid element
        }
        else if(nums[mid]>low){
            return binarySearch(nums,mid+1,high,key);
        }
        else return binarySearch(nums,low,mid+1,key);

    }
    return -1;


}
int main(){
vector<int> arr={2,5,6,5};
int n =arr.size();
int start=0;
int end=n-1;
int key =6;
cout<<binarySearch(arr,start,end,key);
return 0;
}
