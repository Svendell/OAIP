#include <windows.h>
#include <stdio.h>
#include <iostream>
#include "fun1.h"
#include "fun2.h"

using namespace std;
double s1, s2;
void main(){
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Ќомер метода (1 - трапеций, 2 - парабол)";
	fun1();
	fun2();
	double s3 = s1 - s2;
	cout << "\n равно:" << s3;
}

