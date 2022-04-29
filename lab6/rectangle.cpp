#include "rectangle.h"

Rectangle::Rectangle() : a(0.0, 0.0), b(0.0, 0.0), c(0.0, 0.0), d(0.0, 0.0), len1(0), len2(0), square(0.0)
{
};

Rectangle& Rectangle::operator= (Rectangle rectangle)
{
	a = rectangle.a;
	b = rectangle.b;
	c = rectangle.c;
	d = rectangle.d;
	len1 = rectangle.len1;
	len2 = rectangle.len2;
	square = rectangle.square;
	return rectangle;
};

double Rectangle::Square()
{
	return  square;
}

void Rectangle::Print(std::ostream& os)
{
	std::cout << "Rectangle: " << a << " " << b << " " << c << " " << d << endl;
}

size_t Rectangle::VertexesNumber()
{
	return 4;
}
Rectangle::Rectangle(std::istream& is){
	is >> a >> b >> c >> d;
	len1 = dist(a, b);
	len2 = dist(b, c);
	square = len1 * len2;
}

std::istream& operator >>(std::istream& is, Rectangle& rectangle){
	is >> rectangle.a >> rectangle.b >> rectangle.c >> rectangle.d;
	return is;
};

std::ostream& operator <<(std::ostream& os, Rectangle rectangle){
	os << rectangle.a << " " << rectangle.b << " " << rectangle.c << " " << rectangle.d << "\n";
	return os;
};

bool Rectangle::operator== (Rectangle rectangle)
{
	if ((a == rectangle.a) && (b == rectangle.b) && (c == rectangle.c) && (d == rectangle.d))
	{
		return true;
	}
	return false;
};
Rectangle::~Rectangle()
{
}