

// First element to occur k times
// we use map it is aeasy question
// basic level of map 


#include<bits/stdc++.h>
using namespace std;

int OccurMoreThanK(vector <int> &a,int k){
    map<int,int> mp;
    for (int  i = 0; i < a.size(); i++)
    {

        mp[a[i]]++;
        if(mp[a[i]]==k){
            return a[i];
        }
    }
    return -1;
    
    


}

int main(){
    vector<int> vec={3,4,4,4,56,2};
    int k=2;
    cout<<OccurMoreThanK(vec,k);




return 0;
}