
#include<iostream>

using namespace std;
 
int getinput(int number)
{
	int input = 0;
	cout << "Geben Sie die " << number << ". Zahl ein:";
	cin >> input;
	cout << "\n\n";
	return input;
}

void menu();


void printResult(int result)
{
	cout << "Das Ergebnis ist: " << result << "\n\n";
	menu();
}
void addition()
{
	int number1 = getinput(1);
	int number2 = getinput(2);
	int result = number1 + number2;
	printResult(result);
	
}
void subtration()
{
	int number1 = getinput(1);
	int number2 = getinput(2);
	int result = number1 - number2;
	printResult(result);
}
void multiplikation()
{
	int number1 = getinput(1);
	int number2 = getinput(2);
	int result = number1 * number2;
	printResult(result);

}

void division()
{
	int number1 = getinput(1);
	int number2 = getinput(2);
	int result = number1 / number2;
	printResult(result);
}

void menu()
{
	char input = ' ';
	cout << "Waehlen Sie eine Zahl zwischen 1 und 5 ein:\n ";
	cout << "(1)Addition\n" << " (2)Subtration\n" << " (3)Multiplikation\n" << " (4)Division\n" << " (5)Beenden\n";
	cin >> input;

	switch (input)
	{
	case ('1'):
		addition();
		break;

	case ('2'):
		subtration();
		break;

	case ('3'):
		multiplikation();
		break;

	case ('4'):
		division();
		break;

	case ('5'):
		exit(0);
		break;
	default:
		cout << "Zahl nicht gefunden.Bitte versuchen Sie erneut.\n\n\n";
		menu();
		break;
	}
}

int main()
{
	menu();
	system("PAUSE");
	return 0;
}