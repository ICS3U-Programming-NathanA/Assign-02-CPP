// Copyright (c) 2021 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: Oct 4 2022
// This program asks the user for the radius of
// a hemisphere and the units from the user
// It then calculates the volume and surface area of the hemisphere.

#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
#include <iostream>

// declare the radius as a variable
float radius;

int main() {
    // declare the units as a variable
    std::string units;
    // get the radius from the user
    std::cout << "Enter the radius of the hemisphere: ";
    std::cin >> radius;
    // get the units of measurement from the user
    std::cout << "Enter the units of measurement you want to use: ";
    std::cin >> units;
    std::cout << "\n";
    // calculate the volume of the hemisphere
    float volume = M_PI * (pow(radius, 3)) * 2 / 3;

    // calculate the surface area of the hemisphere
    float surfaceArea = 3 * M_PI * (pow(radius, 2));
    // rounds the total by 2 decimal places and display the results
    std::cout
        << "The volume of the hemisphere is " << std::fixed
        << std::setprecision(2) << std::setfill('0')
        << volume << units << "^3\n";
    std::cout
        << "The volume of the hemisphere is " << std::fixed
        << std::setprecision(2) << std::setfill('0')
        << surfaceArea << units << "^2\n";
}
