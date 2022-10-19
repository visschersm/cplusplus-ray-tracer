#pragma once

class Vector2f
{
    float x, y;

public:
    Vector2f(float x, float y);

    Vector2f operator + (Vector2f value);
    void operator += (Vector2f value);
    Vector2f operator - (Vector2f value);
    void operator -= (Vector2f value);
    Vector2f operator * (float scalar);
    void operator *= (float scalar);
    Vector2f operator / (float scalar);
    void operator /= (float scalar);
};