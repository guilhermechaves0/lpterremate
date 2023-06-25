#include "estruturadados.hpp"
#include "gerenciadortarefas.hpp"
#include <iostream>

// Lista encadeada
LinkedList::LinkedList()
{
    this->head = nullptr;
    this->tail = nullptr;
    this->size = 0;
}

LinkedList::~LinkedList()
{
    Node *current = this->head;
    Node *next;

    while (current != nullptr)
    {
        next = current->next;
        delete current;
        current = next;
    }
}

void LinkedList::insert(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;

    if (this->head == nullptr)
    {
        this->head = newNode;
        this->tail = newNode;
    }
    else
    {
        this->tail->next = newNode;
        this->tail = newNode;
    }

    this->size++;
}

void LinkedList::remove(int data)
{
    Node *current = this->head;
    Node *previous = nullptr;

    while (current != nullptr)
    {
        if (current->data == data)
        {
            if (previous == nullptr)
            {
                this->head = current->next;
            }
            else
            {
                previous->next = current->next;
            }

            if (current->next == nullptr)
            {
                this->tail = previous;
            }

            delete current;
            this->size--;
            return;
        }

        previous = current;
        current = current->next;
    }
}

void LinkedList::print()
{
    Node *current = this->head;

    while (current != nullptr)
    {
        std::cout << current->data << std::endl;
        current = current->next;
    }
}

int LinkedList::getSize()
{
    return this->size;
}

// Fila
Queue::Queue()
{
    this->front = nullptr;
    this->rear = nullptr;
}
Queue::~Queue()
{
    Node *current = this->front;
    Node *next;

    while (current != nullptr)
    {
        next = current->next;
        delete current;
        current = next;
    }
}

void Queue::enqueue(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;

    if (this->front == nullptr)
    {
        this->front = newNode;
        this->rear = newNode;
    }
    else
    {
        this->rear->next = newNode;
        this->rear = newNode;
    }
}

void Queue::dequeue()
{
    if (this->front == nullptr)
    {
        return;
    }

    Node *temp = this->front;
    this->front = this->front->next;

    if (this->front == nullptr)
    {
        this->rear = nullptr;
    }

    delete temp;
}

void Queue::print()
{
    Node *current = this->front;

    while (current != nullptr)
    {
        std::cout << current->data << std::endl;
        current = current->next;
    }
}