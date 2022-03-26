#include <bits/stdc++.h>
using namespace std;
//reverse a string
string reverseString(string s){
    string str;
    for(int i = s.size()-1; i>=0; i--){
        str.push_back(s[i]);
        cout<<s[i]<<endl;
        }
        return str;
}

int main(){
string s ;
cin>>s;
cout<<reverseString(s);

return 0;
}