#include "workers.h"
#include <iostream>
using namespace std;

void inputNewWorker(Worker* worker) {
	worker->firstName = check("first name");
	worker->lastName = check("last name");
	worker->telephone = check("telephone");
	// worker->salary = check2("salary");

}

void printWorker(Worker worker) {
	cout << "First name:" << worker.firstName << ":" << endl;
	cout << "Last name:" << worker.lastName << ":" << endl;
	cout << "Telephone:" << worker.telephone << ":" << endl;
}

void printAllWorkers(Worker workers[], int N) {
	cout << endl << "Workers list:" << endl;
	for (int i = 0; i < N; i++) {
		printWorker(workers[i]);
	}
}

Worker* addWorker(Worker workers[], int& last)
{
	Worker* worker = new Worker;
	inputNewWorker(worker);
	workers[last] = *worker;
	last++;
	return worker;
}
