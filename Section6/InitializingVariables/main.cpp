#include <iostream>

using namespace std;

// This program will calculate the area of a room in m2

int main( ){
    
    cout << "Enter the width of the room ";
    int roomWidth {0};
    cin >> roomWidth;
    
    cout << "Enter the length of the room ";
    int roomLength {0};
    cin >> roomLength;
    
    cout << "The area of the room is " << roomLength*roomWidth << " meters sq.";
    
    return 0;
}