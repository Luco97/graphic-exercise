#pragma once
#include <vector>
#include "crossPoint2D.h"

std::vector<std::vector<int>> WrapperDotsAlgorithm(std::vector<std::vector<int>> dots) {
    std::vector<std::vector<int>> borderPoints;
    std::vector<int> basePoint = dots[0];
    std::vector<int> bestPoint;
    std::vector<int> actualPoint;

    for (int i = 0; i < dots.size(); i++)
    {
        bestPoint = dots[i];

        for (int j = 0; j < dots.size(); j++)
        {
            actualPoint = dots[j];
            if (crossPoint2D(basePoint[0], basePoint[1], actualPoint[0], actualPoint[1], basePoint[0], basePoint[1], bestPoint[0], bestPoint[1]) > 0) {
                bestPoint = actualPoint;
            }
        }
        basePoint = bestPoint;
        borderPoints.push_back(bestPoint);
    }
    return borderPoints;
    
}