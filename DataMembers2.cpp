/*
 *
 *
 *
 *
 */



#include <iostream>
#include "Cat.h"
using namespace std;

int main(){

	Cat elsa;

	elsa.happy = true;

	elsa.setAge(4);

	cout << "elsa is " << elsa.getAge() << endl;

	elsa.speak();

	Cat jim;

	jim.happy = false;
	jim.speak();

	return 0;
}

