#pragma once

class Vector2
{
    public:
    float x;
    float y;

    Vector2();
    explicit Vector2(float X, float Y);

    //演算子オーバーロード
    friend Vector2 operator+(const Vector2& a, const Vector2& b);
    friend Vector2 operator-(const Vector2& a, const Vector2& b);
    friend Vector2 operator*(const Vector2& a, const Vector2& b);
    friend Vector2 operator*(const Vector2& vec, float scalar);
    Vector2& operator+=(const Vector2& right);
    Vector2& operator-=(const Vector2& right);
    Vector2& operator*=(float scalar);
};