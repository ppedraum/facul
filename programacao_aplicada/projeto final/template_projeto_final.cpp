#include <iostream>
#include <vector>

using namespace std;

// Pedro
class ItemBiblioteca {
protected:
    int id, ano;
    string titulo;
    bool emprestado = false;

public:
	ItemBiblioteca(int id, string titulo, int ano): id(id), titulo(titulo), ano(ano);
	
    virtual void exibirDetalhes(){
    	cout << "ID: " << id << endl;
    	cout << "Título: " << titulo << endl;
    	cout << "Ano: " << ano << endl;
	}
    int getId();
    bool isEmprestado();
    void emprestar();
    void devolver();
};

class Livro : public ItemBiblioteca {
protected:
	string autor;
	string genero;
	
public:
    Livro(int id, string titulo, int ano, string autor, string genero);      
    void exibirDetalhes() override;
};

// Rafael
class Usuario {
protected:
    int id, limiteEmprestimos, emprestimosAtuais;
    string nome;

public:
    Usuario(int id, string nome, int limiteEmprestimos);
        
    virtual void exibirUsuario();

    bool podeEmprestar();
    void realizarEmprestimo();
    void realizarDevolucao();
    int getId();
};

class Aluno : public Usuario {
public:
    Aluno(int id, string nome);
};

class Professor : public Usuario {
public:
    Professor(int id, string nome);
};

// Todo
class Biblioteca {
    vector<Livro> livros;
    vector<Aluno> alunos;
    vector<Professor> professores;

public:
    void adicionarLivro();
    void listarLivros();
    void adicionarUsuario();
    void listarUsuarios();
    void emprestarLivro();
    void devolverLivro();
    void menu();
};

int main() {
	
    return 0;
}

