/* The output of the code
print derived class
show base class

Explanation:

1.The function print() is declared virtual in the base class, so late binding (run-time polymorphism) takes place. 
The call to bptr->print() invokes the print() function in the derived class.

2.The function show() is not declared virtual in the base class, so early binding takes place. 
The call to bptr->show() invokes the show() function in the base class.

*/