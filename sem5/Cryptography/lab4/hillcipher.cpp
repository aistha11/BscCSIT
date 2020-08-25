#include<iostream>
#include<math.h>

using namespace std;

float encrypt[2][1], decrypt[2][1], a[2][2], b[2][2], mes[2][1], c[2][2];

void encryption();
void decryption();
void getMessage();
void getKey();
void inverse();

int main() {

    bool exit=0;
    getKey();
    while(exit!=1)
    {
        getMessage();
        encryption();
        decryption();
        cout<<"\n\t\tExit? 0/1 : ";cin>>exit;
    }

}

void encryption() {
	int i, j, k;
	for(i = 0; i < 2; i++)
		for(j = 0; j < 1; j++)
			for(k = 0; k < 2; k++)
				encrypt[i][j] = encrypt[i][j] + a[i][k] * mes[k][j];
	cout<<"\nEncrypted string is: ";
	for(i = 0; i < 2; i++)
		cout<<(char)(fmod(encrypt[i][0], 26) + 97);
}

void decryption() {
	int i, j, k;
	inverse();
	for(i = 0; i < 2; i++)
		for(j = 0; j < 1; j++)
			for(k = 0; k < 2; k++)
				decrypt[i][j] = decrypt[i][j] + b[i][k] * encrypt[k][j];
	cout<<"\nDecrypted string is: ";
	for(i = 0; i < 2; i++)
		cout<<(char)(fmod(decrypt[i][0], 26) + 97);
	cout<<"\n";
}

void getMessage() {
	int i, j;
	char msg[2];
	cout<<"\nEnter a 2 letter string: ";
	cin>>msg;
	for(i = 0; i < 2; i++)
		mes[i][0] = msg[i] - 97;
}

void inverse() {
	int i, j, k;
	float p, q;
	for(i = 0; i < 2; i++)
		for(j = 0; j < 2; j++) {
			if(i == j)
				b[i][j]=1;
			else
				b[i][j]=0;
		}
	for(k = 0; k < 2; k++) {
		for(i = 0; i < 2; i++) {
			p = c[i][k];
			q = c[k][k];
			for(j = 0; j < 2; j++) {
				if(i != k) {
					c[i][j] = c[i][j]*q - p*c[k][j];
					b[i][j] = b[i][j]*q - p*b[k][j];
				}
			}
		}
	}
	for(i = 0; i < 2; i++)
		for(j = 0; j < 2; j++)
			b[i][j] = b[i][j] / c[i][i];
	cout<<"\n\nInverse Matrix is:\n";
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++)
			cout<<b[i][j]<<" ";
		cout<<"\n";
	}
}

void getKey()
{
    cout<<"Enter 2x2 matrix for key (It should be inversible):\n";

	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++) {
			cin>>a[i][j];
			c[i][j] = a[i][j];
		}
}
