#include<stdio.h>

int main()
{
    int n, N = 0;
    printf("No. of class intervals: ");
    scanf("%d", &n);
    float O[n], E[n];
    printf("\nEnter observed frequency for the class interval: \n");
    for(int i = 0; i < n; i++){
        printf("\n%d: ", i + 1);
        scanf("%f", &O[i]);
        N = N + (int)O[i];
    }
    float summation = 0.0;
    printf("\nCI\tO[i]\tE[i]\t (O[i] - E[i])\t(O[i] - E[i])^2\t\t(O[i] - E[i])^2/E[i]\n");
    for(int i = 0; i < n; i++){
        E[i] = (float)N / n;
        float diff = O[i] - E[i];
        float diff_square = diff * diff;
        summation += (diff_square / E[i]);
        printf("%d\t%.2f\t%.2f\t\t%.2f\t\t%.2f\t\t\t%.2f\n", i, O[i], E[i], diff, diff_square, diff_square / E[i] );
    }
    printf("\nN: %d\nChi-Square: %.2f", N, summation);
    return 0;
}

