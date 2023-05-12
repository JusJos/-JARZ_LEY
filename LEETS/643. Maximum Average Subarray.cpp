class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double avg=sum/k;

        int i=1;
        int j=k;

        while(j<nums.size()){
            sum-=nums[i-1];
            sum+=nums[j];

            avg=max(avg,sum/k);
            i++;
            j++;
        }

        
    return avg;}
};
