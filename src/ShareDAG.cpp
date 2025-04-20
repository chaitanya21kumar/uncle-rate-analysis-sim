#include "ShareDAG.hpp"

void ShareDAG::insertShare(int shareId, int parentId) {
    adj[parentId].push_back(shareId);
}

int ShareDAG::classifyShare(int shareId) {
    return adj.count(shareId) ? 1 : 0;
}
