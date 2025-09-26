
#include <iostream>
#include <string> // so this is why they don't need to add this stuff
#include <vector>

namespace first {
    int x = 5;
}

namespace second {
    int x = 6;
}

int main()
{
    using namespace first;
    using std::cout;
    //int x = 1;
    cout << x << '\n'; // now we don't need the std before cout
    std::cout << first::x << '\n';
    //std::cout << first::x + "\n"; // so this is why you use the << instead of just adding the \n
    std::cout << second::x;
    return 0;
}
