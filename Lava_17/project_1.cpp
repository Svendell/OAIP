#include <iostream>
void main() {
	using namespace std;
	int k ,p;
	cin >> k;
	cin >> p;

	int*** M;
	M = new int** [p];
	for (int l = 0; l < p; l++) {
		M[l] = new int* [k];
		cout << "\nМатрица" << l << ":\n";
		for (int i = 0; i < k; i++) {
			M[l][i] = new int[k];
			for (int j = 0; j < k; j++) {
				M[l][i][j] = rand() % 1000 - 200;
				cout << M[l][i][j] << " ";
				if (j == k - 1)
					cout << "\n";
			}
		}
	}
};
