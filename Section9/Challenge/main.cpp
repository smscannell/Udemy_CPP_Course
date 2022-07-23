#include <iostream>
#include <vector>

using namespace std;

int main( ){
    vector<int> list {1, 2, 3, 4, 5};
    char in {};
    
    while (!(in == 'Q' || in =='q')){
        cout << "Waiting for valid user input... ";
        cin >> in;
        
        if (in == 'P' || in == 'p'){
        cout << "[ ";
        for (auto i:list){
            cout << i << " ";
        }
        cout << "]" << endl;
        } else if (in == 'A' || in == 'a'){
            // A
            int input {};
            cout << "Input an integer to add to the list: ";
            cin >> input;
            list.push_back(input);
            cout << input << " added" << endl;
        } else if (in == 'M' || in == 'm'){
            int sum {}; 
            double mean {};
            
            if (list.size() == 0){
                cout << "List is empty";
            } else {
                for (auto i:list){
                sum += i;
            }
            cout << "The average of the list contents is: " << (mean = sum / list.size())<< endl;
            }
        } else if (in == 'L' || in == 'l'){
            int max = list.at(1);
            for (auto i:list){
                if (i > max){
                    max = i;
                }
            }
            cout << "The max value in the list is: " << max << endl;
        } else if (in == 'S' || in == 's'){
            int min = list.at(1);
            for (auto i:list){
                if (i < min){
                    min = i;
                }
            }
            cout << "The min value in the list is: " << min << endl;
        }
    }
    cout << "Quitting...";
    return 0;
}