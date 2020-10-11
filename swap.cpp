#include"swap.h"
#include<iostream>

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << a <<b << endl;
}