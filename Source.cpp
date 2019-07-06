/* Matthew Childers
 * source.cpp
 *
 *Beverage classes with inheritance.
 */

#include <iostream>
#include <cmath>
#include <string>
#include "beverage.h"

#define Unix
 //#define Microsoft

using namespace std;

int main() {

	Coffee myCoffee("Matt's Coffee", "Simply the best!", 2, 150, 2.99,  true, false, false, false, "dark", 8);
	myCoffee.getDrink();


#ifdef Unix
	cin.ignore();
	cout << "Press return to continue...";
	cin.get();
#endif
#ifdef Microsoft
	system("Pause");
#endif
	return 0;
}
