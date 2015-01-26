/*
 * Cat.h
 *
 *  Created on: Apr 18, 2019
 *      Author: snowf
 */

#ifndef CAT_H_
#define CAT_H_

class Cat{

private:
	int age;

protected:
public:
	bool happy;				// Data Member usually 
only under
							// private and 
accessed with methods but this is for example

	void speak();			// Methods (not functions) since 
this is inside a class
	int getAge();
	void setAge(int age);
};

#endif /* CAT_H_ */

