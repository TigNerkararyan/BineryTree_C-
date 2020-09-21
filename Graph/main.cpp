#include <iostream>
#include "graph.hpp"

int main() {
  
  Graph_A *graph = new Graph_A();
  int vertices = 4;
  Graph *graph1 = graph->createGraph(vertices);
  
  graph->addEdge(graph1,0,3);
  graph->addEdge(graph1,0,1);
  graph->addEdge(graph1,2,3);
  graph->addEdge(graph1,1,3);
  graph->addEdge(graph1,2,3);
  
  graph->printGraph(graph1);
}
