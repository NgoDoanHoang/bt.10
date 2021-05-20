#include<iostream>

using namespace std;

struct point
{
	double x,y;
};
void tt(point a)
{
	cout<<&a;
}
void tc(point &a)
{
	cout<<&a;
}
int main()
{
	point a;
	cout<<&a<<endl;
	tt(a);
	cout<<"\n";
	tc(a);

}
// chi khi truyen tham chieu dia chi giong voi doi so
