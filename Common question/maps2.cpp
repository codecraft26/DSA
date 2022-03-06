#include<bits/stdc++.h>
using namespace std;
// find the frequency of and element
int main(){
    int n =4;
    vector<int> a{10,20,30,40,50};
    
    
    map<int ,int> freq;
    for(int i=0;i<n;i++){
       cout<< freq[a[i]]++<<endl;
        

    }
        cout<<"end of freq[a[i]++]"<<endl;
    map<int,int> ::iterator it;
    for(it=freq.begin();it!=freq.end();it++){
        cout<<it->first<<" "<< it->second<<endl; 
    }


    return 0;
}