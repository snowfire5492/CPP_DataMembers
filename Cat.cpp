/*
 * Cat.cpp
 *
 *  Created on: Apr 18, 2019
 *      Author: snowf
 */

#include <iostream>
#include "Cat.h"

using namespace std;



void Cat::speak(){					// Methods (not 
functions) since this is inside a class

	if(happy)
		cout << "squeek" << endl;
	else if(!happy)
		cout << "growl" << endl;
	else
		cout << "wtf" << endl;

}


