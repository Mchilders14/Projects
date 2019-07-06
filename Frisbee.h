// Program name: Frisbee.h
// Author: Matthew Childers
// Date last updated: 09/03/2018
// Purpose: Frisbee Golf

#include <iostream>
#include <string>
#include <time.h> 
using namespace std;

class Frisbee {
private:
	int totalScore;
	int numGames;
	double avg = 0;
	string first;
	string last;
	int id;
	static int playerCount;
	static double percentFactor;
public:
	
	Frisbee(string first, string last, int numGames, int totalScore, int id) {
		this->first = first;
		this->last = last;
		this->numGames = numGames;
		this->totalScore = totalScore;
		this->id = id;
		playerCount++;
	}

//GETTERS-------------------------------------------------------------------------------

	static int getPlayers() {
		return playerCount;
	}
	int getScore() {
		return totalScore;
	}
	string getFirst() {
		return first;
	}
	double getAvg() {
		return avg;
	}
	string getLast() {
		return last;
	}
	int getID() {
		return id;
	}
	static double getPercentFactor() {
		return percentFactor;
	}

	void setID(int changeID) {
		id = changeID;
	}

//FUNCTIONS------------------------------------------------------------------------------
	
	void calcAvg() {
		avg = totalScore / numGames;
	}
	void addGame(int game) {
		numGames += game;
	}
	void addScore(int score) {
		totalScore += score;
	}
	void subScore(int score) {
		totalScore -= score;
	}

//SETTERS---------------------------------------------------------------------------------

	static void setPercent(double percent) {
		percentFactor = percent;
	}
	void setGame(int newGame) {
		numGames = newGame;
	}
	void setScore(int setPoints) {
		totalScore = setPoints;
	}
	void setFirst(string changeFirst) {
		first = changeFirst;
	}
	void setLast(string changeLast) {
		last = changeLast;
	}
};

