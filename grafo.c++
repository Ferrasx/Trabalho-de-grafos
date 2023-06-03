#include <iostream>
#include <vector>
using namespace std;
class Vertice
{
private:
    int id;

public:
    Vertice(int id) : id(id) {}
    int getID()
    {
        return id;
    }
};

class Aresta
{
private:
    Vertice *u;

private:
    Vertice *v;

public:
    Aresta(Vertice *u, Vertice *v) : u(u), v(v) {}

    Vertice *getU() const
    {
        return u;
    };

    Vertice *getV() const
    {
        return v;
    }
};

class Grafo
{
private:
    vector<Vertice *> vertices;
    vector<Aresta *> arestas;

public:
    ~Grafo()
    {
        // Liberar a memória alocada para vértices e arestas
        for (Vertice *v : vertices)
        {
            delete v;
        }
        for (Aresta *a : arestas)
        {
            delete a;
        }
    }
    Vertice *adicionarVertice(int id)
    {
        Vertice *novoVertice = new Vertice(id);
        vertices.push_back(novoVertice);
        return novoVertice;
    }
    void adicionarAresta(Vertice *u, Vertice *v)
    {
        Aresta *novaAresta = new Aresta(u, v);
        arestas.push_back(novaAresta);
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
        for (Aresta *a : arestas)
        {
            cout << "Aresta: " << a->getU()->getID() << " -> " << a->getV()->getID() << endl;
        }
    }
};

int main()
{
}