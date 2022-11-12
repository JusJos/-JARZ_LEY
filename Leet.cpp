#include<iostream>
#include<vector>
using namespace std;

int Target_Search_Matrix(vector<vector <int>> arr,int target){
    int i=0,ans;
    int j=arr.size()-1;
     while(i<arr[0].size()&&j>=0){
        if(target==arr[i][j]){
            ans=arr[i][j];
            break;}
        if(target>arr[i][j]){
            i++;}
        else 
            j--;

     }
    
    return ans;
}
    int main(){
    <vector<vector<int>> A;
    int val;
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            cin>>val;
            A[i].puch_back(val);
        }
    }
    
    
    
    return 0;
}