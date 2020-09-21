#include <iostream>
#include "graph.hpp"

Node* Graph_A::newNode(int data) {
  Node *node = new Node;
  node ->data = data;
  node->next = NULL;
  return node;
}

Graph* Graph_A::createGraph(int V) {
  Graph *graph = new Graph;
  graph->V = V;
  graph->arr = new List[V];

  for(int i = 0; i < V; i++) {
    graph->arr[i].head = NULL;
  }

  return graph;
}

void Graph_A::addEdge(Graph *graph, int src, int dest) {
  Node *node = newNode(dest);
  node->next = graph->arr[src].head;
  graph->arr[src].head = node;

  node = newNode(src);
  node->next = graph->arr[dest].head;
  graph->arr[dest].head = node;
}

void Graph_A::printGraph(Graph* graph) {
  for(int i = 0; i < graph->V; i++) {
    Node *root = graph->arr[i].head;
    std::cout << "List of VERTEX " << i << std::endl;

    while(root != NULL) {
      std::cout << root->data << " -> ";
      root = root->next;
    }

    std::cout << std::endl;
  }
}
