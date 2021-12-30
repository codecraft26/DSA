#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> marksmap;
    marksmap["aman"]=98;
    marksmap["nisha"]=5;
    marksmap["rkeha"]=6;
    marksmap.insert({
        {
        "nitesh",20
        },
        {
            "pari",100
        }
    });
    map<string,int> ::iterator itr;
    for(itr=marksmap.begin();itr!=marksmap.end();itr++){
        cout<<(*itr).first<<(*itr).second<<" "<<endl;

    }
    cout<<"the size is"<<marksmap.size()<<endl<<marksmap.empty();


    return 0;
}