#include <iostream>
using namespace std;
class Distance {
public:
int feet, inch;
Distance(int f, int i)
{
this->feet = f;
this->inch = i;
}
void operator-()
{
feet--;
inch--;
DYPCET-CSE OOC 2026-27
44
cout << "\nFeet & Inches(Decrement): " <<
feet << "'" << inch;
}
};
int main()
{
Distance d1(8, 9);
-d1;
return 0;
}
