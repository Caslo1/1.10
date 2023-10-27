#include <iostream>
#include <string>

using namespace std;

int main()
{
	const unsigned SizeMassive{ 20 };
	unsigned Massive [SizeMassive];
	const unsigned MissLine{ 5 };

	for (size_t i{}; i < SizeMassive; i++)
	{
		Massive[i] = i * 2 + 1;
	}

	unsigned* Number{ Massive };

	for (int i{}; i < SizeMassive; i++)
	{

			cout << *Number++ << "\t";

			if ((i + 1) % MissLine == 0)
			{
				cout << endl;
			}

	}

	cout << endl;
	for (int i{}; i < SizeMassive; i++)
	{

		cout << *--Number << "\t";

		if ((i + 1) % MissLine == 0)
		{
			cout << endl;
		}

	}
}