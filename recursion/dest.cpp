#include <bits/stdc++.h>
using namespace std;
 void dest(int s,int d){
    if(s==d){
    cout<<"raeched";
   return;
   
    }
    cout<<"source"<<s<<"dest"<<d<<endl;

    s++;
    return dest(s,d);
 }
int main(){
    int s=1,d=10;
   dest(s,d);

return 0;
}