#include <iostream>

using namespace std;

template <class T>
void print()
{
	T a;
	a.print()
}

class Krug
{
protected:
	int rad_;
public:
	Krug(int rad) :rad_(rad)
	{
	}

	Krug() :rad_(0)
	{
	}

	void print ()
	{
		cout << rad_ << endl;
	}
	~Krug()
	{
	}
};

class Ellipse : public Krug
{
protected:
     int rad2_;
public:

	Ellipse() : rad2_(0), Krug(0)
	{
	}

	Ellipse(int rad1, int rad2) :Krug(rad1), rad2_(rad2) 
	{
	}

	void print ()
	{
		Krug::print();
	    cout << rad2_ << endl;
	}

	~Ellipse()
	{
	}

};
