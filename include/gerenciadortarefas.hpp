#ifndef GERENCIADORTAREFAS_HPP
#define GERENCIADORTAREFAS_HPP

#include "tarefa.hpp"
#include "tarefaespecializada.hpp"
#include <vector>

class gerenciadorTarefa
{
    private:
        std::vector<Tarefa*> tarefas;

    public:
        gerenciadorTarefa();
        ~gerenciadorTarefa();

        void adicionarTarefa(Tarefa* tarefa);
        void definirPrioridade(int id, int prioridade);
        void agendaTarefa(int id);
        void alterarStatus(int id);
        void listarTarefas();
        void classificarTarefas();
};

#endif