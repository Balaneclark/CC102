#include <iostream>

using namespace std;

int main()
{
	double sugarPriceUSD, ricePricePound, sardinesPricePound, coffePriceUSD, milkPriceUSD;
	float sugarQty, riceQty, sardinesQty, coffeQty, milkQty; 
	float totalCostPHP, sugarCostPHP, riceCostPHP, sardinesCostPHP, coffeCostPHP, milkCostPHP;
	double usdToPhp, poundToPhp;
	
	cout << "Enter sugar price USD" << endl;
	cin >> sugarPriceUSD;
	cout << "Enter Sugar Quantity" << endl;
	cin >> sugarQty;
	cout << "Enter rice Price Pound" << endl;
	cin >> ricePricePound;
	cout << "Enter rice Quantity" << endl;
	cin >> riceQty;
	cout << "Enter sardines Price Pound" << endl;
	cin >> sardinesPricePound;
	cout << "Enter sardines Quantity" << endl;
	cin >> sardinesQty;
	cout << "Enter coffe Price USD" << endl;
	cin >> coffePriceUSD;
	cout << "Enter coffe Quantity" << endl;
	cin >> coffeQty;
	cout << "Enter milk Price USD" << endl;
	cin >> milkPriceUSD;
	cout << "Enter milk Quantity" << endl;
	cin >> milkQty;

	totalCostPHP = sugarPriceUSD * coffePriceUSD * milkPriceUSD * ricePricePound * sardinesPricePound;
	totalCostPHP = sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeCostPHP + milkCostPHP;
	totalCostPHP = (usdToPhp * poundToPhp);
	
	return 0;
}
    	
	
