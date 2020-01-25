/*  Source file for NumberTile class.
 *
 * Also does not contain an operator for pair addition.
 *
 * Method implementations should be added to the same level as the existing
 * ones.
 * */
#include "numbertile.hh"
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;


NumberTile::NumberTile(int value)
    :value_(value)
{}
void NumberTile::print(int width)
{
    // setw() sets the width of next printable to given amount, usually
    // by adding spaces in front.
    cout << "|" << setw(width - 1) << value_;
}

int NumberTile::get_value()
{
    return value_;
}

bool NumberTile::setValue(int value)
{
    if (value_ == 0){
    value_ = value;
    return true;
    }
    return false;
}


