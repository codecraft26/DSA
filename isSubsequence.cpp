#include <bits/stdc++.h>
using namespace std;
bool isSquence(string s,string t ){
     int n = s.length(),m=t.length();
        int j = 0; 


    for (int i = 0; i < m and j < n; i++)
        if (s[j] == t[i])
            j++;
 
    return (j == n);
    

}
int main(){
    string s,t;
    cin>>s>>t;
    
    isSquence(s,t);
return 0;
}