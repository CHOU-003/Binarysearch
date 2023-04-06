// TITV
// tucocach.COM

#include <stdio.h>

int NhapMang(int a[])
{
    int n=0;
    while (1)
    {
        printf("Nhap phan tu thư %d(Nhap -1 de ket thuc): ", n+1);
        scanf("%d", &a[n]);
        if(a[n] == -1){
            break;
        }
        n++;
    }
    return n;
    
}

void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void SapXep(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
			if (a[min]>a[j])
				min = j;
			Swap(a[i], a[min]);
	}
}

void XuatMang(int a[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int main()
{
    int a[50], n;
    n = NhapMang(a);
    SapXep(a, n);
    printf("Mang sap xep la: \n");
    XuatMang(a, n);
    return 0;
}