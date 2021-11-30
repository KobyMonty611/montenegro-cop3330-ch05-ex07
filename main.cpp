/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Koby Montenegro
 */

#include "header.h"
#include<iostream>
#include<math.h>

using namespace std;

void QuadFormula(int a, int b, int c)
{
    float root1,root2,real,imaginary;

    //INSIDE THE SQUARED
    int inSquared = (b*b)-(4*a*c);

    //If inSquared is 0
    if(inSquared == 0)
    {
        root1 = (-b + sqrt(inSquared))/(2*a);
        cout <<"The roots are both real and same! \nThe roots are " << root1;
    }
    //If inSquared is positive, making it real
    else if(inSquared > 0)
    {
        root1 =(-b+sqrt(inSquared))/(2*a);
        root2 =(-b-sqrt(inSquared))/(2*a);
        cout << "The roots are real but different.\nThe roots are root1 is " << root1 <<" and root 2 is " << root2;
    }
    //If inSquared is negative, making it imaginary
    else
    {
        real = (-b/(2*a));
        imaginary = (sqrt(-inSquared))/(2*a);
        cout << "One root is real, which is " << real; "\n";
        cout << "The other root is imaginary, which is " << imaginary; "\n";
    }

}

int main()
{
    int a,b,c;
    cout<<"Enter the values for a, b, and c:";
    cin>>a>>b>>c;
    
    //The output will be displayed here, whether they're the same, real, or imaginary
    QuadFormula(a,b,c);
    return 0;
}