#include <iostream>

using namespace std;

struct LinkedListItem
{
	int value;
	LinkedListItem* next;

	LinkedListItem()
	{
		value = 0;
		next = NULL;
	}

	void put(int x)
	{
		if (next != NULL) // Nếu chưa phải phần tử cuối cùng
		{
			next->put(x); // Đẩy việc chèn phần tử cho phần tử tiếp theo
			return;
		}
		next = new LinkedListItem();
		next->value = x;
	}

	void printAll()
	{
		cout << value << '\n';
		if (next != NULL)
			next->printAll();
	}
};

struct LinkedList
{
	LinkedListItem* firstItem;

	LinkedList()
	{
		firstItem = NULL;
	}

	void put(int x)
	{
		if (firstItem == NULL)
		{
			firstItem = new LinkedListItem();
			firstItem->value = x;
		}
		else
			firstItem->put(x);
	}

	void printAll()
	{
		if (firstItem != NULL)
			firstItem->printAll();
	}
};

int main()
{
	LinkedList list;
	list.put(1);
	list.put(2);
	list.printAll();
	list.put(5);
	list.printAll();
	return 0;
}