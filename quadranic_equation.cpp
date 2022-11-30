#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
double a,b,c,x1,x2;
double delta = (b*b) -(4*a*c);

float kok_top(float a, float b, float c){

    if (delta > 0){
        x1 = (-b+sqrt(delta))/2*a;
        x2 = (-b-sqrt(delta))/2*a;
    return x1 + x2;  
    }
    else if (delta == 0){
        x1 = x2 = -b/(2*a);
        return x1+x1;
    }
}
float kok_carp(float a, float b, float c){
    if (delta > 0){
        x1 = (-b+sqrt(delta))/2*a;
        x2 = (-b-sqrt(delta))/2*a;
    return x1 * x2;  
    }
    else if (delta == 0){
        x1 = x2 = -b/(2*a);
        return x1*x1;
    }
}

int main(int argc, char **argv){

    cout << "Input 'a' value for equation>> ";
    cin >> a;
    cout << "Input 'b' value for equation>> ";
    cin >> b;
    cout << "Input 'c' value for equation>> ";
    cin >> c;
    x1 = (-b+sqrt(delta))/2*a;
    x2 = (-b-sqrt(delta))/2*a;

    if (delta>0 || delta == 0)
    {
    cout << "\nDelta value of equation>> " << delta << endl;
    cout << "\nTotal roots of quadratic equation>> " << kok_top(a,b,c) << endl;
    cout << "\nProduct root value of equation>> " << kok_carp(a,b,c) << endl;     
    }
    
    else
    {
    puts("There are no root values for this equation so equation doesn't cross x axis.");
    cout << "\n\nDelta value of equation>> " << delta << endl;
    }

    puts("\n\nPress a button for quit.");getch();
}