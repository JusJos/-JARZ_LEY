class Solution {
public:
    bool isPalindrome(int x) {
       if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        
    int n=x,i=0;
        while(i<n){
            int s=n%10;
                n=n/10;
                i=i*10+s;
        }
        
    if(i==n||n==i/10)
        return true;
    else 
        return false;
    
        
        
    }
};
