#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin>> n;
     vector<int> a(n);
     for (int i = 0; i < n; i++)

     {

         cin>>a[i];


     }
     map<int,int> cnt;
     int pref=0;
        for (int i = 0; i < n; i++)
        {
            pref+=a[i];
            cnt[pref]++;
        }
    int ans=0;
    map<int ,int> ::iterator it;
    for(it=cnt.begin();it!=cnt.end();it++){
        int c=it->second;
        ans+=(c*(c-1))/2;
        if(it->first==0){
            ans+=it->second;

        }

    }
    cout<<ans;
        
     
    return 0;
}