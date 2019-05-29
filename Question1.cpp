#include<iostream>
using namespace std;
template<typename T>
class Queue
{
	int f;
	int b;
	int size;
	T *aptr;
Public:
	Queue(int M)
	{
		if (M <= 0)
		{
			size = 10;
		}

		else
		{
			size = s;
		}
		f = 0;
		b = 0;
		aptr = new T[size];
	}
	~queue()
	{
		delete[]aptr;
	}
	bool isEmpty()
	{
		if (b == f)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool isFull()
	{
		if (b == size)
		{
			return true;
		}
		else
		{
			return 
		}

	}
	void enQueue(T m)
	{
		if (!isFull())
		{
			cout << "Enqueueing" << m << endl;
			aptr[b] = m;
			++b;
		}
		else
		{
			cout << "QueuEe" << m << "Fail......Queuw is Full" << endl;
		}
	}
	T deQueue()
	{
		if (!isEmpty())
		{
			T temp = arr[f];
			if (b == 1)
			{
				b = 0;
			}
			else
			{
				for (int i = f; i < b; ++i)
				{
					aptr[i] = aptr[i + 1];
				}
				--b;
				return temp;
			}
			cout << "DeQueue Fail......Queue is Empty......Returning junk value.." << endl;
		}
		return aptr[f];

	}
	void print()
	{
		cout << "Printing Queue\t";
		for (int i = f; i < b; i++)
		{
			cout << aptr[i] << "\t";
		}
		cout << endl;
	}

};
int main()
{
	Queue<int>q();

}