#include "Node.h"

Node::Node(void)
{
	nodeList = new Node *[10];
	nodeCount=0;
	nodeState = new NodeState();

}

Node::~Node(void)
{
}

void Node::setNodeType(NodeType nodeType) {
	this->nodeType = nodeType;
}

void Node::connect(Node * node) {
	nodeList[nodeCount] = node;
	nodeCount++;
}

void Node::connectIO(Node * node) {
	connect(node);
	node->connect(this);
}

bool Node::operator==(Node n) {
	if (this->nodeType == n.getNodeType()) {
		return true;
	} else {
		return false;
	}
}

bool Node::operator==(Node *n) {
	if (this->nodeType == n->getNodeType()) {
		return true;
	} else {
		return false;
	}
}

NodeType Node::getNodeType() {
	return this->nodeType;
}


NodeState *Node::getState() {
	return this->nodeState;
}

int Node::getNodeCount() {
	return nodeCount;
}

Node **  Node::getNodeList() {
	return this->nodeList;
}