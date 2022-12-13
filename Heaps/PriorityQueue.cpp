#include <bits/stdc++.h>
using namespace std;

int main(){
    //maxheap
    priority_queue<int,vector<int>> pq;
    pq.push(2); //to pushinto the array
    pq.push(3);

    pq.push(5);
    cout<<pq.top();
    cout<<endl;
    // min heap
    priority_queue<int,vector<int>,greater<int> > am;
    am.push(4);
    am.push(4);
    am.push(8);
    cout<<am.top();




return 0;
}
