#include "Job.h"
#include <sstream>

int Job::number = 0;

Job::Job(int priority) {
    this->priority = priority;
    id = number;
    number++;
    nextJob = NULL;
}

void Job::setPriority(int priority) {
    this->priority = priority;
}

int Job::getPriority() const {
    return priority;
}

void Job::setNext(Job *job) {
    nextJob = job;
}

Job* Job::getNext() const {
    return nextJob;
}

void Job::setId(int id) {
    this->id = id;
}
int Job::getId() const {
    return id;
}


string Job::toString() {
    string tmp;
    tmp += "[";
    stringstream ss1;
    string s1;
    ss1 << id;
    ss1 >> s1;
    tmp += s1;
    tmp += ";";
    stringstream ss2;
    string s2;
    ss2 << priority;
    ss2 >> s2;
    tmp += s2;
    tmp += "]";
    return tmp;
}