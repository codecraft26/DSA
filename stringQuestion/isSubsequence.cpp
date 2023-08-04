#include <bits/stdc++.h>
using namespace std;


 bool isSubsequence(string s ,string t){
    int m=s.length();
    int n =t.length();
    int j=0;
    for(int i =0;i<n;i++){
        if(s[j]==t[i]){
            j++;
        }
     //if j is ==m return subsequence
       return (j == m);  
}

int main(){

string s ;
string t ;
cin>>s>>t;
cout<<isSubsequence(s,t);



return 0;
}
