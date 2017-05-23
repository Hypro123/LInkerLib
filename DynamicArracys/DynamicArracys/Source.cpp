#include "DynamicArray.h"
#include <iostream>

using namespace std;

void main()
{
	//---------------------------------------------------------
	//Initialises the dynamic array
	//capacity = 3 which is the index
	//size is also 3 due to the index being the same
	//---------------------------------------------------------
	DynamicArray<int> myArray(3);

	//---------------------------------------------------------
	//Checks the Capacity and size functions
	//
	//---------------------------------------------------------

	cout << "Initial Sizes" << endl;
	cout << endl;
	cout << "Size: " << myArray.Size() << endl;
	cout << "Capacity: " << myArray.Capacity() << endl;

	//---------------------------------------------------------
	//Adds more values to the dynamic array
	//Adding more values to the already existant dynamic array
	//
	//---------------------------------------------------------
	cout << endl;
	cout << "Adding additional values" << endl;
	cout << endl;
	myArray.PushBack(9);
	myArray.PushBack(8);
	myArray.PushBack(7);

	//---------------------------------------------------------
	//Prints out changed size and capacty
	//
	//---------------------------------------------------------
	cout << endl;
	cout << "new Sizes" << endl;
	cout << endl;
	cout << myArray.Size() << endl;
	cout << myArray.Capacity() << endl;
	
	//---------------------------------------------------------
	//Prints out all values
	//
	//---------------------------------------------------------
	
	cout << endl;
	cout << "values are " << endl;
	cout << endl;
	for (int i = 0; i < myArray.Size(); i++)
	{
		cout << myArray[i] << endl;
	}
	
	//---------------------------------------------------------
	//Insert Testing
	//
	//---------------------------------------------------------
	
	myArray.Insert(1, 4);
	cout << endl;
	cout << "Values are " << endl;
	cout << endl;
	for (int i = 0; i < myArray.Size(); i++)
	{
		cout << myArray[i] << endl;
	}

	//---------------------------------------------------------
	//Popback Testing
	//
	//---------------------------------------------------------
	
	int value = myArray.PopBack();
	cout << endl;
	cout << "Amount of Values Popped " << value << endl;
	cout << endl;
	cout << "Values popped are " << endl;
	cout << endl;
	for(int i = 0; i < myArray.Size(); i++)
	{
		cout << myArray[i] << endl;
	}

	//---------------------------------------------------------
	//Remove Testing
	//
	//---------------------------------------------------------
	value = myArray.Remove(3);
	cout << endl;
	cout << "Removed value is " << value << endl;
	cout << "Values are " << endl;
	for (int i = 0; i < myArray.Size(); i++)
	{
		cout << myArray[i] << endl;
	}
	cout << endl;
	system("Pause");
}