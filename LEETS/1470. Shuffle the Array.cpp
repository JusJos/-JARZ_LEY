vector<int> shuffle(vector<int>& nums, int n) {
    for (int i = 0; i < n; i++) {
        nums[i] = nums[i] << 10 | nums[n + i];
    }
    int j=2*n-1;
    for (int i = n - 1; i >= 0; i--) {
       nums[j]= nums[i] & 1023;
        nums[j-1]= nums[i] >> 10;
    
        j-=2;
    }
    return nums;}
