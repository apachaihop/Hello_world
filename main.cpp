#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    bool is_good = cout.good();
    return is_good ? EXIT_SUCCESS : EXIT_FAILURE;
}
