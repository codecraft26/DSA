#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
         int result = nums[0];
         
        for(int i=1;i<nums.size();i++){
            result^=nums[i];
            cout<<result<<"   ";
        }
        return result;
    }
int main(){
    vector<int> nums={5,5,6,7};
   cout<< singleNumber(nums);

return 0;
}