/* The output of the code
derived-1
derived-2
base-3
base-4 

Explanation:

1.The function fun_1() is not virtual in the base class, so early binding takes place 
and the call to p->fun_1() invokes the fun_1() function in the derived class.

2.The functions fun_2(), fun_3(), and fun_4() are virtual in the base class, so late binding (run-time polymorphism) takes place. 
The call to p->fun_2() invokes the fun_2() function in the derived class.

3.The call to p->fun_3() invokes the fun_3() function in the base class.

4.The call to p->fun_4() results in a compiler error because there is no definition of fun_4() in the derived class 
with no arguments, only a definition with one argument.

*/
