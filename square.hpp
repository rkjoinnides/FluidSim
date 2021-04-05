#ifndef SQUARE_HPP
#define SQUARE_HPP

// This file holds the structure 
struct SquareVelocity
{
    float x;
    float y;
};

class Square
{
    private:
        float density_ = 0;
        float temperature_ = 0;
        SquareVelocity velocity_;
    
    public:
        Square();

        void SetDensity(float input_denisty);
        void SetTemperature(float input_temperature);
        void SetVelocity(float velocity_x, float velocity_y);

        float GetDensity();
        float GetTemperature();
        SquareVelocity GetVelocity();
};

#endif