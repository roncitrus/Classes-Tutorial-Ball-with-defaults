#include <iostream>
using namespace std;

class Ball
{
public:

	Ball(const string &colour = "Black" , double radius = 10.0) {
		m_colour = colour;
		m_radius = radius;
	}

	Ball(double radius) {
		m_radius = radius;
	}

	void print() {
		cout << "Colour: " << m_colour << ", Radius: " << m_radius << endl;
	}
private:
	string m_colour = "Black";
	double m_radius = 10.0;
};


int main()
{
	Ball def{};
	def.print();

	Ball blue{ "blue" };
	blue.print();

	Ball twenty{ 20.0 };
	twenty.print();

	Ball blueTwenty{ "blue", 20.0 };
	blueTwenty.print();

	return 0;
}