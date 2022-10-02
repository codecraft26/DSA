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
    // always delete from root node 
    void deletion(){
        // delete and swap 
        if(size==0){
            cout<<"Nothing to delete";
            return;
            }
            //step 1 put last element into first element 
            arr[1]=arr[size];
            size--;
            //take root node to its correct postion
             int i=1;
            while(i<size){
               
                int leftindex=2*i;
                int rightIndex=2*i+1;
                if(leftindex<size && arr[i]<arr[leftindex]){
                    swap(arr[i],arr[leftindex]);
                    i=leftindex;
                }
                else if(rightIndex<size && arr[i]<arr[rightIndex]){
                    swap(arr[i],arr[rightIndex]);
                    i=rightIndex;
                }
                else{
                    return;
                }
            }





    }
};

int main(){
    Heap h;
    h.insert(45);
    h.insert(97);
    h.insert(4);
    h.insert(33);
    h.Print();
    cout<<endl;
    h.deletion();
    h.Print();

return 0;
}