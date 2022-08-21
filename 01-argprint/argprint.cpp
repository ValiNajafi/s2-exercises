#include <iostream>

int main(int argc, char const *argv[])
{
   for (int i=0; i<argc; i++)
    {
        std::cout << "Arg[" << i << "] = " << argv[i] << "\n";
    };/* code */
    return 0;
}
