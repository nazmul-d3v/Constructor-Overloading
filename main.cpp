#include<iostream>
using namespace std;

class demo
{
    int a;
public:
    demo() //d
    {
        a=10;
    }
    demo(int x)
    {
        a=x;
    }
demo (demo & z )
{
 a=z.a;
    
}

void putdata()
{
    court<<"\n a="<<a;
}
};

int main()
{
    demo aa;
    demo bb(20);
    demo cc(aa);

    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;
}
