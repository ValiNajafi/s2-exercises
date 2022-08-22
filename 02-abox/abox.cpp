#include <iostream>

int main(int argc,  char const *argv[] )
{
    int height=atoi(argv[1]);
    std::cout << "Height = " << height << std::endl;
    int width=atoi(argv[2]);
    std::cout << "Width = " << width << std::endl;
    char ch {argv[3][0]};
    std::cout << "char = " << ch << std::endl;

    for (int i=1; i <= height; ++i)
    {
          for (int j=1; j <= width; ++j)
          {
            if (i>1 and i<height and j>1 and j<width)
            {
                std::cout << ' ' ;
            }
            else
            {
                std::cout << ch ;
            }
          }
          std::cout << std::endl;
    }
    /* code */
    return 0;
}
