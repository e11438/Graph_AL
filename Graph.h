#ifndef GRAPH_H
#define GRAPH_H

#include <unordered_map>
#include <list>
#include <string>

class Node;

typedef std::list<Node> NodeList;
typedef std::unordered_map<std::string, NodeList> GraphMap;

class Graph 
{
    private:
        int num_vertices;
        int num_edges;
        GraphMap g;

    public:
        Graph();
        ~Graph();
        void insert(std::string from, int weight, std::string to);
        void printGraph();

};

class Node 
{   
    private:
        int weight;
        std::string name;
    public:
        Node(int w = 0, std::string n = "None") : weight(w), name(n) {}
        std::string getName() { return name;}
        int getWeight() {return weight;}
};

#endif