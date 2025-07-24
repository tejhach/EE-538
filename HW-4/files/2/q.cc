#include "q.h"

#include <algorithm>
#include <climits>
#include <iostream>
#include <queue>
#include <vector>

// Implement each function of `q.h` here.
//-----------------------------------------------------------------------------
  // TODO: Implement the following functions.
  //-----------------------------------------------------------------------------
  // Performs DFS search from root and returns the visited nodes in DFS order.
  // When there is a choice, the node with lower value should be visited first.

  std::vector<int> Graph::DFS(int root)
  {
   
  }

  // Performs DFS search on all nodes and returns the visited nodes in DFS
  // order. When there is a choice, the node with lower value should be visited
  // first. Note that this function does not take any inputs.
  std::vector<int> Graph::DFSAll()
  {
    
  }

  // Performs BFS search from root and returns a result of type BFSReturnValue,
  // which has the following:
  // 1. result.visited (vector): visited nodes in BFS order.
  // 2. result.path (map): a map of node i to a vector, where the vector is the
  // shortest path from root to i.
  // 3. result.distance (vector): element i represents the shortest distance
  // from root to node i.
  //
  // Assume root is a valid node in the graph.
  BFSReturnValue Graph::BFS(int root)
  {
       
  }

  // Returns true if there is at least one path between nodes i and j.
  // Assume i, j are valid nodes in the graph.
  bool Graph::IsPathBetweenNodes(int i, int j)
  {
    
  }

  // Returns true if the graph is bidirectional. A bidirectional graph is a
  // graph in which if edge (i,j) is in E, then the edge (j,i) is also in E.
  // An empty graph is considered bidirectional.
  // A graph of a single node is considered bidirectional.
  bool Graph::IsBidirectional()
  {
    
  }

  // Returns true if the graph is connected, i.e. if we start from each node, we
  // can get to any other node.
  bool Graph::IsConnected()
  {
    
    
  }

  // void Graph::DFS_helper(int root, std::map<int, bool> &marks,
  //                 std::vector<int> &visited)
  //                 {
  //                   visited.push_back(root);
  //                   marks[root] = true;
  //                   for (auto i = adjacency_list_[root].begin(); i != adjacency_list_[root].end(); i++)
  //                   {
  //                       if (!marks[(*i)])
  //                       {
  //                           DFS_helper((*i), marks, visited);
  //                       }
  //                   }
  //                   return;
  //                 }

void Graph::DFS_helper(int root, std::map<int, bool> &marks,
                  std::vector<int> &visited)
                  {
                   
                  }

  void Graph::BFS_helper(int root, std::vector<int> &distance,
                  std::vector<int> &previous, std::vector<int> &visited)
                  {
                  
                  }