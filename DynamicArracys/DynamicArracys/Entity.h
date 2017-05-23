#pragma once
class Entity
{
public:
	Entity();
	~Entity();

	void setActive(bool bActive);
	bool GetActive();

private:
	bool m_bActive;
};

