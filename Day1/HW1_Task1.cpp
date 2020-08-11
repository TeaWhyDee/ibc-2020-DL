#include <iostream>
#include <string>
#include <cmath>

using namespace std;


float getLength(int x1, int y1, int x2, int y2){  // Get the length of an edge of the triangle
    float length = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    return length;
}


float getArea(float a, float b, float c){  // Get the area of the triangle from the length of the sides
    float p = (a + b + c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}


bool triangleExists(int x1, int y1, int x2, int y2, int x3, int y3){
    // If the vectors of 2 sides are collinear, triangle doesn't exist (all points lay on 1 line)
    if (abs(x1-x2)/getLength(x1,y1,x2,y2) == abs(x2-x3)/getLength(x2,y2,x3,y3) && abs(y1-y2)/getLength(x1,y1,x2,y2) == abs(y2-y3)/getLength(x2,y2,x3,y3))
        return false;
    
    // If two points are in the same place, triangle doesn't exist
    if ((x1 == x2 && y1 == y2) || (x2 == x3 && y2 == y3) || (x3 == x1 && y3 == y1))
        return false;

    return true;
}


int main()
{   
    cout << "Enter 6 numbers (x1 y1 x2 y2 x3 y3): ";
    int Pts[6];  // Pts = Points. Initialize and read all Points of the triangle (x1, y1, x2, y2, x3, y3)
    cin >> Pts[0] >> Pts[1] >> Pts[2] >> Pts[3] >> Pts[4] >> Pts[5];

    if (triangleExists(Pts[0], Pts[1], Pts[2], Pts[3], Pts[4], Pts[5])){
        float sideA = getLength(Pts[0], Pts[1], Pts[2], Pts[3]);
        float sideB = getLength(Pts[2], Pts[3], Pts[4], Pts[5]);
        float sideC = getLength(Pts[4], Pts[5], Pts[0], Pts[1]);
        
        float area = getArea(sideA, sideB, sideC);
        cout << "The area of the trianle is: " <<  area << endl;
    }
    else{
        cout << "Triangle with specified parameters doesn't exist" << endl;
    }

    return 0;
}
