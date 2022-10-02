#include <bits/stdc++.h>
using namespace std;

class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int val){
        size=size+1;
        int index=size;//index to assign to size .
        arr[index]=val;
        while(index>1){
            int parent =index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;

            }
            else{
                return ;
            }
        }
    }

    void Print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }

    void deletion(int val){
        
    }
};

int main(){
    Heap h;
    h.insert(45);
    h.insert(97);
    h.insert(4);
    h.insert(33);
    h.Print();


return 0;
}