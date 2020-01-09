#include <iostream>

int main()
{
    int current_val = 0, val = 0;

    if(std::cin >> current_val) {
        int cnt = 1;
        while (std::cin >>val) {
            if (val == current_val) {
                cnt++;
            } else {
                std::cout << current_val << " occurs "
                        << cnt << " times " << std::endl;
                current_val = val;
                cnt = 1; 
            }
        }

        std::cout << current_val << " occurs "
                        << cnt << " times " << std::endl;
    }

    return 0;
}