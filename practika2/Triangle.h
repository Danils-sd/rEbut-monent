//
// Created by Danila on 05.03.2023.
//

#ifndef PRACTIKA2_TRIANGLE_H
#define PRACTIKA2_TRIANGLE_H


#pragma once

class Triangle {
private:
    double a, b, c;

public:
    bool exst_tr();

    void set(double a1, double b1, double c1);

    void show();

    double perimetr();

    double square();

};

int main();

#endif //PRACTIKA2_TRIANGLE_H
