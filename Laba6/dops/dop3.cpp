#include <stdio.h>
#include <iostream>
int main()
{
	setlocale(LC_ALL, "RUS");
	using namespace std;
	float a;
	for (int i = 10; i < 32; i++)
	{
		int b, c, d, e, f, g;
		b = i * i;
		
		c = b % 100; /*21 22 23*/
		d = c % 10; /*1 2 3 4 еденицы*/
		e = ((c - d)/10); /* 20 - 2\  30 - 3\ */
		f = ((b - c) / 100);/*100 - 1 200- 2*/

		if (f<e & e<d)
			cout << " " << b << endl;

	}
}
