int sort(int arr[],int x){

    if(x==0){
        return arr[0];
    }
    int temp=0;
    for (int i = 0; i<x; i++)
    {      
        if(arr[i]<arr[temp]){
            temp=i;}
    }
    swap(arr[0],arr[temp]);

    return sort(arr+1,x-1);
    


    

}
