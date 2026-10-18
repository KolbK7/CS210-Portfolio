#include "GroceryTracker.h"

#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main() {
    GroceryTracker tracker("CS210_Project_Three_Input_File.txt");

    tracker.loadItems();
    tracker.createBackupFile("frequency.dat");

    int menuChoice = 0;

    while (menuChoice != 4) {
        cout << endl;
        cout << "************************************" << endl;
        cout << "******** Corner Grocer Menu ********" << endl;
        cout << "************************************" << endl;
        cout << "1. Search for an item" << endl;
        cout << "2. Display all item frequencies" << endl;
        cout << "3. Display item histogram" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your selection: ";

        if (!(cin >> menuChoice)) {
            cout << "Invalid input. Please enter a number from 1 to 4." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (menuChoice) {
        case 1: {
            string itemName;

            cout << "Enter the item you wish to search for: ";
            cin >> itemName;

            cout << itemName << " "
                << tracker.getItemFrequency(itemName)
                << endl;

            break;
        }

        case 2:
            cout << endl;
            cout << "ITEM FREQUENCIES" << endl;
            tracker.printAllFrequencies();
            break;

        case 3:
            cout << endl;
            cout << "ITEM HISTOGRAM" << endl;
            tracker.printHistogram();
            break;

        case 4:
            cout << "Thank you for using the Corner Grocer item tracker." << endl;
            break;

        default:
            cout << "Invalid selection. Please choose an option from 1 to 4." << endl;
            break;
        }
    }

    return 0;
}