#include <bits/stdc++.h>
using namespace std;
// print the number through recusrion
void printnumber(int n ){
    if(n==0){
       return ;

    }

     printnumber(n-1);
     cout<<n<<endl;
}
int main(){

    int n ;
    cin>>n;
    printnumber(n);


return 0;
}