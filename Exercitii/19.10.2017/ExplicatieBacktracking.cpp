/*
	In aceasta sursa vei gasi o explicatie generica a backtracking-ului.
	Fie urmatoarele variabile:
		k = nivelul curent;
		n = nr de elemente ale multimii asociate fiecarui nivel {1, 2, 3, 4, 5, 6, ... , n}
		h = inaltimea maxima a stivei (nr de elemente dintr-o solutie)

*/

#include <iostream>

using namespace std;

const int infinit = 1e6; // 1e6 = 10 la puterea a 6-a

int n, stiva[infinit];

void backtracking()
{
	int k, h, as, valid;
	k = 1;
	stiva[k] = 0;
	while (k > 0)
	{
		//se cauta valoarea valida pentru nivelul curent k.
		//1. Verificam daca sunt valori
		do
		{
			if (stiva[k] < n)
			{
				stiva[k]++;
				as = 1;
			}
			else
				as = 0;
			if (as == 1)
			{
				//se valideaza valoarea aleasa pentru stiva[k]
				valid = 1;
				for (int i = 0; i < k; i++)
				{
					if (stiva[i] == stiva[k])
					{
						valid = 0;
					}
				}
			}
		} while (as == 1 && valid == 0);
	}
}
int main()
{
	cin >> n;
	backtracking();
    return 0;
}

