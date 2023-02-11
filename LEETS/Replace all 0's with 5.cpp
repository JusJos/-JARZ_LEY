int convertFive(int n)
    {   int k=n;
        int i=0;
        while(k>0){
            if(k%10==0){
            n+=5*pow(10,i);}
            k=k/10;
        i++;}
    return n;
    }
