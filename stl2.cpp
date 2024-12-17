#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct PersonalRecord {
    string name;
    string dob; 
    string telephone;

    
    bool operator<(const PersonalRecord &other) const {
        return name < other.name;
    }
};


void displayRecords(const std::vector<PersonalRecord>& records) {
    cout << "Name\t\tDate of Birth\tTelephone\n";
    for (const auto& record : records) {
        cout << record.name << "\t" << record.dob << "\t" << record.telephone << "\n";
    }
}


void searchRecord(const vector<PersonalRecord>& records, const string& name) {
    auto it = find_if(records.begin(), records.end(), [&name](const PersonalRecord& record) {
        return record.name == name;
    });

    if (it != records.end()) {
        cout << "Record found:\n";
        cout << "Name: " << it->name << ", Date of Birth: " << it->dob << ", Telephone: " << it->telephone << "\n";
    } else {
        cout << "Record not found for name: " << name << "\n";
    }
}

int main() {
    vector<PersonalRecord> records;
    int choice;

    do {
        cout << "1. Add Record\n2. Sort Records\n3. Display Records\n4. Search Record\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                PersonalRecord record;
                cout << "Enter Name: ";
                cin >> record.name;
                cout << "Enter Date of Birth (YYYY-MM-DD): ";
                cin >> record.dob;
                cout << "Enter Telephone Number: ";
                cin >> record.telephone;
                records.push_back(record);
                break;
            }
            case 2:
                sort(records.begin(), records.end());
                cout << "Records sorted by name.\n";
                break;
            case 3:
                displayRecords(records);
                break;
            case 4: {
                string name;
                cout << "Enter Name to Search: ";
                cin >> name;
                searchRecord(records, name);
                break;
            }
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
        
    } while(choice!=5);
    return 0;

    
}