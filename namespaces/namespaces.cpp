#include <iostream>

namespace first {
    int x = 0;
}

namespace second {
    int x = 0;
}

int main() {

    int x = 4;

    std::cout << "====> " << x << std::endl;

    std::cout << "====> " << second::x << std::endl;
    std::cout << "====> " << first::x << std::endl;

    return 0;
}
