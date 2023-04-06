#include <stdio.h>

void Sapxepcay(int a[], int n) 
{ 

    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(a, n, i); 
  
    for (int i=n-1; i>0; i--) 
    { 

        swap(a[0], a[i]); 
  
        heapify(a, i, 0); 
    } 
} 