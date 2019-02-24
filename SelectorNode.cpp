// SelectorNode.cpp
#include "ControlFlowNode.h"
#include "SelectorNode.h"

Status SelectorNode::CheckStatus()
{
	for (int i = 0; i < m_numOfSubtasks; i++)
	{
		Status childStatus = Tick(m_listOfSubtasks + i);
		if (childStatus == Status::Running)
		{
			return Status::Running;
		}
		else if (childStatus == Status::Success)
		{
			return Status::Success;
		}
	}
	return Status::Failure;
}

Status SelectorNode::Tick(Subtask* child)
{
	return child->GetStatus();
}