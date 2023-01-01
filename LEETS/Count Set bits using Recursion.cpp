#include<iostream>
using namespace std;


int bit(int x){

if(x==0){
    return 0;
}

if(x&1)
    return 1+bit(x>>1);
else
    return bit(x>>1);

}



int main()
{ int n =1;
    int ans=bit(n);
    cout<<ans;
    
    return 0;
}
