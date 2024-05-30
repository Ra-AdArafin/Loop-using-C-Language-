 #include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
#include <ctime>

using namespace std;

struct Entry {
    string description;
    double amount;
    time_t date;
};

class FinanceManager {
private:
    vector<Entry> expenses;
    vector<Entry> incomes;
    string username;

    void loadFromFile() {
        ifstream inFile(username + ".dat");
        if (inFile) {
            Entry entry;
            string type;
            while (inFile >> type >> entry.amount >> entry.date) {
                inFile.ignore();
                getline(inFile, entry.description);
                if (type == "expense") {
                    expenses.push_back(entry);
                } else if (type == "income") {
                    incomes.push_back(entry);
                }
            }
            inFile.close();
        }
    }

    void saveToFile() {
        ofstream outFile(username + ".dat");
        for (const auto &entry : expenses) {
            outFile << "expense " << entry.amount << " " << entry.date << " " << entry.description << endl;
        }
        for (const auto &entry : incomes) {
            outFile << "income " << entry.amount << " " << entry.date << " " << entry.description << endl;
        }
        outFile.close();
    }

    void addEntry(vector<Entry> &entries, const string &type) {
        Entry entry;
        cout << "Enter description: ";
        cin.ignore();
        getline(cin, entry.description);
        cout << "Enter amount: ";
        cin >> entry.amount;
        entry.date = time(nullptr);
        entries.push_back(entry);
        saveToFile();
        cout << type << " added successfully!" << endl;
    }

    void displayEntries(const vector<Entry> &entries, const string &type) const {
        cout << "----- " << type << " -----" << endl;
        for (const auto &entry : entries) {
            cout << entry.description << ": $" << fixed << setprecision(2) << entry.amount << " on " << ctime(&entry.date);
        }
    }

public:
    FinanceManager(const string &user) : username(user) {
        loadFromFile();
    }

    void addExpense() {
        addEntry(expenses, "Expense");
    }

    void addIncome() {
        addEntry(incomes, "Income");
    }

    void displayExpenses() const {
        displayEntries(expenses, "Expenses");
    }

    void displayIncomes() const {
        displayEntries(incomes, "Incomes");
    }

    void generateReport() const {
        double totalExpenses = 0, totalIncomes = 0;
        for (const auto &entry : expenses) {
            totalExpenses += entry.amount;
        }
        for (const auto &entry : incomes) {
            totalIncomes += entry.amount;
        }
        cout << "----- Report -----" << endl;
        cout << "Total Expenses: $" << fixed << setprecision(2) << totalExpenses << endl;
        cout << "Total Incomes: $" << fixed << setprecision(2) << totalIncomes << endl;
        cout << "Net Savings: $" << fixed << setprecision(2) << (totalIncomes - totalExpenses) << endl;
    }
};

int main() {
    string username;
    cout << "Enter your username: ";
    cin >> username;
    FinanceManager fm(username);

    int choice;
    do {
        cout << "1. Add Expense" << endl;
        cout << "2. Add Income" << endl;
        cout << "3. Display Expenses" << endl;
        cout << "4. Display Incomes" << endl;
        cout << "5. Generate Report" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: fm.addExpense(); break;
            case 2: fm.addIncome(); break;
            case 3: fm.displayExpenses(); break;
            case 4: fm.displayIncomes(); break;
            case 5: fm.generateReport(); break;
            case 6: break;
            default: cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
