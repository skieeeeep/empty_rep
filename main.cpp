#include <iostream>
bool isPyth(unsigned, unsigned, unsigned);

int main()
{
using u_t=unsigned;
u_t a = 0, b=0, c=0;
std::cin >> c >> b;
size_t count = 0;
std::cin >> a;

while (std::cin >>a){
count += isPyth(a,b,c) ? 1 : 0;
c = b; b = a;
}
if (std::cin.eof()){
std::cout << count;
std::cout << "\n";
}

else if (std::cin.fail()){
std::cerr << "Incorrect input\n";
return 1;
}
}

bool isPyth(unsigned a, unsigned b, unsigned c){
bool p = a*a == b*b + c*c;
p = p|| b*b == a*a + c*c;
p = p|| c*c == a*a + b*b;

if( a > 0 && b > UINT_MAX / a) {
std::cerr << "Overflow occured\n";
return 2;
}
if ( b > 0 && b > UINT_MAX / b) {
std::cerr << "Overflow occured\n";
return 2;
}
if (c > 0 && c > UINT_MAX /c) {
std::cerr << "Overflow occured\n";
return 2;
}
if (p > UINT_MAX){
std::cerr << "Overflow occured\n";
return 2;
}
return p;
}
