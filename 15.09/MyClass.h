#pragma once
	class MyClass
{

	int date;


public:
	MyClass(int dateN) { date = dateN; }
	int Getdate()const;
	void Inputdate();
	void Outputdate();
	void Setdate(int a);
	void increase(int d) {
		date + 1;
	};
	void decrease(int d) {
		date - 1;
	};


};

