// SequenceNode.h
#ifndef _SEQUENCE_NODE_
#define _SEQUENCE_NODE_

#include "ControlFlowNode.h"
#include "Subtask.h"

class SequenceNode : ControlFlowNode
{
public:
	SequenceNode();
	~SequenceNode();

	Status CheckStatus();
	Status Tick(Subtask* child);

private:
	Subtask * m_listOfSubtasks;
	int m_numOfSubtasks;
};
#endif
