// SelectorNode.h
#ifndef _SELECTOR_NODE_
#define _SELECTOR_NODE_

#include "ControlFlowNode.h"
#include "Subtask.h"
class SelectorNode : ControlFlowNode
{
public:
	SelectorNode();
	~SelectorNode();

	Status CheckStatus();
	Status Tick(Subtask* child);

private:
	Subtask* m_listOfSubtasks;
	int m_numOfSubtasks;
};
#endif