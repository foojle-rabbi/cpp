#include<iostream>
using namespace std;

int main()
{   
    /*
        there are 5 types of inheritence:
            1. Single inheritence
            2. Multilevel inheritence
            3. Hierarchical inheritence
            4. Multiple inheritence
            5. Hybrid inheritence


        1. single inheritence:
            *in this sort of inheritence one subclass inherit from one superclass.

            a <-- b;

            class a{
                -----
                -----
            }
            class b : public a{     //ekhaen shudhu a er child class b;
                -----
                -----
            }

        2. multilevel inheritence:
            * In this kind of inheritence the superclass for one is subclass for another:
            a <-- b <-- c;

            class a{
                -----
                -----
            }
            class b : public a{     //ekhane a er child class b; abar b er child class c;
                -----
                -----
            }
            class c : public b{
                -----
                -----
            }
        
        3. hierarchical inherit: 
            * In this sort of inherite, A super class is the parent of more subclass
            c--> a <-- b
                 |
                 d
        
            class a{
                -----
                -----
            }
            class b : public a{
                -----
                -----
            }
            class c : public a{     //ekahne a hocche super class; ar b c d hocche a er child class;
                -----
                -----
            }
            class d : public a{
                -----
                -----
            }

        4. Multiple inherite:
            * In a multiple inherite one can inherite more than one class:

           b--> a --> c
           |          |
           d          D

           class a{
                -----
                -----
            }
            class b : public a{
                -----
                -----
            }
            class c : public a{     //orthat ekhane "b and c" er parent class a; abar "d" er parent class "b and c" both;
                -----
                -----
            }
            class d : public b : public c{
                -----
                -----
            }

        5. Hybrid inheritence:
            * Hybrid is a combiantion of more than one types of inheritence;
    */

    return 0;
}