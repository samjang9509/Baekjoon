#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;
	if (n == 1)
    {
	    std::cout << "*"<<"\n";
    }
	else
	{
		for (int i = 1; i <= 2 * n; i++)
		{
			if (i % 2 != 0)
			{
				if (n % 2 != 0)
				{
					for (int j = 0; j < n / 2 + 1; j++)
					{
						std::cout << "*";
                        std::cout << " ";					
                    }
				}
				else
				{
					for (int j = 0; j < n / 2; j++)
					{
						std::cout << "*";
                        std::cout << " ";
					}
				}
			}
			else
			{
				if (n % 2 == 0)
				{
					for (int j = 1; j < n / 2 + 1; j++)
					{
						std::cout << " ";
                        std::cout << "*";
					}
				}
				else
				{
					for (int j = 0; j < n / 2; j++)
					{
						std::cout << " ";
                        std::cout << "*";
					}
				}
			}
			std::cout << "\n";
		}
	}
	return 0;
}