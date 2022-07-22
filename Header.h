#pragma once

void BubbleSort(int coordinates[][2], int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size; j++)
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