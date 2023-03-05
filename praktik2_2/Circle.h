//
// Created by Danila on 05.03.2023.
//

#ifndef PRAKTIK2_2_CIRCLE_H
#define PRAKTIK2_2_CIRCLE_H

#pragma once

class Circle {

    float radius;
    float x_center;
    float y_center;

public:
    void circle(float r, float x, float y);
    void set_circle(float r, float x, float y);
    float square();
    bool triangle_around(float a, float b, float c);
    bool triangle_in(float a, float b, float c);
    bool check_circle(float r, float x_cntr, float y_cntr);
};

int main();

#endif //PRAKTIK2_2_CIRCLE_H
