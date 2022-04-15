#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 200 // 3  10 50  100  200  400 800
int main()
{
    int M1[N][N]={{1,2,3},{4,5,6},{7,8,9}};
    int M2[N][N]={{1,2,1},{0,0,0},{2,0,1}};
    int M3[N][N];

    clock_t start, end;
    double cpu_time_used;

    start = clock();
    MultiplyTwoMatrices(M1,M2,N,M3);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf ("Gecen sure=%.9f saniyedir.", cpu_time_used);

    return 0;
}

void MultiplyTwoMatrices(int m1[][N], int m2[][N], int n, int m3[][N])
{
    int i,j,k,toplam;
    for (i=0;i<n;i++)
        for(j=0;j<n;j++){
            toplam=0;
            for(k=0;k<n;k++){
                toplam+=m1[i][k]*m2[k][j];  //Birinci matrisin satirlari ile ikinci matrisin sütunlari carpilir
            }
            m3[i][j]=toplam;
        }
}
