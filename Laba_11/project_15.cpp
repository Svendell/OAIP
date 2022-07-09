#include <iostream>
#include <math.h>
void main()
{
	using namespace std;
	const int n = 10;
	int A[n], k, i, nmax = 99, nmin = -99, imax = 0, i1;
	for (i = 0; i < n; i++)
	{
		*(A + i) = (int)(((double)rand() /
			(double)RAND_MAX) * (nmax - nmin) + nmin);
		cout << " " << A[i];
	}
	cout << endl;
	for (i = 0; i < n - 1; i++)
	{
		imax = i;
		for (i1 = i + 1; i1 < n; i1++)
		{
			if (*(A + i1) > *(A + imax))
				imax = i1;
		}
		swap(A[i], A[imax]);
	}
	for (i = 0; i < n; i++) {

		cout << " " << A[i];
	}
	cout << endl;
}
