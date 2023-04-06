// freetuts.com
//luyencode.Com

#include <stdio.h>

int UCLN(int m, int n){
  int r;
  if(m<n) return UCLN(n,m);
  r = m % n;
  if(r == 0) return n;
  else return UCLN(n,r);
}
int main()
{
    int n,m;
    do
    {
        printf("Nhap m: ");
        scanf("%d", &m);
        printf("nhap n: ");
        scanf("%d", &n);
        if(n < 0){
            printf("Nhap sai nhap lai n.(n >= 0)\n");
        }
    } while (n < 0);
    printf("Ket qua la: %d", UCLN(n, m));

    return 0;
}