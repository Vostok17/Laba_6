#include <iostream>
using namespace std;

// input
double input();

// max number
double max(double x, double y);

int main()
{
	double a, b, c, T;

	cout << "Enter a: ";	a = input();
	cout << "Enter b: ";	b = input();
	cout << "Enter c: ";	c = input();

	T = (max(a, a + b) + max(a, b + c)) / (1 + max(a + b * c, 1.15));
	
	printf("\nT = %.8f\n", T);
	
	system("Pause");
}

double max(double x, double y)
{
	return x >= y ? x : y;
}

double input()
{
	bool input;
	double x;
	do
	{
		cin >> x;
		input = true;
		if (!cin)
		{
			input = false;
			cout << "Error: unaccaptable value." << endl << "Enter correct value: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	} while (!input);
	return x;
}