#include <iostream>
using namespace std;

class MargDisUtilLabour {
	float a = 50.0f; // scale disutility
	float disUtility(float quantityLabour) {
		return ((-1.0f * a) / (quantityLabour - 16.0f)) - ((-1.0f * a) / 16.0f);
	}
};

class MargUtil {
	float a = 1.0f; // scale utility
	float b = 0.5f; // rate drop off
	float utility(float quantityGood) {
		return a * pow(2.0f, -1.0f * b * quantityGood);
	}
};

class ProdFunc {
	float a = 1.0f; // scale production
	float supply(float quantityLabour) {
		return a * sqrt(quantityLabour);
	}
};

class Agent {
	int numAgents = -1;
	int numGoods = -1;
	
	float wage_rate = 0.0f;
	MargDisUtilLabour* margDisUtilLabour = nullptr;
	MargUtil* margUtilities = nullptr;
	ProdFunc* prodFunctions = nullptr;
	
	float* prices = nullptr;
	float* consumption = nullptr;
	float* supply = nullptr;
	float* labourAllocation = nullptr;
	float* marketRevenue = nullptr;
	
	float** budgetAllocation;
	float** agentSpending;

	Agent(int numAgents, int numGoods) {
		this->numAgents = numAgents;
		this->numGoods = numGoods;

		margDisUtilLabour = new MargDisUtilLabour;
		margUtilities = new MargUtil[numAgents];
		prodFunctions = new ProdFunc[numAgents];
		
		prices = new float[numGoods];
		consumption = new float[numGoods];
		supply = new float[numGoods];
		labourAllocation = new float[numGoods];
		marketRevenue = new float[numGoods];
		
		budgetAllocation = new float* [numAgents];
		for (int i = 0; i < numAgents; i++) {
			budgetAllocation[i] = new float[numGoods];
		}
		agentSpending = new float* [numAgents];
		for (int i = 0; i < numAgents; i++) {
			agentSpending[i] = new float[numGoods];
		}
	}

	~Agent() {
		delete margDisUtilLabour;
		delete[] margUtilities;
		delete[] prodFunctions;
		
		delete[] prices;
		delete[] consumption;
		delete[] supply;
		delete[] labourAllocation;
		delete[] marketRevenue;
		
		for (int i = 0; i < numAgents; i++) {
			delete[] budgetAllocation[i];
		}
		delete[] budgetAllocation;
		for (int i = 0; i < numAgents; i++) {
			delete[] agentSpending[i];
		}
		delete[] agentSpending;
	}
};

class EconomicSimulation {



	void simulationStep() {
		// INCOME AND WAGES
		
			// for each agent:
				// for each agent that spends in our market (including ourself):
					// add that spending to our income
				
				// determine our wage rate from our income and labour committment

		// SUPPLY AND DEMAND DETERMINE PRICE

			// for each agent:
				// for each good:
					// determine the labour allocated to the good
					// determine the supply of the good from the labour allocated

				// for each agent that spends in our market (including ourself):
					// add their spending to our market's revenue

				// for each good:
					// determine price of the good from market revenue and supply
		

		// INDUSTRY IS REORGANIZED

			
		

		// THE AGENT INTROSPECTS ON HER CONSUMPTION
		

		// THE AGENT INTROSPECTS ON HER WORK


	}
};

int main() {
	cout << "Hello Girls!";
	return 0;
}