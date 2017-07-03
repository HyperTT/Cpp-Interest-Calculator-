#include <cmath>
using namespace std;

float future_value(float current, float interest, float years)
{

    float future;//future value
    //current * (rate + 1)time
    future = current * pow(interest + 1.0, years);
    return future;
}
