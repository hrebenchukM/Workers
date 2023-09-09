#pragma once
#include <string>
using namespace std;


struct Worker { //перечисляем поля
	string firstName;
	string lastName;
	string telephone;
	double salary;
};
void printAllWorkers(Worker[], int);
Worker* addWorker(Worker[], int&);
double check2();
string check(string);
void writeToFile(Worker[], int);
void readFromFile();
void printWorker(Worker[]);
int searchByLastName(Worker[], int, string);
void printByLastName(Worker[], int);

void searchBySalaryRange(Worker[], int, int, int);
