#include <iostream>

using namespace std;

int main( ){
    cout << "Enter an amount in cents: " << endl;
    int cents {0};
    cin >> cents;
    
    int dollars {0};
    dollars = cents/100;
    cents %= 100;
    
    int quarters {0};
    quarters = cents/25;
    cents %= 25;
    
    int dimes {0};
    dimes = cents/10;
    cents %= 10;
    
    int nickels {0};
    nickels = cents/5;
    cents%= 5;
    
    cout << "You can provide this change as follows:" << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << cents << endl;
        
    
    return 0;
}