#include "gerenciadortarefas.hpp"
#include "tarefa.hpp"
#include "tarefaespecializada.hpp"

int main ()
{
    gerenciadorTarefa gerenciador;

    // criando algumas tarefas
    Tarefa *tarefa1 = new Tarefa(1, 1, false, "Tarefa 1", "Descricao da tarefa 1");
    Tarefa *tarefa2 = new Tarefa(2, 2, true, "Tarefa 2", "Descricao da tarefa 2");
    bugTarefa* tarefaBug = new bugTarefa(3, 3, false, "Tarefa Bug", "Descricao da tarefa bug", "Alta");
    manutencaoTarefa* tarefaManutencao = new manutencaoTarefa(4, 4, true, "Tarefa Manutencao", "Descricao da tarefa manutencao", "Corretiva");

    // adicionando as tarefas ao gerenciador
    gerenciador.adicionarTarefa(tarefa1);
    gerenciador.adicionarTarefa(tarefa2);
    gerenciador.adicionarTarefa(tarefaBug);
    gerenciador.adicionarTarefa(tarefaManutencao);

    // definindo prioridade da tarefa 1
    gerenciador.definirPrioridade(1, 5);

    // agendando data para tarefa 2
    gerenciador.agendaTarefa(2);

    // alterando status da tarefa 3
    gerenciador.alterarStatus(3);

    // listando tarefas
    gerenciador.listarTarefas();

    // classificando tarefas
    gerenciador.classificarTarefas();

    // limpando a memória alocada
    delete tarefa1;
    delete tarefa2;
    delete tarefaBug;
    delete tarefaManutencao;

    return 0;
}