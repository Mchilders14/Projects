//nerf.h
//Matthew Childers
//Date Last updated: 08/26/2018
//Purpose: Create an object and display it.


#include <iostream>
#include <string>

//#define DEBUG
using namespace std;

class nerfGun {

public:
	string model;
	int range;
	int capacity;
	int numOfDarts;
	static int numGuns;

//------------------------------------------------------------------------------------CONSTRUCTOR/DESTRUCTOR

	nerfGun() {
#ifdef DEBUG
		cout << "Gun Created" << endl;
#endif // DEBUG
		model = "";
		range = 0;
		capacity = 0;
		numOfDarts = 0;
		numGuns++;
	}
	nerfGun(string nerfModel, int nerfRange, int nerfCapacity, int quantity) { // @suppress("Class members should be properly initialized")
#ifdef DEBUG
		cout << "Gun Created" << endl;
#endif // DEBUG

		model = nerfModel;
		range = nerfRange;
		capacity = nerfCapacity;
		numOfDarts = quantity;
		numGuns++;
	}
	~nerfGun() {
		cout << "Please remove any remaining darts before the gun is destroyed." << endl;
		cout << endl;
		cout << "Destroying nerf gun: " << model << ". Please say a prayer for this poor nerf gun." << endl;
		cout << endl;
		numGuns--;
		cout << "There are/is " << nerfGun::numGuns << " gun(s) left!" << endl;
		cout << endl;
	}

//------------------------------------------------------------------------------------END CONSTRUCTOR/DESTRUCTOR

//------------------------------------------------------------------------------------FIRE/RELOAD

	void fire() {
#ifdef DEBUG
		cout << "Fire is working" << endl;
#endif // DEBUG

		for (int x = numOfDarts; x > 0; x--) {
			cout << "Press RETURN to fire the nerf gun. Ammo remaining is: " << numOfDarts << " darts." << endl;
			system("Pause");
			cout << "PEW" << endl;
			numOfDarts--;
		}
	}
	void reload(int darts) {
#ifdef DEBUG
		cout << "Reload is working." << endl;
#endif // DEBUG
		while (darts > capacity || darts < 0) {
			try {
				throw invalid_argument(" Invalid Argument: Cannot load less-then 0 or greater-then capacity.");
			}
			catch (invalid_argument e) {
				cout << e.what() << endl;
			}
			cin >> darts;
		}
		numOfDarts += darts;
		
	}
	void operator+=(int darts) {
		reload(darts);
	}
	friend ostream& operator<<(ostream &out, const nerfGun &gun) {
		out << "Your gun's nickname is: " << gun.model << " Range: " << gun.range << " Dart capacity: " << gun.capacity << " Darts remaining: " << gun.numOfDarts << endl;
			return out;
	}
//------------------------------------------------------------------------------------END FIRE/RELOAD

};