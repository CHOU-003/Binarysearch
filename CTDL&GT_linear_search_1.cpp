// Nguồn Freetuts.net

#include <stdio.h>
 
int timkiem(int a[],int n,int x){
	int i=0;
	while (i<n && a[i]!=x)
		i++;
	if(i==n)
	return -1; 
	else 
	return i;
}
 
int main() {
  int a[] = {2, 3, 4, 10, 40};
  int n = sizeof(a) / sizeof(a[0]);
  int x = 10;
  int Ketqua = timkiem(a, n, x);
  if (Ketqua != -1) {
    printf("%d xuat hien tai chi so %d", x, Ketqua);
  } else {
    printf("%d khong co trong mang", x);
  }
  return 0;
}