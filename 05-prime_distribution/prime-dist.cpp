#include <iostream>
#include <cmath>


int main(int argc, char* argv[])
{
    int width = atoi(argv[1]);
    std::cout << "Width = " << width << '\n';
    int height = atoi(argv[2]);
    std::cout << "Height = " << height << '\n';
    char primechar {'P'};
    if (argc >= 4)
    {
        primechar = argv[3][0];
    }
    std::cout << "Prime-char = " << primechar << '\n';
    char nonprimechar {'-'};
    if (argc >= 5)
    {
        nonprimechar = argv[4][0];
    }
    std::cout << "non-Prime-char = " << nonprimechar << '\n';

    for (int i=1; i <= height; ++i)
       {        
          for (int j=1; j <= width; ++j)
          {
            //all prime numbers > 3, can be expresed as 6n+1 or 6n-1, n>=1
            if ((((i-1)*width+j)==1) | (((i-1)*width+j)>3 and ((i-1)*width+j-1)%6!=0 and ((i-1)*width+j+1)%6!=0 ))
            {
                std::cout << nonprimechar ;
            }
            else
            {
                //some of 6n+-1 numbers are not prime, and we can check them by dividing them to 2 upto their squar-root!
                bool isprime=true;
                for (int k=2; k*k <= ((i-1)*width+j) ; k++)
                {
                    if (((i-1)*width+j) % k == 0)
                    {
                       isprime=false ;
                    }
                }
                if (!isprime)
                {
                    std::cout << nonprimechar ;
                }
                else
                {
                    std::cout << primechar ;
                }
            }
          }
          std::cout << "    " << (i-1)*width+1 << "...." << (i)*width ;
          std::cout << '\n';

    }
    /* code */
    return 0;
}