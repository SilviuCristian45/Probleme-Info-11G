/* Backtracking si stiva
   Metoda backtracking poate fi ajutata de catre o stiva. Ce este o stiva?

   O stiva este un vector in care nu putem accesa decat ultimul element inserat in stiva.
   Un exemplu de manipulare a unei stive se poate gasi in functia exemplu_stiva().
*/

#include <iostream>

using namespace std; // in general mai bine se pune std::... la fiecare, dar si asa merge.

const int infinit = 1000000; // const int este o variabila constanta imposibil de modificat in program.

int stiva[infinit], varf = 0; // declararea stivei si varful acesteia.

void exemplu_stiva()
{
	varf = 1;
	stiva[varf] = 3;
	while (varf > 0) // cat timp are stiva ceva in ea...
	{
		varf++;
		stiva[varf] = 2; // adaugam un element in stiva.
		varf--; //asa se elimina elementul.
	}
}

/*
  Se poate rezolva problema permutarilor cu backtracking.
  Aici se afla algoritmul de backtracking recursiv pentru aceasta problema.
*/

int v[infinit], n; // v este permutari de n, iar n este dat.
bool conditie[infinit]; // bool este o variabila care salveaza doua valori: true sau false.

void afisare()
{
	for (int i = 1; i <= n; i++)
	{
		cout << v[i] << ' ';
	}
	cout << '\n'; // endl consuma timp, '\n' inseamna enter.
}

void backtracking(int pozitie)
{
	if (pozitie == n + 1) // n fiind ultima cifra din permutare
	{
		afisare();
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (conditie[i] == false) // daca numarul inca nu a fost pus
		{
			conditie[i] = true; // am folosit acel numar in permutare
			v[pozitie] = i; // il bagam in secventa pe care o verificam la permutare
			backtracking(pozitie + 1); // apelam functia pentru urmatoarea pozitie
			conditie[i] = false; // il eliberam pentru folosiri ulterioare.
		}
	}
}

int main()
{
	cin >> n;
	backtracking(1);
    return 0;
}

