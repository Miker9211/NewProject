#include "header_File.h"

#include <iostream>

using std::cout;

void OuterFunction(int i)
{
    InnerFunction(i);
}
void InnerFunction(int i)
{
    cout << "The Value of Interger i is: " << i << "\n";
}

int main(){

    int a = 5;
    OuterFunction(a);
}