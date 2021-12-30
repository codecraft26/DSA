#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &vec,int target){
int count =0;
for (int  i = 0; i < vec.size(); i++){
    for (int  j = 0; i < vec[i].size(); j++){
        if(vec[i][j]==target)
            count++;
            

    } 

}
    if(count)
            return true;
        return false;


}
int main()
{
    int target=3;


    vector<vector<int>> vec {
        {1,3 ,5,7},
        {10,11 ,16,20 },
        {23, 30, 34,60}
    };

        searchMatrix(vec ,target);
        
        

   

    
    

    return 0;
}