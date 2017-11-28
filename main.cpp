#include <iostream>
#include <assert.h>
#include "RushHours.h"

int main()
{
    Manager rh;
    assert(!rh.IsRushHour(3.00));
    assert(!rh.IsRushHour(5.00));

    rh.AddTimeSpan(2.00, 4.00);
    assert(rh.IsRushHour(3.00));
    assert(!rh.IsRushHour(5.00));

    rh.AddTimeSpan(7.00, 9.00);
    assert(rh.IsRushHour(3.00));
    assert(!rh.IsRushHour(5.00));
    assert(rh.IsRushHour(7.00));
    assert(!rh.IsRushHour(11.00));

    rh.AddTimeSpan(8.00, 12.00);
    assert(rh.IsRushHour(3.00));
    assert(!rh.IsRushHour(5.00));
    assert(rh.IsRushHour(7.00));
    assert(rh.IsRushHour(11.00));

    return 0;
}
