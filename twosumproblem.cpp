#include<bits/stdc++.h>

using namespace std;
vector<int> twoSum(vector<int>& nums, int target)
{
   map<int,int> m;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            m[nums[i]]=i;
        }
        return v;
}

int main()
{
        int n;
        cin>>n;
        int target;
        cin>>target;
        vector <int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        twoSum(v,target);
    
    
    return 0;
}