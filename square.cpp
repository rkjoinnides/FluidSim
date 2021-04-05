#include "square.hpp"

Square::Square()
{
    velocity_.x = 0.0;
    velocity_.y = 0.0;
}

float Square::GetDensity()
{
    return this->density_;
}

float Square::GetTemperature()
{
    return this->temperature_;
}