#pragma once

class Colour {
public:
	Colour()
	{
		r = 0;
		g = 0;
		b = 0;
		encode_hex();
	};
	Colour(const Colour& c)
		: r(c.r)
		, g(c.g)
		, b(c.b) {
		encode_hex();
	};
	Colour(BYTE r, BYTE g, BYTE b)
		: r(r)
		, g(g)
		, b(b) {
		encode_hex();
	};
	UINT32 get_hex() {
		return encoded_hex;
	}
	void set_rgb(BYTE r, BYTE g, BYTE b) {
		this->r = r;
		this->g = g;
		this->b = b;
		encode_hex();
	}
	BYTE get_r() { return r; }
	BYTE get_g() { return g; }
	BYTE get_b() { return b; }
private:
	BYTE r;
	BYTE g;
	BYTE b;
	UINT32 encoded_hex;

	void encode_hex() {
#ifdef RISCOS
		encoded_hex = (b << 16) + (g << 8) + r;
#else
		encoded_hex = (r << 16) + (g << 8) + b;
#endif
	}
};

