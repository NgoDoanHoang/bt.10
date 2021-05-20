#include<iostream>
using namespace std;
struct XXX
{
	char *name;
};
struct YYY
{
	int score;
};
int main()
{
	XXX array[2];

	array[1].name = "NDH";

	cout<<array[1].name;

	return 0;
}

// khi sao chep to mot struct khac ct ko chay
// sao chep duoc toi mang
