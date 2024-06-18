/*
This code gets some name from user and writes the names with reverse order.
Purpose of the code is show how to use dynamic memory management for array.
And shows some extra things for learning C++.

Developer = Barış Someroğlu
Date = 18.06.2024 - 09:40 pm
*/

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
	int Size, Loading = 0;

	// Change console background and text colour 
	system("color E9");

	cout << "How Many Name Do You Want to Write = ";
	cin >> Size;

	cout << "\n";

	// Dynamic memory management for array
	string* Name = new string[Size];

	for (int i = 0; i < Size; i++)
	{
		cout << "Please Enter " << i + 1 << ". Name = ";
		cin >> Name[i];

		cout << endl;
	}

	// Clean console screen
	system("cls");

	// Make loading screen
	while (Loading != 100)
	{
		Loading++;

		cout << "Loading %" << Loading;

		system("cls");
	}

	for (int i = Size - 1; i >= 0; i--)
	{
		cout << Name[i];

		cout << endl << endl;
	}

	// Delete dynamic memory after use
	delete[] Name;

	return 0;
}