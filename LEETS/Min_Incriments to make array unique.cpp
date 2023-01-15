long long int minIncrements(vector<int> arr, int N) {
        int ans=0,temp=0;
        
        sort(arr.begin(),arr.end());
        for(int i=1;i<N;i++){
            if(arr[i]<=arr[i-1]){
                temp=arr[i-1]+1-arr[i];
                ans=ans+temp;
                arr[i]=arr[i-1] +1;
            }
            
        }
        
        
    return ans;}
