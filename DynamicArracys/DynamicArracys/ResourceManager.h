#pragma once
#include "DynamicArray.h"
#include "Resource.h"

template
<typename T>
class ResourceManager
{
public:
	ResourceManager() {};
	~ResourceManager() 
	{
		UnloadAllResources();
	};

	T* LoadResource(char* szFileName)
	{
		//CHeck if resource is loaded
		for(int i = 0; i < m_ResourceList.Size(); ++i)
		{
			if(strcmp(m_ResourceList[i]->m_szFileName, szFileName) == 0)
			{
				return m_ResourceList[i]->m_Data;
			}
		}
		//Resource is not loaded so load it
		Resource<T>* pResource = new Resource<T>(szFileName);
		m_ResourceList.PushBack(pResource);
		return pResource->m_Data;
	}

	void UnloadAllResources()
	{
		for(int i = 0; i < m_ResourceList.Size(); ++i)
		{
			delete m_ResourceList[i];
		}

		m_ResourceList.clear();
	}

	DynamicArray<Resource<T>*> m_ResourceList;
};

