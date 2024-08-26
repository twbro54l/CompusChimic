#include <iostream>

using namespace std;

int main()
{
	unsigned int nC, nO, nH;

	cout << "Introduceti nC atomi carbon, nO atomi oxigen si nH atomi de hidrogen" << '\n';
	cin >> nC >> nO >> nH;
	cout << "Masa moleculara a compusului este " << 12 * nC + 16 * nO + nH << '\n';

	return 0;
}