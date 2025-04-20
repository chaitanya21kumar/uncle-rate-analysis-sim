#include "Node.hpp"
#include <iostream>

Node::Node(int id) : nodeId(id) {}

void Node::produceShare() {
    std::cout << "Node " << nodeId << " producing share..." << std::endl;
}

void Node::receiveShare(int fromId) {
    std::cout << "Node " << nodeId << " received share from Node " << fromId << std::endl;
}

int Node::getNodeId() const {
    return nodeId;
}
