
#include "stdafx.h"
#include <iostream>
#include "stdio.h"
#include "conio.h"
#include <windows.h>

using namespace std;
int main()
{
	FILE *f;
	char a[256], b[256];
	int count = 0;
	cin.getline(a, 256);
	OemToChar(a, b);
	f = fopen(b, "r");
	while (!feof(f))
	{
		if (fgetc(f) == '\n')
		{
			count++;
		}
	}
	fclose(f);
	cout << count;
	getch();
	return 0;
}


