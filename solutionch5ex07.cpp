#include "std_lib_facilities.h"

using namespace std;
/*
  UCF COP3330 Fall 2021 Assignment 5 Solution
  Copyright 2021 Ihosvany Marquez
 */


bool multRoots(double a, double b, double c){
    return(pow(b,2)-(4*a*c)>=0);
}
bool Root(double a, double b, double c){
    return(pow(b,2)-(4*a*c)==0);
}

int main(){
    double a;
    double b;
    double c;
    
    cout <<"This is a quadratic calculator. Enter an Integer for constants a, b, and c.\n";
    
    cout <<"a: ";
    while (1) 
    {
        if (cin >> a) 
        {
            break;
        } 
        else 
        {
             cout << "Error Invalid Input ";
             return(1);
            }
        }

    cout <<"b: ";

    while (1) 
    {
        if (cin >> b) 
        {
            break;
        } 
        else 
        {
            cout << "Error Invalid Input ";
            return(1);
            }
        }

    cout <<"c: ";

    while (1) 
    {
        if (cin >> c) 
        {
            
            break;
        } 
        else 
        {
             cout << "Error Invalid Input ";
             return(1); 
            }
        }

    if(!multRoots(a,b,c))
        cout <<"No real roots found.";
    else if(Root(a,b,c))
    {
        double root= (-b)/(a*2);
        cout <<"Root is " << root;
    }
    else
    {
  
        double root1 = (-b+sqrt(pow(b,2)-(4*a*c)))/(a*2);
        double root2 = (-b-sqrt(pow(b,2)-(4*a*c)))/(a*2);
        cout <<" Roots are" << root1 << " and " <<root2;
    }
}