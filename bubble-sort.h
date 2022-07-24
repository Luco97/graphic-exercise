#pragma once
#include <vector>

void BubbleSort(std::vector<std::vector<int>> &coordinates) {
    for (int i = 0; i < coordinates.size(); i++)
    {
        for (int j = 1; j < coordinates.size(); j++)
        {
            if (coordinates[j - 1][0] > coordinates[j][0]) {
                int x = coordinates[j - 1][0];
                int y = coordinates[j - 1][1];
                coordinates[j - 1][0] = coordinates[j][0];
                coordinates[j - 1][1] = coordinates[j][1];
                coordinates[j][0] = x;
                coordinates[j][1] = y;
            }
        }
    }
}

void BubbleSortReverse(std::vector<std::vector<int>>& coordinates) {
    for (int i = 0; i < coordinates.size(); i++)
    {
        for (int j = 1; j < coordinates.size(); j++)
        {
            if (coordinates[j - 1][0] < coordinates[j][0]) {
                int x = coordinates[j - 1][0];
                int y = coordinates[j - 1][1];
                coordinates[j - 1][0] = coordinates[j][0];
                coordinates[j - 1][1] = coordinates[j][1];
                coordinates[j][0] = x;
                coordinates[j][1] = y;
            }
        }
    }
}