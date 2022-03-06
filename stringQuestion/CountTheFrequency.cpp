
//count the frequency in character
#include <bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>>s;
char a;
cin>>a;
map<char , int >m; // defining a map for string
map<char , int >::iterator itr; // defining the iterator for map
 for(long i=0;i<s.length();i++)
        cout<<m[s[i]]++<<endl;
        
for(itr=m.begin();itr!=m.end();itr++)
          
            if(itr->first=='a'){
                cout<<"this is freqquency"<<a<<endl;
                cout<<itr->second; // this is for find the frequency of string
            }


return 0;
}