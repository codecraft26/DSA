// hashing count frequnecy in a given aaray

#include <bits/stdc++.h>
using namespace std;
int main(){
int n ;
cin>>n;
vector<int> a(n);
for(auto &i :a)
            cin>>a[i];

            unordered_map<int,int> freq;
            for(int i=0;i<n;i++){
                freq[a[i]]++;

            }
            unordered_map<int ,int> :: iterator it;
            for (it=freq.begin();it!=freq.end();it++){
                cout<<it->first<<" "<<it->second<<endl;
            }
            {
                /* code */
            }
            
    return 0;
}