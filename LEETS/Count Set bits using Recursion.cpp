int Set_Bits(int x){

if(x==0){
    return 0;
}

if(x&1)
    return 1+Set_Bits(x>>1);
else
    return Set_Bits(x>>1);

}

