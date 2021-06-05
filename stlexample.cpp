#include<bits/stdc++.h>
#include<vector>
#include "set"
#include "map"
#include<algorithm>
using namespace std;

bool fun(int x,int y) {
  /* code */
  return x>y;
}
void vectordemo(){
    //vector
 vector<int> a={11,12,33,35};
 cout<<a[1]<<endl;
 a.push_back(100);
 a.push_back(100);
 a.push_back(100);
 a.push_back(100);
 sort(a.begin(),a.end());
 for(int x:a){
      cout<<x<<" ";
 }
 cout<<endl;
 auto it1=lower_bound(a.begin(),a.end(),100);
 auto it2=upper_bound(a.begin(),a.end(),100);
 cout<<*it1<<endl;
 std::cout <<it2-it1<< '\n';
 bool present=binary_search(a.begin(),a.end(),33);
 if(present){
   std::cout << "33 number is present"<< '\n';
 }
 a.pop_back();
 sort(a.begin(),a.end(),fun);
 for(int x:a){
      cout<<x<<" ";
 }
 cout<<endl;
}

void setdemo(){
    set<int> s;
    for(int i=5;i>=0;i--){
       s.insert(i);
    }
    s.erase(2);
    for(int x:s){
       std::cout << x << ' ';
    }
    auto it=s.find(3);
    auto it2=s.find(5);
    if(it!=s.end()){
       std::cout << "found" << '\n';
    }
    if(it2==s.end()){
      cout<<"nt found";
    }
    auto present=s.upper_bound(5);
    if(present==s.end()){ std::cout << "not found" << '\n';}

}

void mapdemo(){
  int n,ele;string str="";
  map<int,string,less<>> m;
  // m[1]="pruthvi";
  // m[2]="bhavani";
  // m[3]="kumari";
  // m[4]="shivanna";
  std::cout << "enter the number of elements to map:" << '\n';
  cin>>n;
  for(int i=0;i<n;i++){
    getline(cin,str);
    m.insert(make_pair(i,str));
  }
  for(auto it:m){
    std::cout <<it.first <<"=>"<<it.second<< endl;
  }
}

void multimapdemo(){
  multimap<char,int> multim;
  multim.insert(make_pair('a',1));
  multim.insert(make_pair('a',2));
  multim.insert(make_pair('a',3));
  multim.insert(make_pair('b',1));
  multim.insert(make_pair('b',2));
  multim.insert(make_pair('c',1));
  multim.insert(make_pair('c',4));
  for(auto x:multim){
     std::cout << x.first <<"=>"<<x.second<<'\n';
  }
  cout<<endl;
  auto range=multim.equal_range('a');
  for(auto x=range.first;x!=range.second;++x){
        std::cout << x->first <<"=>"<<x->second<<'\n';
  }
  cout<<multim.count('a')<<" "<<multim.size()<<endl;
  auto x=multim.find('a');
  cout<<x->first<<"=>"<<x->second<<endl;

}

int main()
{
  multimapdemo();
}
