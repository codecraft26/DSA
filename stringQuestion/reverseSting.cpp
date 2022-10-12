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



string reverseStringStack(string s ){

    stack<string> st;
    string temp="";
    for(int i =0;i<s.size();i++){
        if(s[i]==' '){
            st.push(temp);
            temp='';


        }
        else
    {
      temp=temp+s[i];
    }
            while(!st.empty()){

                
                temp=st.pop;

            }

    }
}

int main(){
string s ;
cin>>s;
cout<<reverseString(s);

return 0;
}