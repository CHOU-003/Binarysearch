// Nguồn TITV/LÊ NHẬT TÙNG
// Freetuts.net
#include <stdio.h>

int Nhapmang(int a[]){
    int n=0;
    while(1){
        printf("Nhap phan tu thu %d (nhap -1 de ket thuc): ", n+1);
        scanf("%d", &a[n]);
        if(a[n]==-1){
            break;
        }
        n++;
    }
    return n;
}

void Xuatmang(int a[], int n)
{
    printf("Các phan tu trong mang: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}
int TimKiemNP(int a[], int n, int x)
{
  int i;
  for (i = 0; i < n; i++)
    if (a[i] == x)
      return i;
  return -1;
}
int main() {
    int n, x;
    int a[100]; 
    n=Nhapmang(a);
    Xuatmang(a, n); 
    printf("Nhap vao phan tu can tim kiem: ");
    scanf("%d", &x);
    int sophantu = TimKiemNP(a, n, x); 
    if (sophantu == -1) {
        printf("Khong tim thay phan tu %d trong mang\n", x);
    } else {
        printf("Phan tu %d co trong mang, o vi tri a[%d]\n", x, sophantu);
    }
    return 0;
}
