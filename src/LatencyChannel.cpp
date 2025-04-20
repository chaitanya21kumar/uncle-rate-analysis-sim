#include "LatencyChannel.hpp"
#include <random>

double LatencyChannel::getRandomDelay() {
    static std::default_random_engine generator;
    static std::uniform_real_distribution<double> distribution(20.0, 150.0); 
    return distribution(generator);
}
