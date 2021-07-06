#include "Graph.h" 
#include <stdio.h>
Graph::Graph()
{
    printf("constructing graph adjacency list \t num_vertices - %d , num_edges - %d\n", num_vertices, num_edges);
    printf("initializing all values\n");
    num_vertices = 0;
    num_edges = 0;
    printf("Finished initializing num_vertices - %d , num_edges - %d\n", num_vertices, num_edges);
}
Graph::~Graph()
{
    printf("Deconstructing graph..\n");
}

void Graph::insert(std::string from, int weight, std::string to)
{
    GraphMap::iterator it = g.find(from);

    if(it != g.end())
    {
        NodeList n_list = it->second;
        Node n(weight, to);
        n_list.push_back(n);
        g[from] = n_list;
    }
    else
    {
        NodeList new_n_list;
        Node n(weight, to);
        new_n_list.push_back(n);
        g[from] = new_n_list;
    }
}

void Graph::printGraph()
{
    GraphMap::iterator it;
    for(it = g.begin(); it != g.end(); ++it)
    {
        NodeList  node_list = it->second;
        NodeList::iterator listIt;
        bool first = true;
        printf("%s => [ ", (it->first).c_str());
        for(listIt = node_list.begin(); listIt != node_list.end(); ++listIt)
        {
            if(!first)
            {
                printf(", ");
            }
            Node n = *listIt;
            printf("(%s, %d)", n.getName().c_str(), n.getWeight());

            first = false;
        }
        printf(" ]\n");
    }
}