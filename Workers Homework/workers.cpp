#include "workers.h"
#include <iostream>
using namespace std;

void inputNewWorker(Worker* worker) {
	worker->firstName = check("first name");
	worker->lastName = check("last name");
	worker->telephone = check("telephone");
	// worker->salary = check2("salary");

}

Worker* addWorker(Worker workers[], int& last)
{
	Worker* worker = new Worker;
	inputNewWorker(worker);
	workers[last] = *worker;
	last++;
	return worker;
}
