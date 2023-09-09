#include<iostream>
#include "workers.h"
using namespace std;

int menu() {
    cout << endl;
    cout << "1.Add new worker:" << endl;
    cout << "2.Print Workers:" << endl;

    cout << "3.Write to file:" << endl;
    cout << "4.Read from file:" << endl;
    cout << "5.Find by last name:" << endl;
    cout << "6.Find by salary diaposon:" << endl;
    cout << "7.Sort by last name:" << endl;
    cout << "8.Delete worker:" << endl;
    cout << "8.EXIT:" << endl;


    int choice;
    do {
        cout << "Enter your choice:";
        cin >> choice;
    } while (choice < 1 || choice > 9);
    return choice;
}



void doMenu(Worker workers[], int& last) {
    int choice;
    do {
        choice = menu();
        switch (choice) {
        case 1:
            addWorker(workers, last);
            break;
        case 2:
            printAllWorkers(workers, last);
            break;
        case 3:
            writeToFile(workers, last);
            break;
        case 4:
            readFromFile();
            break;
        case 5:
            printByLastName(workers, last);
            break;
        case 6:
            int minSalary = 0;
            int maxSalary = 0;
            cout << "Write minSalary:";
            cin >> minSalary;
            cout << "Write maxSalary:";
            cin >> maxSalary;
            searchBySalaryRange(workers, last, minSalary, maxSalary);
            break;
        case 7:
            break;
        case 8:
            break;
            cout << "Bye!" << endl;
            break;
        }
    } while (choice != 8);
}

int main() {
	const int N = 5;
	int last = 0;
	Worker workers[N];
    doMenu(workers, last);
}