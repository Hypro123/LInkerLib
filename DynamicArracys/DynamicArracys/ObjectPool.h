#pragma once

class Entity;

class ObjectPool
{
public:
	ObjectPool(int nMaxSize);
	~ObjectPool();

	Entity* Allocate();
	void DeAllocate(Entity* object);

	Entity** m_pPool;
	int m_nMaxSize;
};
