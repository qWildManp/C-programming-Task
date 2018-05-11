int Power2(int n){  //function to compute answer
    int result;
    result=1;
    if(n==0){
        return result;
    }
    else{
        return result=2*Power2(n-1);  //recursion
    }
}
