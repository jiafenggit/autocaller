#include "./EventReader/iexecuter.h"
#include "SimpleTaskManager.h"
#include <map>
#include <vector>

class CallViewer: public ExecuterInterface
{
	
	std::vector<TaskManagerInterface*> managers;
	int FinishCallHandler(const ParamMap& data);
	int AnswerCallHandler(const ParamMap& data,std::string eventname);
	int HangupCallHandler(const ParamMap& data);
	public:
		CallViewer();
		~CallViewer();
		void AddManager(TaskManagerInterface* manager){managers.push_back(manager);}
		void PrintOperators();
		void PrintCalls();
		void PrintNumbers();
		virtual int Execute(ParamMap& data);
};