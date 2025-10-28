
#pragma once

#include "clsMyQueueArr.h"
#include "clsDynamicArray.h"

using namespace std;

template <class T>

class clsMyStackArr : public clsMyQueueArr <T>
{


public:

	void push(T Item)
	{
		clsMyStackArr <T>::_MyList.InsertAtBeginning(Item);
	}

	T bottom()
	{
		return clsMyStackArr <T>::back();
	}

	T Top()
	{
		return clsMyStackArr<T>::front();
	}

	


};

