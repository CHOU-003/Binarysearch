// TITV
// luyencode.net
// tucocach.COM
// freetuts.com

#include <stdio.h>

void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void Sapxep(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
			if (a[min]>a[j])
				min = j;
			swap(a[i], a[min]);
	}
}

int main()
{
    int a[] = {21, 3, 45, 10, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int ketqua = SapXep(a, n);
    printf("Mang sap xep la: %d\n", ketqua);
    return 0;
}