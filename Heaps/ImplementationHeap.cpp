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

    //heapify algorthm 

    
};
void heapify(int arr[],int n ,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left <n && arr[largest]<arr[left]){
        largest=left;

    }
    if(right<n && arr[largest]<arr[right]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
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
    cout<<endl;
    int arr[6]={-1,54,53,55,52,50};
    int n =5;
    for(int i =n/2;i>0;i--){
            heapify(arr,n,i);
    }
   cout<<"printing the array now";
   for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
   }
return 0;
}