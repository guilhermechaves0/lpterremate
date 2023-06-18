#include "task.hpp"
#include <iostream>

// Task
// constructor and destructor
Task::Task(int id, int priority, bool status, std::string name, std::string description)
{
    this->id = id;
    this->priority = priority;
    this->status = status;
    this->name = name;
    this->description = description;
}
Task::~Task() {}

// getters and setters
int Task::getId()
{
    return this->id;
}
void Task::setId(int id)
{
    this->id = id;
}
int Task::getPriority()
{
    return this->priority;
}
void Task::setPriority(int priority)
{
    this->priority = priority;
}
bool Task::getStatus()
{
    return this->status;
}
void Task::setStatus(bool status)
{
    this->status = status;
}
std::string Task::getName()
{
    return this->name;
}
void Task::setName(std::string name)
{
    this->name = name;
}
std::string Task::getDescription()
{
    return this->description;
}
void Task::setDescription(std::string description)
{
    this->description = description;
}

// methods
void Task::print()
{
    std::cout << "Task #" << this->id << std::endl;
    std::cout << "Priority: " << this->priority << std::endl;
    std::cout << "Status: " << this->status << std::endl;
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Description: " << this->description << std::endl;
}


// BugTask
// constructor and destructor
BugTask::BugTask(int id, int priority, bool status, std::string name, std::string description, std::string severity) : Task(id, priority, status, name, description)
{
    this->severity = severity;
}
BugTask::~BugTask() {}

// getters and setters
std::string BugTask::getSeverity()
{
    return this->severity;
}
void BugTask::setSeverity(std::string severity)
{
    this->severity = severity;
}