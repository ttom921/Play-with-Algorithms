#include <iostream>
#include "../inc/Student.h"
#include "../lib/SelectionSort.h"

int main()
{
	// ���ռҪO��ơA�ǤH��ƼƲ�
	int a[10] = { 10,9,8,7,6,5,4,3,2,1 };
	selectionSort(a, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	// ��ĳ�ҪO��ơA�ǤJ�B�I�Ʋ�
	float b[4] = { 4.4,3.3,2.2,1.1 };
	selectionSort(b, 4);
	for (int i = 0; i < 4; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;

	// ���ռҪO��ơA�ǤJ�r�Ŧ�Ʋ�
	string c[4] = {"D","C","B","A"};
	selectionSort(c, 4);
	for (int i = 0; i < 4; i++)
	{
		cout << c[i] << " ";
	}
	cout << endl;

	// ���ռҪO��ơA�ǤJ�۩w�q���c��Student�Ʋ�
	Student d[4] = { {"D",90},{"C",100},{"B",95},{"A",95} };
	selectionSort(d, 4);
	for (int i = 0; i < 4; i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;
	return 0;
}