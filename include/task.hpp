#ifndef TASKS_HPP
#define TASKS_HPP

#include <string>

class Task
{
    private:
        int id;
        int priority;
        bool status;
        std::string name;
        std::string description;

    public:
        // constructor and destructor
        Task(int id, int priority, bool status, std::string name, std::string description);
        ~Task();

        // getters and setters
        int getId();
        void setId(int id);
        int getPriority();
        void setPriority(int priority);
        bool getStatus();
        void setStatus(bool status);
        std::string getName();
        void setName(std::string name);
        std::string getDescription();
        void setDescription(std::string description);

        // methods
        void print();
};

class BugTask : public Task
{
    private:
        std::string severity;

    public:
        // constructor and destructor
        BugTask(int id, int priority, bool status, std::string name, std::string description, std::string severity);
        ~BugTask();

        // getters and setters
        std::string getSeverity();
        void setSeverity(std::string severity);
};

#endif // TASKS_HPP