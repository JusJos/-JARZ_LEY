      int triangleNumber(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        int l,m;

        for(int i=nums.size()-1;i>=2;i--){
           l=0; m=i-1;

                while(l<m){
                    if(nums[l]+nums[m]>nums[i]){
                        count+=m-l;
                        m--;
                    }else{
                        l++;
                    }
                }
            }
        
        return count;
    }
