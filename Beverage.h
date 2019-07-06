#pragma once
/*
 * beverage.h
 *
 *  Created on: Nov 6, 2018
 *      Author: matthewchilders
 */


#include <iostream>
#include <string>
using namespace std;

class Beverage {
private:
	string name;
	string description;
	int servings;
	int calories;
	double price;

public:
	Beverage(string name, string description, int servings, int calories, double price) {
		this->name = name;
		this->description = description;
		this->servings = servings;
		this->calories = calories;
		this->price = price;
	}
	~Beverage() {
		cout << "Destroying beverage." << endl;
	}

	string getName() {
		return name;
	}
	string getDes() {
		return description;
	}
	int getServings() {
		return servings;
	}
	int getCal() {
		return calories;
	}
	double getPrice() {
		return price;
	}
};

class Coffee : public Beverage {
private:
	bool hot;
	bool caffeinated;
	bool cream;
	bool sweetener;
	string roast;
	int coffeeStr;

public:
	Coffee(string name, string description, int servings, int calories, double price, bool hot, bool caffeinated, bool cream, bool sweetener, string roast, int coffeeStr) // @suppress("Class members should be properly initialized")
		: Beverage(name, description, servings, calories, price)
	{
		this->hot = hot;
		this->caffeinated = caffeinated;
		this->cream = cream;
		this->sweetener = sweetener;
		this->roast = roast;
		this->coffeeStr = coffeeStr;
	}
	~Coffee() {
		cout << "Chugging remaining coffee." << endl;
	}

	bool getHot() {
		return hot;
	}
	bool getCaf() {
		return caffeinated;
	}
	bool getCream() {
		return cream;
	}
	bool getSweet() {
		return sweetener;
	}
	string getRoast() {
		return roast;
	}
	int getStr() {
		return coffeeStr;
	}
	void getDrink() {
			cout << "Name: " << getName() << "\n Description: " << getDes() << "\n Servings: " << getServings() << "\n Calories: " << getCal() << "\n Price: " << getPrice() << "\n Hot Beverage: " << getHot() << "\n Caffeinated: " << getCaf() << "\n Cream: " << getCream() << "\n Sweetener: " << getSweet() << "\n Roast: " << getRoast() << "\n Coffee Strength: " << getStr() << endl;

	}

};

class Tea : public Beverage {
private:
	string teaType;
	bool hot;
	bool cream;
	bool sweetener;
	bool lemon;


public:
	Tea(string name, string description, int servings, int calories, double price, bool hot, bool cream, bool lemon, bool sweetener, string teaType) // @suppress("Class members should be properly initialized")
		: Beverage(name, description, servings, calories, price)
	{
		this->hot = hot;
		this->cream = cream;
		this->sweetener = sweetener;
		this->teaType = teaType;
		this->lemon = lemon;
	}
	~Tea() {
		cout << "Emptying tea into harbor." << endl;
	}
	bool getHot() {
		return hot;
	}
	bool getLemon() {
		return lemon;
	}
	bool getCream() {
		return cream;
	}
	bool getSweet() {
		return sweetener;
	}
	string getTeaType() {
		return teaType;
	}
};

class Soda : public Beverage {
private:
	string brand;
	string flavorType;
	bool diet;

public:
	Soda(string name, string description, int servings, int calories, double price, bool diet, string brand, string flavorType) // @suppress("Class members should be properly initialized")
		: Beverage(name, description, servings, calories, price)
	{
		this->diet = diet;
		this->brand = brand;
		this->flavorType = flavorType;
	}
	~Soda() {
		cout << "Soda machine broke." << endl;
	}
	string getBrand() {
		return brand;
	}
	string getFT() {
		return flavorType;
	}
	bool getDiet() {
		return diet;
	}

};

class EnergyDrink : public Beverage {
private:
	string brand;
	string stimulant;
	bool sweetener;

public:
	EnergyDrink(string name, string description, int servings, int calories, double price, string brand, string stimulant, bool sweetener) // @suppress("Class members should be properly initialized")
		: Beverage(name, description, servings, calories, price)
	{
		this->brand = brand;
		this->stimulant = stimulant;
		this->sweetener = sweetener;
	}
	~EnergyDrink() {
		cout << "Energy Drink Machine Broke." << endl;
	}
	string getBrand() {
		return brand;
	}
	string getStimulant() {
		return stimulant;
	}
	bool getSweetener() {
		return sweetener;
	}
};
