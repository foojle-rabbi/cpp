#include<iostream>
using namespace std;

class test{
    int a;
    int b;
    public:
        test(int i, int j)
        // : a(i), b(j)         **initialization list kichui na. just value assign korar ekta system..
        // : a(i), b(j + i)
        // : a(i + 1), b (a + j)
        // : a(i), b(2 * i)
        // : b(i), a(a + i) //ekhane error show korbe na. but a garbage value dekhabe karon a shobaar agge declare kora hoiche.
        : a(i) //chaile a re ami ene value dia. b re body teo value dite parum..
        {
            b = j;
            cout<<"Constructor body"<<endl;
            cout<<"The value of a and b is : "<<a<<" and "<<b<<endl;
        }
};

int main()
{
    test object(2, 5);
    return 0;
}