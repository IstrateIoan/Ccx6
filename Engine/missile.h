#pragma once

class missile {
private: int m, n;
		
public:
	missile(int x, int y) {
		m = x;
		n = y;
		bool iscollided=false;
	}
	void drawrocket();
	void launchrocket(int m, int n);
	~missile();



};
