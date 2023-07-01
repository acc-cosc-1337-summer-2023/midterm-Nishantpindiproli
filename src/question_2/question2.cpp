#include "question2.h"
#include <sstream>
bool test_config()
{
    return true;

}
std::string decimal_to_hex(int value) {
    std::stringstream stream;
    stream << std::hex << value;
    return stream.str();