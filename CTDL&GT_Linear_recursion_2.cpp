#include <stdio.h>

int Tong(int n){
    if(n==0)
        return 0;
    return Tong(n - 1) + n;
}
int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    printf("Ket qua la: %d", Tong(n));
}