// TITV
// tucocach.COM
// freetuts.com

#include <stdio.h>

void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void SapXep(int a[], int n){   
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if(a[i] > a[j])
                Swap(a[i], a[j]);
}


int main()
{
    int a[] = {21, 3, 45, 10, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int ketqua = SapXep(a, n);
    printf("Mang sap xep la: %d\n", ketqua);
    return 0;
}