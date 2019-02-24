// ControlFlowNode.h
#ifndef _CONTROL_FLOW_NODE_
#define _CONTROL_FLOW_NODE_

enum Status
{
	Success,
	Running,
	Failure,
};

class ControlFlowNode
{
public:
	ControlFlowNode();
	~ControlFlowNode();
	virtual Status CheckStatus();
	virtual Status Tick(Subtask* child);
};
#endif