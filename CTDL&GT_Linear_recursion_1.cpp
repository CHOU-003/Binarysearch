int Tong(int n){
    if(n==0)
        return 0;
    return Tong(n - 1) + n;
}