// find maximum from an array using iterator methd 


#include<bits/stdc++.h>
using namespace std;
int largest(vector<int>vec){
    int nums=vec.size();
    int largest=0;
    for(int i=1;i<nums;i++)
        if(vec[i]>vec[largest])
        largest=i;
    return vec[largest];

}

int main(){
    vector<int> aman={5,4,3,2,2,46,5,5,455};
    cout<<largest(aman);


return 0;
}