bool subArrayExists(int arr[], int n)
    {   
        unordered_set<int>ans;
        int preSum=0;
        
        for(int i=0;i<n;i++){
            preSum+=arr[i];    
        
            if(preSum==0){
                return true;
            }
            
            if(ans.find(preSum)!=ans.end()){
                return true;
            }
            
            ans.insert(preSum);
            
        }
    return false;}
