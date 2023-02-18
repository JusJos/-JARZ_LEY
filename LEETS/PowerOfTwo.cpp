// Time Complexity -> O(log(n))
bool isPowerofTwo(long long n){
        
        long long k=n;
        long long d=2;
        if(n==0){
            return false;
       }
        if(n==1){
            return true;
        }
        while(d<k){
            if(k%d!=0){
                return false;
            }else{
                d=d*2;
            }
        }
        if(d==k){
            return true;}
        else{
            return false;
        }
        
 
    }

// Time Complexity -> O(1)

bool isPowerofTwo(long long n){
 return (n != 0) && ((n & (n - 1)) == 0);   
}
