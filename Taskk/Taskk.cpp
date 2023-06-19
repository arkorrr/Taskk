#include <iostream>
using namespace std;

const char symbolOfBoard = '*';
const int Board_Size = 8;
char symbol[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H' };
char boardOf[Board_Size][Board_Size];

void board()			//Task2
{
	for (int i = 0; i < Board_Size; i++)
	{
		for (int j = 0; j < Board_Size; j++)
		{
			boardOf[i][j] = symbolOfBoard;
		}
	}
	cout << " ";
	for (int i = 0; i < Board_Size; i++)
	{
		cout << " " << symbol[i] << " ";
	}

	cout << endl;
	for (int i = 0; i < Board_Size; i++)
	{
		cout << i + 1;
		for (int j = 0; j < Board_Size; j++)
		{
			cout << " " << boardOf[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
    //Task1
	int n;	
	cout << "Enter a number: ";
	cin >> n;
	int sum = 0;
	int count = 0;
	int zero = 0;
	while (n) {
		if (n % 10 != 0) {
			sum += (n % 10);
			count++;
		}
		else if(n % 10 == 0)
		{
			zero++;
		}
		n /= 10;
	}
	cout << "Sum of numbers in your number: " << sum << endl;
	cout << "How many numbers in your number: " << count << endl;
	cout << "Average of your number: " << sum / count << endl;
	cout << "The number of zeros in a number " << zero << endl;

	//Task2
	board();


	//Task3
	int customer, sum = 0, count;
	const int cola = 30;
	const int cake = 100;
	string food, drinkables;
	cout << "Enter how many customers will be ordering: ";
	cin >> customer;
	for (int i = 0; i < customer; i++)
	{
		cout << "Answer on all answers in lower case letters.Your answer for example 'yes/no' " << endl;
		cout << "Price of cake = 100griven. " << endl;
		cout << "Enter yes if you will eat cake: " << endl;
		cin >> food;
		cout << "Price of cola = 30griven. " << endl;
		cout << "Enter yes if you will drink cola: ";
		cin >> drinkables;
		if (food == "yes")
		{
			sum += cake;
		}
		if (drinkables == "yes")
		{
			sum += cola;
		}
	}
	cout << "Sum of your order = " << sum << "griven" << endl;

	//Task4
	char boardOfSeaFight[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
	const int sizeOfBoard = 10;
	for (int i = 0; i < sizeOfBoard; i++)
	{
		for (int j = 0; j < sizeOfBoard; j++)
		{
			cout << boardOfSeaFight[i] << j << " ";
		}
		cout << endl;
	}
}
