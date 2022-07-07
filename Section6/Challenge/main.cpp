#include <iostream>

using namespace std;

int main( ){

    const double priceSmallRooms {25.0};
    const double priceLargeRooms {35.0};
    const double salesTax {0.06};
    const int quoteDuration {30};
    
    cout << "Hello, welcome to Sam's Carpet Cleaning Service" << endl;
    cout << "\nHow many small rooms would you like cleaned? " << endl;
    int numSmallRooms {0};
    cin >> numSmallRooms;
    cout << "\nHow many large rooms would you like cleaned? " << endl;
    int numLargeRooms {0};
    cin >>numLargeRooms;
    
    double netCost = (numSmallRooms*priceSmallRooms) + (numLargeRooms*priceLargeRooms);
    double tax = netCost*salesTax;
    double totalCost = netCost+tax;
    
    cout << "Estimate for carpet cleaning service" <<endl;
    cout << "Number of small rooms: " << numSmallRooms <<endl;
    cout << "Number of large rooms: " << numLargeRooms <<endl;
    cout << "Price per small room: £" << priceSmallRooms <<endl;
    cout << "Price per large room: £" << priceLargeRooms <<endl;
    cout << "Cost: £" << netCost <<endl;
    cout << "Tax: £" << tax <<endl;
    cout << "==============================" << endl;
    cout << "Total estimate: £" << totalCost << endl;
    cout << "This estimate is valid for " << quoteDuration << " days" <<endl;
    return 0;
}