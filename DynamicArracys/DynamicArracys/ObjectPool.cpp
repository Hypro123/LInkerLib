#include "ObjectPool.h"
#include "Entity.h"

ObjectPool::ObjectPool(int nMaxSize)
{
	m_nMaxSize = nMaxSize;
	m_pPool = new Entity*[nMaxSize];
	for (int i = 0; i < nMaxSize; ++i)
	{
		m_pPool[i] = new Entity();
	}
}

ObjectPool::~ObjectPool()
{
	for(int i = 0; i < m_nMaxSize; ++i)
	{
		delete m_pPool[i];
	}
	delete[] m_pPool;
}

Entity* ObjectPool::Allocate()
{
	for (int i = 0; i < m_nMaxSize; ++i)
	{
		if(m_pPool[i]->GetActive())
		{
			m_pPool[i]->setActive(true);
			return m_pPool[i];
		}
	}
	return nullptr;
}

void ObjectPool::DeAllocate(Entity* object)
{
	object->setActive(false);
}