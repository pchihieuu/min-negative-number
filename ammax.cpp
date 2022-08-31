#include<stdio.h>
using namespace std;

void NhapMang(float a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf_s("%d", &n);
		if (n <= 0)
		{
			printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
		}
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap a[%d]: ", i);
		scanf_s("%f", &a[i]);
	}
}

int vitriam(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			return i;
		}
	}
	return 0;
}

float amlonnhat(float  a[], int n, int vitriamdau)
{
	float AmMax = a[vitriamdau];

	for (int i = vitriamdau; i < n; i++)
	{
		if (a[i] < 0 && a[i] > AmMax)
		{
			AmMax = a[i];
		}
	}
	return AmMax;
}

int  main()
{
	int n;
	float a[10];

	NhapMang(a, n);
	int vitriamdau = vitriam(a, n);
	if (vitriamdau == 0)
	{
		printf("\nMang khong co so am!\n");
	}
	else
	{
		float AmMax = amlonnhat(a, n, vitriamdau);
		printf("\nSo am lon nhat la: %.2f\n", AmMax);
	}
}