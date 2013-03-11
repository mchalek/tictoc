#include "tictoc.hpp"
#include <iostream>
#include <unistd.h>

using namespace std;

int main(void)
{
    tictoc x;

    x.tic();
    usleep(1000000);
    x.tic();
    usleep(1000000);
    double y1 = x.toc();
    double y2 = x.toc();

    cout << "2000000 usec => " << y1 << " sec" << endl;
    cout << "1000000 usec => " << y2 << " sec" << endl;

    return 0;
}
