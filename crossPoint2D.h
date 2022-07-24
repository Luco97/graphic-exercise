#pragma once

double crossPoint2D(int xi1, int yi1, int xf1, int yf1, int xi2, int yi2, int xf2, int yf2) {
    double x1 = xf1 - xi1;
    double y1 = yf1 - yi1;
    double x2 = xf2 - xi2;
    double y2 = yf2 - yi2;
    return x1 * y2 - x2 * y1;

}