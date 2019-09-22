#include <iostream>
#include <iostream>
using namespace std;
class Int{
  int pol;
public:
  void zero(){
      pol=0;
  }
  int get(){
      return pol;
  }
  void set(int a){
      pol=a;
  }
  void sum(Int a, Int b){
      this->pol = a.pol +b.pol;
  }
  void print (){
      cout << "Sum=" << pol << endl;
  }
};
int main()
{
    Int t1,t2,t3;
    t1.set(2);
    t2.set(5);
    t3.zero();
    t3.sum(t1,t2);
    t3.print();
}
