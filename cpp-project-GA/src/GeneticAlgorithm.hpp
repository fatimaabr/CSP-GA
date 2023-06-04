#pragma once

#include <vector>
#include "Rectangle.hpp"

class GeneticAlgorithm {
public:
    void run(const std::vector<Rectangle>& inputRectangles, int containerWidth, int containerHeight,
             int populationSize, int generations);
};
