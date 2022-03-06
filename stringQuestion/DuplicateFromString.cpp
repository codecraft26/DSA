#include <bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
map<char,int> mp;
map<char,int>::iterator itr;
for(long i=0;i<s.length();i++){
    mp[s[i]]++;
}
for(itr=mp.begin();itr!=mp.end();itr++){
    if(itr->first==2){
        cout<<itr->second;
    }
}

return 0;
}