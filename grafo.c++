#include <iostream>
#include <vector>
using namespace std;
class Vertice
{
private:
    int id;

public:
    Vertice(int id
            : id(id)) {}
    int getID() const
    {
        return this.id;
    }
};

class Aresta
{
private:
    Vertice u;

private:
    Vertice v;

public:
    Aresta(Vertice u, Vertice v
           : u(u), v(v)) {}

    Vertice int getU() const {
        return u}

    Vertice int getV() const
    {
        return v
    }
}

class grafo()
{
    vector<Vertice> vertices; // vetor de vertice
    vector<Aresta> arestas;   // vetor de aresta
    grafo()
    {
        // destructor de classe(desalocação de memoria)
        ~Grafo()
        {
            for (Vertice v : vertices)
            { // desalocando os v enquanto existir v no Vetor
                delete v
            }
            for (Aresta a : arestas)
            { // desalocando os a enquanto existir a no Vetor
                delete a
            }
        }
    }
    Vertice adicionarVertice(int id)
    {
        Vertice novoVertice = new Vertice(id)                  // novo objeto de vertice
                              vertices.push_back(novoVertice); // ponteiro para o novo vertice, inserindo esse novo vertice ao fim do grafo
        return novoVertice;
    }
    void adicionarAresta(Vertice u, Vertice v)
    {                                                         // passando nosso par de vertice como parametro
        Aresta novaAresta = new Aresta(Vertice u, Vertice V); // nova aresta criada com os vertices passados como parametro no metodo, ou seja, inserindo aresta no nosso par de vertice
        arestas.push_back(novaAresta);                        // ponteiro para a nova aresta atraves do push_back, ou seja inserindo aresta ao final do vertor de aresta do grafo
    }
    void exibirVertices() const
    {
        for (Vertice *v : vertices)
        {
            cout << "Vértice " << v->getID() << endl;
        }
    }
    void exibirArestas() const
    {
        // usei getId como nome e passei o id no vertice pra servir de indentificador do vertice
        for (Aresta *a : arestas)
        {
            cout << "Aresta: " << a->getU()->getID() << " -> " << a->getV()->getID() << endl;
        }
    }
}

int main()
{
}