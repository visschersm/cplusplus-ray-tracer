#include "Vector2f.h"

Vector2f::Vector2f(float x, float y)
{
    this->x = x;
    this->y = y;
}

Vector2f Vector2f::operator+(Vector2f value)
{
    return Vector2f(this->x + value.x, this->y + value.y);
}

void Vector2f::operator+=(Vector2f value)
{
    this->x += value.x;
    this->y += value.y;
}

Vector2f Vector2f::operator-(Vector2f value)
{
    return Vector2f(this->x - value.x, this->y - value.y);
}

void Vector2f::operator-=(Vector2f value)
{
    this->x -= value.x;
    this->y -= value.y;
}

Vector2f Vector2f::operator*(float scalar)
{
    return Vector2f(this->x * scalar, this->y * scalar);
}

void Vector2f::operator*=(float scalar)
{
    this->x *= scalar;
    this->y *= scalar;
}

Vector2f Vector2f::operator/(float scalar)
{
    return Vector2f(this->x / scalar, this->y / scalar);
}

void Vector2f::operator/=(float scalar)
{
    this->x /= scalar;
    this->y /= scalar;
}
