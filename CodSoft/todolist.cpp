#include <iostream>
#include<vector>

using namespace std;

class Task {
public:
    string name;
    bool completed;

    Task(string task_name) {
        name = task_name;
        completed = false;
    }
};

class ToDoList {
private:
    vector<Task>tasks;

public:
    void add_task(string task_name) {
        tasks.push_back(Task(task_name));
    }

    void view_tasks() {
        if (tasks.empty()) {
            cout << "There is no tasks in the to-do list" << endl;
            return;
        }
        
        for (int i = 0; i < tasks.size(); i++) {
            string status = tasks[i].completed ? "Completed" : "Pending";
            cout << i + 1 << ". " << tasks[i].name << " - " << status << endl;
        }
    }

    void mark_completed(int task_index) {
        if (task_index >= 0 && task_index < tasks.size()) {
            tasks[task_index].completed = true;
            cout << "Task " << task_index + 1 << " marked as completed." << endl;
        } else {
            cout << "Invalid task index." << endl;
        }
    }

    void remove_task(int task_index) {
        if (task_index >= 0 && task_index < tasks.size()) {
            cout << "Task '" << tasks[task_index].name << "' removed." << endl;
            tasks.erase(tasks.begin() + task_index);
        } else {
            cout << "Invalid task index." << endl;
        }
    }
};

void show_menu() {
    cout << "To-Do List Manager" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. View Tasks" << endl;
    cout << "3. Mark Task as Completed" << endl;
    cout << "4. Remove Task" << endl;
    cout << "5. Exit" << endl;
}

int main() {
    ToDoList todo_list;
    int choice;

    while (true) {
        show_menu();
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        cin.ignore();  // to ignore the newline left in the input buffer

        if (choice == 1) {
            string task_name;
            cout << "Enter the task name: ";
            getline(cin, task_name);
            todo_list.add_task(task_name);

        } else if (choice == 2) {
            todo_list.view_tasks();
            int task_view;
            cout<<"Enter the number of view:";
            cin>>task_view;
            cin.ignore();
    

        } else if (choice == 3) {
            todo_list.view_tasks();
            int task_index;
            cout << "Enter the task number to mark as completed: ";
            cin >> task_index;
            cin.ignore();
            todo_list.mark_completed(task_index - 1);

        } else if (choice == 4) {
            todo_list.view_tasks();
            int task_index;
            cout << "Enter the task number to remove: ";
            cin >> task_index;
            cin.ignore();
            todo_list.remove_task(task_index - 1);

        } else if (choice == 5) {
            cout << "Exiting the To-Do List Manager." << endl;
            break;

        } else {
            cout << "Invalid choice. Please select between 1 and 5." << endl;
        }
    }

    return 0;
}