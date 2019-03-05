#include <iostream>
#include "../inc/Student.h"
#include "../lib/SelectionSort.h"

int main()
{
	// 代刚家狾ㄧ计肚俱计计舱
	int a[10] = { 10,9,8,7,6,5,4,3,2,1 };
	selectionSort(a, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	// 代某家狾ㄧ计肚疊翴计舱
	float b[4] = { 4.4,3.3,2.2,1.1 };
	selectionSort(b, 4);
	for (int i = 0; i < 4; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;

	// 代刚家狾ㄧ计肚才﹃计舱
	string c[4] = {"D","C","B","A"};
	selectionSort(c, 4);
	for (int i = 0; i < 4; i++)
	{
		cout << c[i] << " ";
	}
	cout << endl;

	// 代刚家狾ㄧ计肚﹚竡挡篶砰Student计舱
	Student d[4] = { {"D",90},{"C",100},{"B",95},{"A",95} };
	selectionSort(d, 4);
	for (int i = 0; i < 4; i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;
	return 0;
}