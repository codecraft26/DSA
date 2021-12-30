#include<bits/stdc++.h>
using namespace std;
void Sub(string str){
    int n = str.size();
    int res = 0; // result
 
    for (int i = 0; i < n; i++) {
         
        vector<bool> visited(256);  
 
        for (int j = i; j < n; j++) {
 
           
            if (visited[str[j]] == true)
                break;
 
            else {
                res = max(res, j - i + 1);
                visited[str[j]] = true;
            }
        }
 
        visited[str[i]] = false;
    }
    cout<<res;
    
}
int main(){
    string s;
    cin>>s;
    Sub(s);
    return 0;
}