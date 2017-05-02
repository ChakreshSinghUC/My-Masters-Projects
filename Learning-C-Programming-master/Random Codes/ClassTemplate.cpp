//ClassTemplate.cpp
#include<iostream>

using namespace std;

template <typename T>
T square (T x)
{
	return x*x; 
}
template <typename T>
class BoVector{
	T arr[1000];
	int size;
public: 
	BoVector():size(0){} //Constructor
	
	void push (T x) {
		arr[size] = x; 
		size++;
	}
	void print() const{ 
		for(int i =0; i<size;i++)
		{
			cout<<arr[i]<<endl;
		}
	}

	T get(int i) const {
		return arr[i];
	}
	int getSize() const{ 
		return size;
	}
};

template<typename T>
BoVector<T> operator*(const BoVector<T>& rhs1, BoVector<T>& rhs2)
{
	BoVector<T> ret;
	for (int i = 0; i< rhs1.getSize(); i++){
		ret.push(rhs1.get(i)*rhs2.get(i));
	}
	return ret;
}

int main()
{
	BoVector<int> bv; 
	//class templates should have data type
	//function templates can infer the datatype from the parameter
	bv.push(2);
	bv.push(4);
	bv.push(0);
	//bv.print();

	bv = square(bv);

	bv.print();

}