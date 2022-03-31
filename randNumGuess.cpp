// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: March 30, 2022
// This is a program that generates a random number
// and the user guesses a number


#include <iostream>
#include <random>


int main() {
    // declare variables
    float guess;
    int randomNumber;

  std::random_device rseed;

  std::mt19937 rgen(rseed());  //  mersenne_twister

  std::uniform_int_distribution<int> idist(1, 9);  //  [0, 100]

  randomNumber = idist(rgen);



    // Get the guess from the user
    std::cout << "Enter a number between 1 and 9: ";
    std::cin >> guess;
    std::cout << "" << std::endl;

    // check if the users guess is incorrect or correcy
    if (guess != randomNumber) {
        // display incorrect
        std::cout << "That is wrong!";
    } else {
        std::cout << "That is correct!";
    }
}
