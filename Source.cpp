#include <iostream>
#include <string>

std::string generateText() {
    return "Hello from C++!";
}

int main() {
    std::string text = generateText();
    std::cout << "Generated text: " << text << std::endl;
    return 0;
}
