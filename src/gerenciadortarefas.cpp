#include "gerenciadortarefas.hpp"
#include "estruturadados.hpp"
#include <iostream>
#include <algorithm>

// construtor e destrutor
gerenciadorTarefa::gerenciadorTarefa()
{

}

gerenciadorTarefa::~gerenciadorTarefa()
{
    for (auto tarefa : tarefas)
    {
        delete tarefa;
    }
    tarefas.clear();
}

void gerenciadorTarefa::adicionarTarefa(Tarefa* tarefa)
{
    tarefas.push_back(tarefa);
}

void gerenciadorTarefa::definirPrioridade(int id, int prioridade)
{
    for (auto tarefa : tarefas)
    {
        if (tarefa->getId() == id)
        {
            tarefa->setPrioridade(prioridade);
        }
    }
}

void gerenciadorTarefa::agendaTarefa(int id)
{
    for (auto tarefa : tarefas)
    {
        if (tarefa->getId() == id)
        {
            tarefa->setData(1);
        }
    }
}

void gerenciadorTarefa::alterarStatus(int id)
{
    for (auto tarefa : tarefas)
    {
        if (tarefa->getId() == id)
        {
            tarefa->setStatus(!tarefa->getStatus());
        }
    }
}

void gerenciadorTarefa::listarTarefas()
{
    for (auto tarefa : tarefas)
    {
        std::cout << "ID: " << tarefa->getId() << std::endl;
        std::cout << "Prioridade: " << tarefa->getPrioridade() << std::endl;
        std::cout << "Status: " << tarefa->getStatus() << std::endl;
        std::cout << "Nome: " << tarefa->getNome() << std::endl;
        std::cout << "Descrição: " << tarefa->getDescricao() << std::endl;
        std::cout << std::endl;
    }
}

void gerenciadorTarefa::classificarTarefas()
{
    std::sort(tarefas.begin(), tarefas.end(), [](const Tarefa* t1, const Tarefa* t2)
    {
        return t1->getPrioridade() < t2->getPrioridade();
    });
}