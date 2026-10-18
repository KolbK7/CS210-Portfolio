#ifndef CORNERGROCER_GROCERYTRACKER_H_
#define CORNERGROCER_GROCERYTRACKER_H_

#include <map>
#include <string>

class GroceryTracker {
public:
    GroceryTracker(const std::string& t_inputFileName);

    void loadItems();
    int getItemFrequency(const std::string& t_itemName) const;
    void printAllFrequencies() const;
    void printHistogram() const;
    void createBackupFile(const std::string& t_outputFileName) const;

private:
    std::string m_inputFileName;
    std::map<std::string, int> m_itemFrequencies;
};

#endif // CORNERGROCER_GROCERYTRACKER_H_