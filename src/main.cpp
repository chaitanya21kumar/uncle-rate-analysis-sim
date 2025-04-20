#include "Node.hpp"
#include "LatencyChannel.hpp"
#include "ShareDAG.hpp"
#include <fstream>
#include <vector>
#include <iostream>

int main() {
    std::vector<Node> nodes;
    LatencyChannel channel;
    ShareDAG graph;

    for (int i = 0; i < 15; ++i) nodes.emplace_back(i);

    for (int round = 0; round < 30; ++round) {
        for (auto &node : nodes) {
            node.produceShare();
            for (auto &peer : nodes) {
                if (&node != &peer && channel.getRandomDelay() < 60) {
                    peer.receiveShare(node.getNodeId());
                    graph.insertShare(round * 15 + peer.getNodeId(), round * 15 + node.getNodeId());
                }
            }
        }
    }

    std::ofstream file("results/uncle_data.csv");
    file << "shareId,parentId,isMainChain\n";
    for (int i = 0; i < 400; ++i)
        file << i << "," << (i > 0 ? i-1 : 0) << "," << graph.classifyShare(i) << "\n";
    file.close();
    std::cout << "Simulation completed. Output: results/uncle_data.csv\n";
}
