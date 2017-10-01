//
// Created by Quinn on 10/1/2017.
//
// QUINN CLARK LAB 3


#include <iostream>

using namespace std;

int main()
{

    //parts 1 + 2
    //running 256 times before overflowing into the negatives
    //at 256 it is 32,640
    //at 257 it goes -32,640
    short n = 1;
    short sum = 0;
    while(n < 256)
    {
        sum += n;
        cout << sum << endl;
        n++;
    }



    //part 3
    long x = 1;
    long summ = 0;
    while(x < 65537)
    {

        summ += x;
        cout << summ << endl;
        x++;
    }

    // this loop will run 65,536 times before overflowing on the 65,537 try


    long y = 1;
    float summm = 1;
    while(y < 36)
    {
        summm *= y;
        y++;
        cout << summm << endl;
    }

    //this loop will run 35 times before overflowing on the 36th run

    long z = 1;
    double summmm = 1;
    while(z < 172)
    {
        summmm *= z;
        z++;
        cout << summmm << endl;
    }
    //this loop will run 171 times with type double before overflowing at the 172 run



    float a = 1;
    float summmmmm = 0;
    while(a < 10)
    {
        summmmmm = a * (1/a) -1;
        a++;
        cout << summmmmm << endl;
    }

    // n* (1/n) -1 is zero using arithmetic but it is not when using floating point arithmetic
    // adding (1/n) n times is not equal to n*(1/n) when using floating point arithmetic either


    for(double i = 3.4; i < 4.4; i += 0.2)
    {
        cout << "i = " << i << endl;
    }

    // I think the numeric error is that it shouldn't be printing out the 4.4 because
    // the way the for loop is set up it should stop at 4.2
    // It does stop at 4.2 when you run it with the double type and not float

    return 0;
}