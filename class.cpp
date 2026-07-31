#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

float sum(float a, float b)
{
    return a + b;
}

int main()
{
    cout << "Sum of 2 integers: " << sum(10, 20) << endl;
    cout << "Sum of 3 integers: " << sum(10, 20, 30) << endl;
    cout << "Sum of 2 float numbers: " << sum(10.5f, 20.5f) << endl;

    return 0;
}