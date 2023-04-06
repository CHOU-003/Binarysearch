// TITV
// tucocach.COM

#include <stdio.h>


void Swap(int *a[50], int x, int y){
       // Hoan vi
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

int partition(int *a[50], int left, int right){
    // gia tri chot bang gia tri phan tu dau tien
    int Chot = a[left];

    int count = 0;

    // dem so luong nam ben trai chot
    for (int i = left+1; i <= right; i++)
    {
        if (a[i]<=Chot)
            count++;
    }
    // lay vi tri chot
    int ChotIndex = left+count;

    //hoan vi
    Swap(a, left, ChotIndex);

    int i=left;
    int j=right;

    while (i<ChotIndex && j>ChotIndex)
    {
        while (a[i] <= Chot)
        {
            i++;
        }
        while (a[j] > Chot)
        {
            j--;
        }
        if (i<ChotIndex && j>ChotIndex)
        {
            Swap(a, i, j);
        }
        
        return ChotIndex;
    }
    

}

void Sapxepnhanh(int a[50], int left, int right){

    if(right <= left){
        return;
    }

    // chia vùng
    int Chot = partition(a, left, right);

    // Sap xep day ben trai
    Sapxepnhanh(a, left, Chot-1);

    // sap xep day phai
    Sapxepnhanh(a, Chot-1, right);

}