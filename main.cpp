#include <iostream>
//#include <cmath>
using namespace std;

class MargDisUtilLabour {
	float a = 50.0f;
	float disUtility(float quantityLabour) {
		return ((-1.0f * a) / (quantityLabour - 16.0f)) - ((-1.0f * a) / 16.0f);
	}
};

class ProdFunc {
	float a = 1.0f;
	float supply(float quantityLabour) {
		return sqrt(quantityLabour);
	}
};

class BudgetAlloc {

};

class Agent {
	// MDUL
	MargDisUtilLabour* margDisUtilLabour;
	// Array of Prices
	// Array of Marginal Utilities
	// Array of Produciton Functions
	// 2D Array of Budget Allocations
};


int main() {
	cout << "Hello Girls!";
	return 0;
}