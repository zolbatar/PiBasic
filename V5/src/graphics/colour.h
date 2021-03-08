#pragma once

class Colour {
public:
	Colour()
	{
		r = 0;
		g = 0;
		b = 0;
		a = 255;
		encode_hex();
	};
	Colour(const Colour& c)
		: r(c.r)
		, g(c.g)
		, b(c.b)
		, a(c.a) {
		encode_hex();
	};
	Colour(BYTE r, BYTE g, BYTE b)
		: r(r)
		, g(g)
		, b(b) {
		a = 255;
		encode_hex();
	};
	UINT32 get_hex() {
		return encoded_hex;
	}
	void set_rgb(BYTE r, BYTE g, BYTE b) {
		this->r = r;
		this->g = g;
		this->b = b;
		this->a = 255;
		encode_hex();
	}
	BYTE get_r() { return r; }
	BYTE get_g() { return g; }
	BYTE get_b() { return b; }
	BYTE get_a() { return a; }
	void set_a(BYTE a) {
		this->a = a;
	}
private:
	BYTE r;
	BYTE g;
	BYTE b;
	BYTE a;

	UINT32 encoded_hex;

	void encode_hex() {
#ifdef RISCOS
		encoded_hex = (b << 16) + (g << 8) + r;
#else
		encoded_hex = (a << 24) + (r << 16) + (g << 8) + b;
#endif
}
};

