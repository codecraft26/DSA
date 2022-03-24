
//find the number of 1's without using if switch  and ternary operator 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,0,0,0,0,1,0,1,1,1};
    int sum=0;
    for (int i = 0; i<10; i++)
    {
            sum+=a[i]; //adding the number and show them
    }
    cout<<"number of 1s is "<<sum<<endl;       
    

return 0;
}