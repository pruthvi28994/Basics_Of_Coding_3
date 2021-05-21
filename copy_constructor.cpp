#include "bits/stdc++.h"
#include "iostream"
using namespace std;
class point{
      public:int x;
             int y;
      public:point(int x,int y){
          this->x=x;
          this->y=y;
      }
      point(const point &p){
          this->x=p.x;
          this->y=p.y;
      }
      int getX(){  return x; }
      int getY(){  return y; }
};
int main()
{
    point p1(10,20);
    point p2=p1;
    cout<<"p1 x="<<p1.x<<" y="<<p1.y<<endl;
    cout<<"p2 x="<<p2.x<<" y="<<p2.y<<endl;
}
