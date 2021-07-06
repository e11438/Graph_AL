#include <iostream>
#include <stdio.h>
#include <string>
#include "Graph.h"

int main() {
    std::cout << "Testing my new data structure with for graphs!\n";
    Graph g;
    g.insert("A", 4, "B");
    g.insert("A", 1, "C");
    g.insert("B", 6, "C");
    g.insert("C", 4, "A");
    g.insert("C", 1, "B");
    g.insert("C", 2, "D");

    g.printGraph();

    return 0;
}