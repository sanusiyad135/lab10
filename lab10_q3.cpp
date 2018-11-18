//including library
#include<iostream>    
using namespace std;   
class rectangle
{
    public:     
//declares length of rectangle
double length;     
//declares breadth of rectangle       
double breadth;     
    //declaration of member functions
    double area(void);
    double perimeter(void);
};
//member function defintions
double rectangle::area(void)
{
    return length*breadth;
}

double rectangle::perimeter(void)
{
    return 2*(length + breadth);
}

int main()    //driver function
{
    //variable declaration
  //declares object rect1   
rectangle rect1;   
   //declares object rect2  
rectangle rect2;   
    //asks user to enter length and breadth for rectangle 1
    cout<<"Enter the length of rect1"<<endl;
    cin>>rect1.length;
    cout<<"Enter the breadth of rect1"<<endl;
    cin>>rect1.breadth;
    //asks user to enter length and breadth of rectangle 2
    cout<<"Enter the length of rect2"<<endl;
    cin>>rect2.length;
    cout<<"Enter the breadth of rect2"<<endl;
    cin>>rect2.breadth;
    //displays the area of rectangles
    cout<<"The area of rect 1 is "<<rect1.area()<<endl;
    cout<<"The area of rect 2 is "<<rect2.area()<<endl;
    //displays the perimeters of the rectangles
    cout<<"The perimeter of rect 1 is "<<rect1.perimeter()<<endl;
    cout<<"The perimeter of rect 2 is "<<rect2.perimeter()<<endl;
    //compares the perimeters and areas of both the objects
    if(rect1.area() > rect2.area())
    {
        cout<<"The larger area is of rect 1 which is "<<rect1.area()<<endl;
    }
    
    else
    {
        cout<<"The larger area is of rect 2 which is "<<rect2.area()<<endl;
    }
    
    if(rect1.perimeter() > rect2.perimeter())
    {
        cout<<"Larger perimeter is that of rect 1 which is "<<rect1.perimeter()<<endl;
    }
    
    else
    {
        cout<<"Larger perimeter is that of rect 2 which is "<<rect2.perimeter()<<endl;
    }
    //return statement
    return 0;
}
