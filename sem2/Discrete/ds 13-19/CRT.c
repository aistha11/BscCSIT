#include <stdio.h>

// returns x where (a * x) % b == 1
int mul_inv(int a, int b)
{
	int b0 = b, t, q;
	int x0 = 0, x1 = 1;
	if (b == 1) return 1;
	while (a > 1) {
		q = a / b;
		t = b, b = a % b, a = t;
		t = x0, x0 = x1 - q * x0, x1 = t;
	}
	if (x1 < 0) x1 += b0;
	return x1;
}

int chinese_remainder(int *a, int *n, int len)
{
	int p, i, prod = 1, sum = 0;

	for (i = 0; i < len; i++) prod *= n[i];

	for (i = 0; i < len; i++) {
		p = prod / n[i];
		sum += a[i] * mul_inv(p, n[i]) * p;
	}

	return sum % prod;
}

int addition(int *a, int *b, int *n)
{
    int c[3];
    int C;
    c[0]=(a[0]+b[0])%n[0];
    c[1]=(a[1]+b[1])%n[1];
    c[2]=(a[2]+b[2])%n[2];
    C=chinese_remainder(c, n, 3); //3=sizeofarray
    return C;
}

int main(void)
{
	int a[] = { 2, 2, 10 };
	int b[] = { 3, 4, 6 };
	int n[] = { 5, 7, 11 };

	int A=chinese_remainder(a, n, 3);//3=sizeofarray
	int B=chinese_remainder(b, n, 3);//3=sizeofarray

	int C= addition(a,b,n);

	printf("\n\n%d + %d=%d\n", A, B, C);
	return 0;
}
