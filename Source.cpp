#include "Header.h"
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void xuatSoChan(int a[], int n) {
	for(int i=0;i<n;i++) {
		if(a[i] %2==0){
			cout<<a[i];
		}
	}
}