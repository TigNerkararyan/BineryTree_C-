#ifndef GRAPH_H
#define GRAPH_H


struct Node {
  int data;
  Node *next;
};

struct List {
  Node *head;
};

struct Graph {
  int V;
  List *arr;
};


class Graph_A {
  public:
    Node* newNode(int data);
    Graph* createGraph(int V);
    void addEdge(Graph *graph, int src, int dest);
    void printGraph(Graph *graph);
};

#endif
