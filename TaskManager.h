#pragma once
#include "Task.h"
#include <vector>

class TaskManager {
	std::vector<Task> tasks;

public:

	void addTask(int, std::string, std::string, int, std::string);
};

void TaskManager::addTask(int taskID, std::string taskTitle, std::string taskDescr, int taskPrty, std::string taskStatus) {
	Task newTask(taskID, taskTitle, taskDescr, taskPrty, taskStatus);
	tasks.push_back(newTask);
}


