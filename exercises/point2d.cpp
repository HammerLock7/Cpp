#include <iostream>
#include <cmath>

class Point2d{
    private:
        double m_x{0.0};
        double m_y{0.0};
    public:
        Point2d()=default;

        Point2d(double x, double y)
            :m_x{x}, m_y{y}
        {}

        void print() const{
            std::cout<<"Point2d ("<<m_x<<", "<<m_y<<")\n";
        }
        double getX() const{return m_x;}
        double getY() const{return m_y;}

        double distanceTo (const Point2d& x)const{// a function to get the distance between two points
            return std::sqrt((this->m_x - x.getX())*(this->m_x - x.getX()) + (this->m_y - x.getY())*(this->m_y - x.getY()));
        }
};

int main(){
    Point2d first{};
    Point2d second{3.0, 4.0};

    first.print();
    second.print();

    std::cout<<"Distance between two points: "<<first.distanceTo(second)<<'\n';

    return 0;
}