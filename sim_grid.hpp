#ifndef SIM_GRID_HPP
#define SIM_GRID_HPP

#include <vector>

#include "square.hpp"

// This file contains the definition of a simulation gird
// used to store information for the fluid simulation

class SimGrid
{
    private:
        int width_ = 100;
        int height_ = 100;
        std::vector<std::vector<Square>> grid_;

    public:
        SimGrid();
        SimGrid(int width, int height);
        void PrintGrid();
};

#endif