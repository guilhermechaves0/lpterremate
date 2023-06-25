#include "tarefaespecializada.hpp"
#include <iostream>

// bugTarefa
// construtor e destrutor
bugTarefa::bugTarefa(int id, int prioridade, bool status, std::string nome, std::string descricao, std::string severity) : Tarefa(id, prioridade, status, nome, descricao)
{
    this->gravidade = gravidade;
}
bugTarefa::~bugTarefa() {}

// getters e setters
std::string bugTarefa::getGravidade() const
{
    return this->gravidade;
}

// métodos
void bugTarefa::alterarGravidade()
{
    std::cout << "Gravidade atual: " << this->gravidade << std::endl;
    std::cout << "Digite a nova gravidade: ";
    std::cin >> this->gravidade;
}

// manutencaoTarefa
// construtor e destrutor
manutencaoTarefa::manutencaoTarefa(int id, int prioridade, bool status, std::string nome, std::string descricao, std::string tipo) : Tarefa(id, prioridade, status, nome, descricao)
{
    this->tipo = tipo;
}
manutencaoTarefa::~manutencaoTarefa() {}

// getters e setters
std::string manutencaoTarefa::getTipo() const
{
    return this->tipo;
}

// métodos
void manutencaoTarefa::alterarTipo()
{
    std::cout << "Tipo atual: " << this->tipo << std::endl;
    std::cout << "Digite o novo tipo: ";
    std::cin >> this->tipo;
}