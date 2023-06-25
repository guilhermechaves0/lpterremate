#include "tarefa.hpp"
#include <iostream>

// Tarefa
// construtor e destrutor
Tarefa::Tarefa(int id, int prioridade, bool status, std::string nome, std::string descricao)
{
    this->id = id;
    this->prioridade = prioridade;
    this->status = status;
    this->nome = nome;
    this->descricao = descricao;
}
Tarefa::~Tarefa() {}

// getters e setters
int Tarefa::getId() const
{
    return this->id;
}
void Tarefa::setId(int id)
{
    this->id = id;
}
int Tarefa::getPrioridade() const
{
    return this->prioridade;
}
void Tarefa::setPrioridade(int prioridade)
{
    this->prioridade = prioridade;
}
int Tarefa::getData() const
{
    return this->data;
}
void Tarefa::setData(int data)
{
    this->data = data;
}
bool Tarefa::getStatus() const
{
    return this->status;
}
void Tarefa::setStatus(bool status)
{
    this->status = status;
}
std::string Tarefa::getNome() const
{
    return this->nome;
}
void Tarefa::setNome(std::string nome)
{
    this->nome = nome;
}
std::string Tarefa::getDescricao() const
{
    return this->descricao;
}
void Tarefa::setDescricao(std::string descricao)
{
    this->descricao = descricao;
}

// métodos
void Tarefa::setPrioridade()
{
    int prioridade;
    std::cout << "Digite a prioridade da tarefa: ";
    std::cin >> prioridade;
    this->prioridade = prioridade;
}
void Tarefa::setStatus()
{
    bool status;
    std::cout << "Digite o status da tarefa: ";
    std::cin >> status;
    this->status = status;
}