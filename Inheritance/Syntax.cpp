SINGLE INHERITANCE:

class DerivedClass : visibility_mode BaseClass {
  // Derived class members (methods and attributes)
};
Here's a breakdown of the components:

DerivedClass: This is the name of the class inheriting properties from the base class.
visibility_mode (optional): This keyword specifies how the members of the base class will be accessible in the derived class. Common options include:
public: Members are inherited publicly and can be accessed directly from the derived class and outside objects.
protected: Members are inherited with protected access, meaning they can be accessed directly within the derived class and its derived classes (if any), but not from outside objects.
private (default if not specified): Members are inherited privately and can only be accessed by methods within the derived class.
BaseClass: This is the name of the class from which the derived class inherits properties.
{ // Derived class members ... }: This block contains the definition of the derived class's own methods and attributes.
