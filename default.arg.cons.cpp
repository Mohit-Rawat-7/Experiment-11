//Mohit Rawat
//23070123086
#include <iostream>
using namespace std;
class Myclass {
    private:
    int value1,value2;
    public:
    Myclass(int val1=0, int val2=0) {
        value1=val1;
        value2=val2;
        cout<<"Constructor called! Your entered value is: "<<value1<<" and "<<value2 <<endl;
    }   
};
int main() {
   
   Myclass obj1; 
   Myclass obj2(8);
   Myclass obj3(9,1);
   return 0;
}
