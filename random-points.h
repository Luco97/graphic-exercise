#pragma once
#include <stdlib.h>
#include <vector>
#include <time.h>

void RandomPoints(std::vector<std::vector<int>> &coordinates, int X_axis, int Y_axis) {
        srand(time(NULL));
    for (int i = 0; i < coordinates.size(); i++)
    {
        coordinates[i][0] = rand() % X_axis;
        coordinates[i][1] = rand() % Y_axis;
    }
}