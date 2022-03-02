#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    int m =s.size();
    int n =t.size();
    for(int i=0;i<m-n;i++){
        int j;
        for (int j = 0; i < m; i++)
        if(s[i+j]==t[j])
        break;
        if(j==m){
            cout<<"pattern found at"<<i<<endl;
        }
        
    }

return 0;
}
