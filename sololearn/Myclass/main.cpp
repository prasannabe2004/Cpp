/*
 * class.cpp
 *
 *  Created on: Mar 21, 2015
 *      Author: PMohanasundaram
 */

#include <iostream>
using namespace std;

class myClass {
private:
	int var;
public:
	// Constructor
	myClass()
	{
		var = 0;
	}
	//Get Method
	int getNumber()
	{
		return var;
	}
	//Set Method
	void setNumber(int arg)
	{
		var = arg;
	}
};


int main()
{
	myClass obj;
	cout << obj.getNumber() << endl;
	obj.setNumber(12);
	cout << obj.getNumber() << endl;
	return 0;
}

