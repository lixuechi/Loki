// Subtask.h
#ifndef _SUBTASK_
#define _SUBTASK_

class Subtask
{
public:
	Subtask();
	~Subtask();

	Status GetStatus() { return m_currStatus; }
	void SetStatus(Status newStatus) { m_currStatus = newStatus; }

private:
	Status m_currStatus;
};

#endif 