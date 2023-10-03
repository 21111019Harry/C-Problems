#include<iostream>

using namespace std;

//accept 2 values from user and swap the contains.


//genric aproch
template<class T>
void Swap(T &no1, T &no2)//he call by reference ahe
{
	T temp;//ith aapn temp initilize kruch shkt nahi bcz kashani initilize kral jr 0 deila tr user int ch deil he fix nahi or jr 0.0 initilize kel tr te pn fix nahi mhnun tyala T aadhi lavla mhnjhe he pn direct compail time la klel.yachyavrn klal ki tumhi template variable initilize kruch shkt nahi.bcz user kay deil te aapnlyala mahitch nahi
	temp = no1;
	no1 = no2;
	no2 = temp;
}
int main()
{
	int x = 20, y = 50;
//	float x = 20.2, y = 10.3;//ya 3 line madhla 1 call chalu theva
//	double x = 30.33, y = 10.44;
	Swap(x,y);
	cout<<x<<"\n";
	cout<<y;

	return 0;
}

