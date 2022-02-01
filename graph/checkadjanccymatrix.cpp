#include "bits/stdc++.h"
using namespace std;
#define  vi vector<int> 
#define vvi vector<vi>
#define pii pair<int ,int>
// #define vvi vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second;
#define setBits(x) builtin_popcount(x)
const int N=1e5+2,MOD=1e9+7;

vi adj[N];

int main() 
{
  int n,m;
  cin>>n>>m;
  vvi adm(n+1,vi(n+1,0));

  rep(i,0,m){
    int x,y;
    cin>>x>>y;
    adm[x][y]=1;
    adm[y][x]=1;
    
  }
  cout<<"adjcent marix"<<endl;
  // rep(i,0,n+1)
  for(int i=0;i<n+1;i++ ){
    // rep(j,1,n+1)
    for(int j=1;j<n+1;j++){
    cout<<adm[i][j]<<" ";
    }
    cout<<endl;
  }
    if(adm[1][2]==1){
      cout<<"yes"<<endl;
    }
    
    /// adjancy std::list<> ;
    rep(i,0,m){
      
      int x ,y;
      cin>>x>>y;
      adj[x].push_back(y);
      adj[y].push_back(x);
      cout<< "list of is given by";
      rep(i,1,n+1){
        cout<<i<<" "<<" -->";
        vector <int> :: iterator it;
        
        for(it==adj[i].begin();it!=adj[i].end();it++){
          cout<<*it<<" ";
          
        }
      }}

    return 0;
}