// https://www.codechef.com/problems/VACCINE1

#include <iostream>

using namespace std;

int main() {
    int D1, V1, D2, V2, P, totalV = 0, day = 0;
    cin >> D1 >> V1 >> D2 >> V2 >> P;

    while((P - totalV) > 0) {

        day++;

        if (day >= D1)  totalV += V1;

        if (day >= D2)  totalV += V2;
        
    }

    cout << day;

    return 0;
}
