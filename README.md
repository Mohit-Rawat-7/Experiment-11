# Experiment-11

## AIM-
To learn about constructors and destructors in C++.

### SOFTWARE USED-
VS Code

### PROBLEM STATEMENTS-
1)-Constructor Definition: Write a C++ program to define a constructor.

2)-Parameterized Constructor: Write a C++ program using a parameterized constructor.

3)-Copy Constructor: Write a C++ program using a copy constructor.

4)-Default Argument: Write a C++ program demonstrating default arguments in constructors.

5)-Rectangle Area Calculation: Write a C++ program to calculate the area of a rectangle using a class.

6)-Destructor: Write a C++ program using a destructor.
## THEORY-
### Constructor: 
A constructor is a special class function used to initialize objects. It has the same name as the class and no return type. There are two main types:

Default Constructor: Initializes objects with default values and can be automatically provided by the compiler if not explicitly defined.

Parameterized Constructor: Initializes objects with specific values provided as arguments, allowing for customized object setup.
Constructors can be overloaded, enabling multiple initialization methods. They are invoked automatically when an object is created.

Copy Constructor: A copy constructor creates a new object as a duplicate of an existing object. It’s essential for classes managing dynamic resources to ensure proper copying and resource management, preventing issues like memory leaks.

### Destructor:
A destructor is a class function that cleans up resources when an object is destroyed. It shares the class’s name prefixed with a tilde (~). There can only be one destructor per class, and it is automatically called in reverse order of construction. For derived classes, the derived class's destructor is called first, followed by the base class's destructor.


### CODES-
1-
```javascript
//Mohit Rawat
//23070123086
#include <iostream>
using namespace std;
class Myclass {
    
    public:
    Myclass(int side) {
       
        int area= side*side;
        cout<<"Area of square is: "<<area;
    }
    Myclass(int length, int bredth) {
        
        int area= length*bredth;
        cout<<"Area of rectangle is:"<<area;
    }
};
int main() {
   int side,length,breadth,ch;
   cout<<"Enter your choice for area square(1) rectangle(2) : ";
   cin>>ch;
   if (ch==1) {
       cout<<"Enter side of square: ";
       cin>>side;
       Myclass obj1(side);
   }
   else if(ch==2) {
       cout<<"Enter length, bredth of rectangle ";
       cin>> length;
       cin>>breadth;
       Myclass obj2(length,breadth);
   }  
   return 0;
}
```
2-
```javascript
//Mohit Rawat
//23070123086
#include <iostream>
using namespace std;
class Mohit
{
    public:
    Mohit() {
        cout<<"Hello Mohit"<<endl;
    }
};
int main() {
    Mohit obj; 
    return 0;
}
```
3-
```javascript
//Mohit Rawat
//23070123086
#include <iostream>
using namespace std;
class Myclass
{
    public:
    Myclass(int value) {
        cout<<"Your entered value is: "<<value<<endl;
    }
};

int main() {
   int a;
   cout<<"Enter a value: ";
   cin>>a;
   Myclass obj(a); 

    return 0;
}
```
4-
```javascript
//Mohit Rawat
//23070123086
#include<iostream>
using namespace std;
class MyClass{
    private:
    int value;
    public:
    MyClass(int val){
        value = val;
        cout << "Pink Floyd were established in the year- "<<value<<endl;
    }
    MyClass(const MyClass &obj){
        value = obj.value;
        cout<<"Second Indo-Pak war happened in the year- "<<value<<endl;
    }
};
int main(){
    MyClass obj1(1965);
    MyClass obj2 = obj1 ;
    return 0;
          }
```
5-
```javascript
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
```
6-
```javascript
//Mohit Rawat
//23070123086
#include <iostream>
using namespace std;
class MyClass {
public:
~MyClass() {
        cout << "Destructor called!" << endl;
    }
MyClass() {
        cout << "Constructor called!" << endl;
    }
};
int main() {
    MyClass obj;  

return 0;
}
```


### OUTPUTS-
1)-<img width="508" alt="image" src="https://github.com/user-attachments/assets/5e304337-96e6-41a8-b8ce-865949acbca8">

2)-<img width="349" alt="image" src="https://github.com/user-attachments/assets/c6ccc8e2-e276-4358-a35e-bf4e2acc529f">

3)-<img width="323" alt="image" src="https://github.com/user-attachments/assets/c5ad2df9-9550-4deb-bc31-e646ce7b3f29">

4)-<img width="440" alt="image" src="https://github.com/user-attachments/assets/63dcb894-cf55-4fbe-bd7d-dcbf05d08a38">

5)-<img width="472" alt="image" src="https://github.com/user-attachments/assets/2474dfbd-1f22-42e6-86fd-6bf40eac244a">

6)-<img width="351" alt="image" src="https://github.com/user-attachments/assets/aaa8e72e-7f90-4a25-aa8b-c31b91ddfdf4">

## CONCLUSION-
In C++, constructors initialize objects, either with default or custom values. Destructors handle resource cleanup when objects are destroyed. Copy constructors create copies of objects, crucial for managing dynamic resources. Mastery of these concepts ensures safe, efficient, and maintainable code.


