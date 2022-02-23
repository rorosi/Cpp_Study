#ifndef STOCK
#define STOCK
#include <iostream>

using namespace std;

class Stock
{
private:
	string name;
	int shares;
	float share_val;
	double total_val;
	void set_total() { total_val = shares * share_val; }
	/*
	private
	비공개 멤버
	클래스 내에서만 접근가능
	*/
public:
	void acquire(string, int, float);
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();

	Stock();
	~Stock();
	/*
	public
	공개 멤버
	외부에서도 접근 가능
	*/
};

#endif // !STOCK
