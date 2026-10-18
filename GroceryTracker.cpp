#include "GroceryTracker.h"

#include <fstream>
#include <iostream>

using namespace std;

GroceryTracker::GroceryTracker(const string& t_inputFileName) {
    m_inputFileName = t_inputFileName;
}

void GroceryTracker::loadItems() {
    ifstream inputFile(m_inputFileName);
    string itemName;

    if (!inputFile.is_open()) {
        cout << "Error: Unable to open " << m_inputFileName << endl;
        return;
    }

    while (inputFile >> itemName) {
        m_itemFrequencies[itemName]++;
    }

    inputFile.close();
}

int GroceryTracker::getItemFrequency(const string& t_itemName) const {
    auto itemIterator = m_itemFrequencies.find(t_itemName);

    if (itemIterator != m_itemFrequencies.end()) {
        return itemIterator->second;
    }

    return 0;
}

void GroceryTracker::printAllFrequencies() const {
    for (const auto& item : m_itemFrequencies) {
        cout << item.first << " " << item.second << endl;
    }
}

void GroceryTracker::printHistogram() const {
    for (const auto& item : m_itemFrequencies) {
        cout << item.first << " ";

        for (int i = 0; i < item.second; ++i) {
            cout << "*";
        }

        cout << endl;
    }
}

void GroceryTracker::createBackupFile(const string& t_outputFileName) const {
    ofstream outputFile(t_outputFileName);

    if (!outputFile.is_open()) {
        cout << "Error: Unable to create " << t_outputFileName << endl;
        return;
    }

    for (const auto& item : m_itemFrequencies) {
        outputFile << item.first << " " << item.second << endl;
    }

    outputFile.close();
}