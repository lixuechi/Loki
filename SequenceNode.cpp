// SequenceNode.cpp
#include "ControlFlowNode.h"
#include "SequenceNode.h"

Status SequenceNode::CheckStatus()
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
			return Status::Failure;
		}
	}
	return Status::Success;
}

Status SequenceNode::Tick(Subtask* child)
{
	return child->GetStatus();
}