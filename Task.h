#pragma once
#include <iostream>
#include <string>
#include <stdexcept>


class Task {
	int taskID;
	std::string taskTitle;
	std::string taskDescr;
	int taskPrty;
	std::string taskStatus;

public:
	Task();
	Task(int _taskID, std::string _taskTitle = "Untitled", std::string _taskDescr = "Description", int _taskPrty = 1, std::string _taskStatus = "Pending");
	int getTaskID() const { return taskID; };
	std::string getTaskTitle() const { return taskTitle; };
	std::string getTaskDesc() const { return taskDescr; };
	int getTaskPrty() const { return taskPrty; };
	std::string getTaskStatus() const { return taskStatus; };

};

Task::Task() {
	taskID = 0;
	taskTitle = "Untitled";
	taskDescr = "Description";
	taskPrty = 1;
	taskStatus = "Pending"

};

Task::Task(int _taskID, std::string _taskTitle, std::string _taskDescr, int _taskPrty, std::string _taskStatus) {
	if (_taskID < 0) {
		throw std::invalid_argument("Task ID must be non-negative");
	}
	if (_taskPrty < 0 || _taskPrty > 5) {
		throw std::invalid_argument("Task priority must range between 1 - 5");
	}
	if 

	taskID = _taskID;
	taskTitle = _taskTitle;
	taskDescr = _taskDescr;
	taskPrty = _taskPrty;
	taskStatus = _taskStatus;
};

