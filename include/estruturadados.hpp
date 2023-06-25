#ifndef ESTRUURADADOS_HPP
#define ESTRUURADADOS_HPP

struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
    private:
        Node *head;
        Node *tail;
        int size;

    public:
        LinkedList();
        ~LinkedList();

        void insert(int data);
        void remove(int data);
        void print();
        int getSize();
};

class Queue
{
    private:
        Node* front;
        Node* rear;

    public:
        Queue();
        ~Queue();

        void enqueue(int data);
        void dequeue();
        void print();        
};

#endif