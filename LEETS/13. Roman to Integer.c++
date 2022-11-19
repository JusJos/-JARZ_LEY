class Solution {
    
public:
    int function(char s){
        int gg;
    if(s=='I')
        gg=1;
    if(s=='V')
        gg=5;
    if(s=='X')
        gg=10;
    if(s=='C')
        gg=100;
    if(s=='L')
        gg=50;
    if(s=='D')
        gg=500;
    if(s=='M')
        gg=1000;
return gg;
}
    
    
    int romanToInt(string s) {
        int n=s.length();
        int temp=function(s[n-1]);
        int ans=function(s[n-1]),fun;
      
    for(int i=n-2;i>=0;i--){
        fun=function(s[i]);
        if(fun<temp)
            ans-=fun;
        else
            ans+=fun;
        temp=function(s[i]);

    }
    return ans;

}};
