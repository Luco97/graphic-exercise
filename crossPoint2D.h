#pragma once

int crossPoint2D(int xi1, int yi1, int xf1, int yf1, int xi2, int yi2, int xf2, int yf2) {
    int x1 = xf1 - xi1;
    int y1 = yf1 - yi1;
    int x2 = xf2 - xi2;
    int y2 = yf2 - yi2;
    return x1 * y2 - x2 * y1;
}