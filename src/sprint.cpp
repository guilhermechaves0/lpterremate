#include "sprint.hpp"

// Sprint
// constructor and destructor
Sprint::Sprint(int id, std::vector<int> tasks)
{
    this->id = id;
    this->tasks = tasks;
}
Sprint::~Sprint() {}

// getters and setters
int Sprint::getId()
{
    return this->id;
}
void Sprint::setId(int id)
{
    this->id = id;
}
std::vector<int> Sprint::getTasks()
{
    return this->tasks;
}
void Sprint::setTasks(std::vector<int> tasks)
{
    this->tasks = tasks;
}

// methods
void Sprint::addTask(int taskId) // add
{
    this->tasks.push_back(taskId);
}
void Sprint::removeTask(int taskId) // remove
{
    for (int i = 0; i < this->tasks.size(); i++)
    {
        if (this->tasks[i] == taskId)
        {
            this->tasks.erase(this->tasks.begin() + i);
        }
    }
}

// TestSprint
// constructor and destructor
TestSprint::TestSprint(int id, std::vector<int> tasks, int numberOfTests) : Sprint(id, tasks)
{
    this->numberOfTests = numberOfTests;
}
TestSprint::~TestSprint() {}

// getters and setters
int TestSprint::getNumberOfTests()
{
    return this->numberOfTests;
}
void TestSprint::setNumberOfTests(int numberOfTests)
{
    this->numberOfTests = numberOfTests;
}

// methods
void TestSprint::executeTests()
{
    
}