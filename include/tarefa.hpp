#ifndef TAREFA_HPP
#define TAREFA_HPP

#include <string>

class Tarefa
{
    private:
        int id;
        int prioridade;
        int data;
        bool status;
        std::string nome;
        std::string descricao;

    public:
        // constructor and destructor
        Tarefa(int id, int prioridade, bool status, std::string nome, std::string descricao);
        ~Tarefa();

        // getters and setters
        int getId() const;
        void setId(int id);
        int getPrioridade () const;
        void setPrioridade(int prioridade );
        int getData() const;
        void setData(int data);
        bool getStatus() const;
        void setStatus(bool status);
        std::string getNome() const;
        void setNome(std::string nome);
        std::string getDescricao() const;
        void setDescricao(std::string descricao);

        // methods
        void setPrioridade();
        void setStatus();
};

#endif // TAREFA_HPP