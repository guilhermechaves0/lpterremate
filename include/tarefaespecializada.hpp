#ifndef TAREFAESPECIALIZADA_HPP
#define TAREFAESPECIALIZADA_HPP

#include <tarefa.hpp>

class bugTarefa : public Tarefa
{
    private:
        std::string gravidade;

    public:
        // constructor and destructor
        bugTarefa(int id, int prioridade, bool status, std::string nome, std::string descricao, std::string gravidade);
        ~bugTarefa();

        // getters and setters
        std::string getGravidade() const;

        // methods
        void alterarGravidade();
};

class manutencaoTarefa : public Tarefa
{
    private:
        std::string tipo;

    public:
        // constructor and destructor
        manutencaoTarefa(int id, int prioridade, bool status, std::string nome, std::string descricao, std::string tipo);
        ~manutencaoTarefa();

        // getters and setters
        std::string getTipo() const;

        // methods
        void alterarTipo();
};

#endif // TAREFAESPECIALIZADA_HPP