/*
 * cpp2011.cpp
 *
 *  Created on: Mar 17, 2015
 *      Author: PMohanasundaram
 */

#include <iostream>

#include <vector>

using namespace std;
int main()
{

	vector <string> x = {"Hello", "Universe"};

	for(string y:x)
	{
		cout << y << endl;
	}

	return 0;
}


