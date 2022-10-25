#include <bits/stdc++.h>
using namespace std;
// sliding window

int main(){
    int n ,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
int s=0,ans=INT16_MAX;
for(int i=0;i<k;i++){
    s+=a[i];
}
ans=min(s,ans);
for(int i=1;i<n-1;i++){
    s-=a[i-1];
    s+=a[i+k-1];
    ans=min(ans,s);
}
cout<<ans<<" ";
return 0;
}
