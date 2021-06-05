#include<bits/stdc++.h>
using namespace std;
class animal{
      public:int id;
      public:virtual void print(){
                std::cout << "ANIMAL GENERIC FOOD" << '\n';
            }
            virtual void read(){
                std::cout << "id of animal" << '\n';
            }
};
class cat:public animal{

      public:void print(){
           cout<<"id is:"<<id<<endl;
           cout<<"Cat eats cat food"<<endl;
      }
      void read(){
            cout<<"enter the id of animal:";
            std::cin >> id;
      }
};
class dog:public animal{

      public:void print(){
           cout<<"id is:"<<id<<endl;
           cout<<"dog eats gog food"<<endl;
      }
      void read(){
            cout<<"enter the id of animal:";
            std::cin >> id;
      }
};
void function1(animal *obj){
       obj->read();
       obj->print();
}
int main(){
      animal *baseptr;
      // animal a1;
      // a1.read();
      // a1.print();
      cat obj;
      // obj.read();
      // obj.print();
      baseptr=&obj;
      function1(baseptr);
}
