string gcdOfStrings(string str1, string str2) {
        string a=str1+str2;
        string b=str2+str1;
        string ans="";
        if(a!=b){
            return ans;
        }
        return str1.substr(0,gcd(str1.size(),str2.size()));
    }
