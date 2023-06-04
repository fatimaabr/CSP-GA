#include <iostream>
#include <vector>
#include "GeneticAlgorithm.hpp"
#include "Rectangle.hpp"

int main() {
    // Define the input rectangles
    std::vector<Rectangle> inputRectangles = {
        {5, 8, 0, 0, false},
        {4, 10, 0, 0, false},
        {8, 12, 0, 0, false}
    };

    // Define the container dimensions
    int containerWidth = 20;
    int containerHeight = 20;

    // Create an instance of GeneticAlgorithm
    GeneticAlgorithm ga;

    // Run the genetic algorithm
    int populationSize = 50;
    int generations = 100;
    ga.run(inputRectangles, containerWidth, containerHeight, populationSize, generations);

    return 0;
}
