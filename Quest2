/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
#define SIZE 6

void quick(int *arr, int left, int right)
{
	int f, t;
	int rtemp, ltemp;
	ltemp = left;
	rtemp = right;
	f = arr[(ltemp + rtemp) / 2];
	while (ltemp<=rtemp)
	{
		while (arr[ltemp]<f)
		{
			++ltemp;
		}
		while (arr[rtemp]>f)
		{
			--rtemp;
		}
		if (ltemp <= rtemp)
		{
			t = arr[ltemp];
			arr[ltemp] = arr[rtemp];
			arr[rtemp] = t;
			++ltemp;
			--rtemp;
		}
	}
	if (ltemp == rtemp)
	{
		++ltemp;
	}
	if (left < rtemp)
	{
		quick(arr, left, ltemp - 1);
	}
	if (ltemp < right)
	{
		quick(arr, rtemp + 1, right);
	}
}

int main()
{
	int i;
	int shuzu[SIZE] = { 7,1,5,4,8,3 };
	cout << "排序前：" << endl;
	for (i = 0; i < SIZE; i++)
	{
		cout << shuzu[i] << '\t';
	}
	quick(shuzu, 0, SIZE - 1);
	cout << endl << "排序后：" << endl;
	for (i = 0; i < SIZE; i++)
	{
		cout << shuzu[i] << '\t';
	}
	cout << endl;
	system("pause");
}
