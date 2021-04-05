#include "sim_grid.hpp"

SimGrid::SimGrid()
{
    // TODO add initalization of grid squares
    for (int i = 0; i < this->width_; i++)
    {
        std::vector<Square> tmp_vec;
        for (int j = 0; j < this->height_; j++)
        {
            tmp_vec.push_back(Square());
        }
        this->grid_.push_back(tmp_vec);
    }
    
}

SimGrid::SimGrid(int width, int height) : SimGrid()
{
    this->width_ = width;
    this->height_ = height;
}