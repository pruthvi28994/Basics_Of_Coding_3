#include "bits/stdc++.h"
using namespace std;
class shape{
      // class is said to be abstract class if class has atleast one pure virtual function
      public:virtual void getarea(/* arguments */)=0;;
};
class circle:public shape{
      public:void getarea(){
            int r;
            std::cout << "enter the radius" << '\n';
            std::cin >> r;
            std::cout << "area =" <<(3.142*r*r)<<'\n';
      }
};
class rectangle{
      public:void getarea(/* arguments */) {
        int length,breadth;
        std::cout << "enter the lenght and Breadth:" << '\n';
        cin>>length>>breadth;
        std::cout << "area of rectangle =" <<(length*breadth)<< '\n';
      }
};
int main(){
      // shape *ptr;
      // circle c1;
      // rectangle r1;
      // ptr=&c1;
      // c1.getarea();

      circle c1;
      c1.getarea();
      rectangle r1;
      r1.getarea();
}
