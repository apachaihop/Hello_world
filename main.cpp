#include <iostream>

int main()
{
    using namespace std;
    cout << "Hello World!" << endl;
    bool is_good = cout.good();
    int  result  = is_good ? EXIT_SUCCESS : EXIT_FAILURE;
    return result;
}
