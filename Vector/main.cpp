#include <vector>
#include <iostream>

int main(int iNumberOfArgs) {

	//Create a vector
	std::vector<int> myVector;
	//Add an element to the back
	myVector.push_back(2);
	myVector.push_back(5);	
	//Get the size of the vector
	myVector.size();
	//Get the capacity of the vector
	myVector.capacity();
	//resize to 4 and fill empty values by 99
	myVector.resize(4, 99);
	//Safely get the first element
	myVector.at(0);
	//Return and remove last element.
	myVector.pop_back();
	//Remove all data from the vector
	myVector.clear();
	//myVector.erase();
	//myVector.insert();
	

	for (int i = 0; i < myVector.size(); ++i)
	{
		std::cout << myVector.at(i) << std::endl;
	}	
	return 0;
}