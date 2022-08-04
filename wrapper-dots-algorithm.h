#pragma once
#include <vector>
#include "producto-vectorial-2D.h"

std::vector<std::vector<int>> WrapperDotsAlgorithm(std::vector<std::vector<int>> dots) {
    std::vector<std::vector<int>> borderPoints;
    std::vector<int> basePoint = dots[0];
    borderPoints.push_back(basePoint);
    std::vector<int> bestPoint;
    std::vector<int> actualPoint;

    for (int i = 0; i < dots.size(); i++)
    {
        bestPoint = dots[dots.size() - 1];

        for (int j = 1; j < dots.size() - 1; j++)
        {
            actualPoint = dots[j];
            if (productoVectorial2D(basePoint[0], basePoint[1], actualPoint[0], actualPoint[1], basePoint[0], basePoint[1], bestPoint[0], bestPoint[1]) > 0 && i != j) {
                bestPoint = actualPoint;
            }
        }
        basePoint = bestPoint;
        borderPoints.push_back(bestPoint);
    }
    return borderPoints;
    
}