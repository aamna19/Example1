/*
 * Example1.cpp
 *
 *  Created on: Oct 23, 2015
 *      Author: a233ahme
 */

#include <iostream>
using namespace std;

int main() {
int patient[20];
int *ptr=patient;
int i;

for ( i=0;i<5;++i)
{
	cout <<"Enter Patient: ";
	cin >> ptr[i];


}
for (i=0;i<5;++i)
{
	++*ptr;
}

//I made changes//

return 0;
}



