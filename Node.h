#pragma once

#include "NodeType.h"
#include "DynamicsObject.h"
#include "NodeState.h"


class Node : DynamicsObject
{
public:
	Node(void);
	~Node(void);

	void connect(Node * node);
	void connectIO(Node * node);
	void setNodeType(NodeType& nodeType);
	NodeType getNodeType();
	NodeState * getState();
	void setNodeType(NodeType nodeType);
	int getNodeCount();
	Node ** getNodeList();
private: 
	Node ** nodeList;
	NodeType nodeType;
	NodeState * nodeState;
	int nodeCount;
	bool operator == (Node);
	bool operator == (Node*);
};
