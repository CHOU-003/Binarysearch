// Nguồn Freetuts.net

#include <stdio.h>
 
int TimKiemNP(int a[], int n, int x)
{
  int i;
  for (i = 0; i < n; i++)
    if (a[i] == x)
      return i;
  return -1;
}
 
int main() {
  int a[] = {2, 3, 4, 10, 40};
  int n = sizeof(a) / sizeof(a[0]);
  int x = 10;
  int Ketqua = TimKiemNP(a, n, x);
  if (Ketqua != -1) {
    printf("%d xuat hien tai chi so %d", x, Ketqua);
  } else {
    printf("%d khong co trong mang", x);
  }
  return 0;
}