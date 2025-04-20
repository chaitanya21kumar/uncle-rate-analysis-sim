#pragma once
#include <unordered_map>
#include <vector>

class ShareDAG {
public:
    void insertShare(int shareId, int parentId);
    int classifyShare(int shareId); // 1 = main chain, 0 = uncle
private:
    std::unordered_map<int, std::vector<int>> adj;
};
