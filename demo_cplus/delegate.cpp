#include "pch.h"
#include <iostream>



void CEventSource::operator+= (FnType pFn)
{
	(*this) += MakeDelegate(pFn);
}

void CEventSource::operator-= (CDelegateBase& d)
{
	for (int i = 0; i < m_aDelegates.GetSize(); i++) {
		CDelegateBase* pObject = static_cast<CDelegateBase*>(m_aDelegates[i]);
		if (pObject && pObject->Equals(d)) {
			delete pObject;
			m_aDelegates.RemoveAt(i);
			return;
		}
	}
}
void CEventSource::operator-= (FnType pFn)
{
	(*this) -= MakeDelegate(pFn);
}

bool CEventSource::operator() (void* param)
{
	for (int i = 0; i < m_aDelegates.GetSize(); i++) {
		CDelegateBase* pObject = static_cast<CDelegateBase*>(m_aDelegates[i]);
		if (pObject && !(*pObject)(param)) return false;
	}
	return true;
}