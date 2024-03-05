#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

class Point3D
{
private:
    float x, y, z;
public:
    Point3D(float x=0.0f, float y=0.0f, float z=0.0f) 
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    float GetX() { return this->x; }
    float GetY() { return this->y; }
    float GetZ() { return this->z; }

    void SetX(float x) { this->x = x; }
    void SetY(float y) { this->y = y; }
    void SetZ(float z) { this->z = z; }
};


class Cube3D 
{
private:
    float scale;
    float alpha;
    float beta;
    float gamma;
    Point3D corners[8] = {Point3D(1,0,1), Point3D(1,1,1), Point3D(1,1,0), Point3D(1,0,0),
                          Point3D(0,0,1), Point3D(0,1,1), Point3D(0,1,0), Point3D(0,0,0)}; // this contains the corner coordinates only

public:
    Cube3D(float scale=1.0f)
    {
        this->scale = scale;

        if(scale != 1.0f)
        {
            for(int i=0; i<8; i++) {
                corners[i].SetX(corners[i].GetX()*scale);
                corners[i].SetY(corners[i].GetY()*scale);
                corners[i].SetZ(corners[i].GetZ()*scale);
            }
        }
    }

    void drawCube3D(float rotSpeedAlpha = 1, float rotSpeedBeta = 1, float rotSpeedGamma = 1)
    {
        
    }

};





int main()
{
    



    return 0;
}




void drawClock()
{

}