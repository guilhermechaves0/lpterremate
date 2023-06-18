#ifndef SPRINT_HPP
#define SPRINT_HPP

#include <vector>

class Sprint
{
    private:
        int id;
        std::vector<int> tasks;

    public:
        // constructor and destructor
        Sprint(int id, std::vector<int> tasks);
        ~Sprint();

        // getters and setters
        int getId();
        void setId(int id);
        std::vector<int> getTasks();
        void setTasks(std::vector<int> tasks);

        // methods
        void addTask(int taskId);
        void removeTask(int taskId);
};

class TestSprint : public Sprint
{
    private:
        int numberOfTests;
    
    public:
        // constructor and destructor
        TestSprint(int id, std::vector<int> tasks, int numberOfTests);
        ~TestSprint();

        // getters and setters
        int getNumberOfTests();
        void setNumberOfTests(int numberOfTests);

        // methods
        void executeTests();
};

#endif