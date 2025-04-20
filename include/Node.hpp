#pragma once
#include "LatencyChannel.hpp"
#include "ShareDAG.hpp"

class Node {
public:
    Node(int id);
    void produceShare();
    void receiveShare(int fromId);
    int getNodeId() const;
private:
    int nodeId;
};
