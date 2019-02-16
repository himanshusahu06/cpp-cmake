#include<iostream>

// https://www.geeksforgeeks.org/virtual-function-cpp/
// https://www.geeksforgeeks.org/virtual-destructor/
class base {
    public:
    /**
     * this is VIRTUAL FUNCTION:
     * virtual function is an inheritable and overridable function to achieve runtime
     * polymorphism.
     **/
    virtual void greet() {
        std::cout << "Hello World from Base class!!" << std::endl;
    }
    /**
     * This is not virtual function.
     **/
    void greet_again() {
        std::cout << "Hello World Again from Base class!!" << std::endl;
    }
    /**
     * this is PURE VIRTUAL FUNCTION
     * 
     * PURE VIRTUAL FUNCTION:
     * A pure virtual function is a virtual function that is required to be implemented
     * by a derived class if the derived class is not abstract.
     * 
     * 1. if a class has pure virtual method, it becomes abstract class and it can not
     *    be instantiate.
     * 2. any subclass has to implement virtual function else subclass will become abstract
     *    class too and hense subclass also can't be instantiate.
     **/
    virtual void greet_again_and_again() = 0; //pure virtual function ends with `=0`
    virtual ~base() {
        std::cout << "Destroying base class" << std::endl;
    };
};

class derived: public base {
    public:
    derived() {}
    void greet() {
        //base::greet(); // you can also call parent class's method
        std::cout << "Hello World from Derived class!!" << std::endl;
    }
    void greet_again() {
        std::cout << "Hello World Again from Derived class!!" << std::endl;
    }
    void greet_again_and_again() {
        // has to implement pure virtual fuction
        std::cout << "I'm done with greeting :( " << std::endl;
    }
    ~derived() {
        std::cout << "Destroying derived class" << std::endl;
    };
};

int main() {
    // base b;      // ERROR: base class contains pure virtual method so can't be instantiate
    // b.greet();
    base *ptr;
    derived d;
    // Runtime polymorphism is achieved only through a pointer (or reference) of base class type.
    ptr = &d;
    ptr->greet(); // this will execute overridden method because method is marked as virtual
    ptr->greet_again(); // this willl execute method from `base` class as method is not virtual
    ptr->greet_again_and_again();
    return 0;
}
