 int removeDuplicates(vector<int>& nums) {
        int j=1,temp;
        temp=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=temp){
                temp=nums[i];
                nums[j]=temp;
                j++;
            }
        }
        
    return j;}
