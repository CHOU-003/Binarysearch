// freetuts.com
//luyencode.Com
#include <stdio.h>

void daTuyen(int i, int n, int *X)
{
    int val;    
    for (val = 0; val < 2; val++)
    {
        X[i] = val;
        if (i == (n-1))      
        {
            int j;
            for(j = 0; j < n; j ++)     
            {
                cout<< X[j];
            }
            cout<<"\n";
        }
        else          
        {
            daTuyen(i+1, n, X); 
        }
    }
}

int main(){
    int n ,X;

    printf("nhap n va X: ");
    scanf("%d%d",&X,&n);
    printf("Ket qua la:%d", daTuyen(n, X));

    return 0;
}