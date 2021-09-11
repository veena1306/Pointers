#include <iostream>
#include <string>

struct Bla
{
	char a_;
	int b_;
	int c_;
	std::string d_;
	char e_;
};

int main()
{
	Bla b1;
	b1.a_ = 1;
	Bla* bp = &b1;
	(*bp).a_ = 6;
	bp->a_ = 6;

	bp->d_ = "abc";
	return 0;
}
