# Area of a Circle
### [*Problem Link*](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E)


<br> 

### Code
```c++
#include <iostream>
#include <iomanip>  // for setprecision

int main() {
    double R;
    const double PI = 3.141592653;  // Exact value of Pi as per the problem statement

    // Input the value of R
    std::cin >> R;

    // Calculate the area of the circle
    double area = PI * R * R;

    // Output the area with exactly 9 decimal places
    std::cout << std::fixed << std::setprecision(9) << area << std::endl;

    return 0;
}
```