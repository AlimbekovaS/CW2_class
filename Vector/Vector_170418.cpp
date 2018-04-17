#include<iostream>
#include "Vector.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");

	vector v1(10);
	vector v2(v1);
	/*v2.print();
	cout << endl;
	v1.push_back(20);
	cout << endl;*/
	//v1.insert(50, 4);
	//v1.at(3)=6 ;
	//v1.print();
	v2.at(11) = 5;
	v2.print();
	system("pause");
	return 0;
}