// 
#include <stdio.h>

const int NMAX = 100000;

int summiereEchteTeiler(int n){
    int summe = 0;
    for( int i=1; i<n; i++) {
        if (n % i == 0) {
            summe += i;
        }
    } 
    return summe;
}

int main() {
    //
    int SummeEchteTeiler = 0;
    
    printf("Befreundete Zahlen\n");
    printf("%d\n", summiereEchteTeiler(284));
    printf("%d\n", summiereEchteTeiler(220));\n

    for( int i = 1; i < NMAX; i++) {
        SummeEchteTeiler = summiereEchteTeiler(i);
        if(( i == summiereEchteTeiler(SummeEchteTeiler)) && (i != SummeEchteTeiler)) {
            printf( "%d, %d\n", i, SummeEchteTeiler);
        }
    }
    printf("Done.\n");
    return 0;
}
