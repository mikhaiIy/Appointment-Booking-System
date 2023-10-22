#include <iostream>
#include <string>
#include <fstream>
#include<sstream>

using namespace std;

class Appointment { 
    public:
		string name;
	    string matric_id;
	    string course;
	    string age;
	    Appointment* next;
};

class AppointmentList {
    private:
        Appointment* head;
    public:
        AppointmentList() {
            head = NULL;
        }
        
        bool isEmpty()
        {
        	return head == NULL;
		}

        void displayAppointments() {
            Appointment* current = head;
            if(isEmpty())
            {
            	system("cls");
            	cout<<"\t\tLIST OF APPOINTMENTS\t\t"<<endl;
		    	for(int i = 0; i<60; i++)
				{
					cout<<"=";
				}
            	cout<<"\nThere are no any appointments booking in the list. Thank you."<<endl;
            	cout<<endl;
				system("pause");
            	system("cls");
			}
			else
			{
				system("cls");
				cout<<"\t\tLIST OF APPOINTMENTS\t\t"<<endl;
		    	for(int i = 0; i<60; i++)
				{
					cout<<"=";
				}
            	while(current != NULL) {
                cout << "\n\nName: " << current->name << endl;
                cout << "Age : " << current->age << endl;
                cout << "Matric ID: " << current->matric_id << endl;
                cout << "Course: " << current->course << endl;
	                for(int i = 0; i<60; i++)
					{
						cout<<"-";
					}
                current = current->next;
            	}
            	cout<<endl;
            	for(int i = 0; i<60; i++)
				{
					cout<<"=";
				}
            	cout<<endl;
				system("pause");
			}
            
        }

        void bookAppointment() { //INSERTION
        	system("cls");
        	cout<<"\t\tBOOK YOUR APPOINTMENTS\t\t"<<endl;
        	for(int i = 0; i<60; i++)
			{
				cout<<"=";
			}
			
            string name, matric_id, course,age;
            
            cout << "\n\n\t\tEnter name: ";
            getline(cin, name);
            cout << "\t\tEnter age: ";
            getline(cin, age);
            cout << "\t\tEnter matric ID: ";
            getline(cin, matric_id);
            cout << "\t\tEnter course: ";
            getline(cin, course);


            Appointment* newAppointment = new Appointment;
            newAppointment->name = name;
            newAppointment->age = age;
            newAppointment->matric_id = matric_id;
            newAppointment->course = course;
            newAppointment->next = head;
            head = newAppointment;
            
            cout<<"\n\tYOUR APPOINTMENT IS IMPORTANT FOR US. THANK YOU\n"<<endl;
            for(int i = 0; i<60; i++)
			{
				cout<<"=";
			}
			cout<<endl;
            system("pause");
            system("cls");
        }
        
        void namesortDescAppointments() {
		    Appointment* current = head;
		    Appointment* dummyHead = new Appointment;
		    Appointment* dummyTail = dummyHead;
		    dummyHead->next = NULL;
		
		    while(current != NULL) {
	        	Appointment* next = current->next;
	        	current->next = NULL;
	
	        	// Insert the current element into the dummy list
	        	Appointment* prev = dummyHead;
	        	while(prev->next != NULL && prev->next->name > current->name) {
	            	prev = prev->next;
	        	}
	
	        	current->next = prev->next;
	        	prev->next = current;
	
	        	current = next;
	    	}
	
	    	head = dummyHead->next;
	
		    // Display the sorted list
		    if(isEmpty()) {
		        system("cls");
		        cout << "\t\tLIST OF APPOINTMENTS\t\t" << endl;
		        for(int i = 0; i<60; i++) {
		            cout << "=";
		        }
		        cout << "\nThere are no any appointments booking in the list. Thank you." << endl;
		        cout << endl;
		        system("pause");
			    system("cls");
			    } 
				else {
			        system("cls");
			        cout << "\t\tSORTED LIST OF APPOINTMENTS BY NAME IN DESCENDING\t\t" << endl;
			        for(int i = 0; i<60; i++) {
		            	cout << "=";
		       		}
					current = head;
					while(current != NULL) {
					    cout << "\n\nName: " << current->name << endl;
					    cout << "Age: " << current->age << endl;
					    cout << "Matric ID: " << current->matric_id << endl;
				        cout << "Course: " << current->course << endl;
			            for(int i = 0; i<60; i++) {
			                cout << "-";
				        }
						    current = current->next;
						}
						cout << endl;
						for(int i = 0; i<60; i++) {
						    cout << "=";
						}
						cout << endl;
					    system("pause");
				}
		}
		
		void agesortDescAppointments() {
		    Appointment* current = head;
		    Appointment* dummyHead = new Appointment;
		    Appointment* dummyTail = dummyHead;
		    dummyHead->next = NULL;
		
		    while(current != NULL) {
	        	Appointment* next = current->next;
	        	current->next = NULL;
	
	        	// Insert the current element into the dummy list
	        	Appointment* prev = dummyHead;
	        	while(prev->next != NULL && prev->next->age > current->age) {
	            	prev = prev->next;
	        	}
	
	        	current->next = prev->next;
	        	prev->next = current;
	
	        	current = next;
	    	}
	
	    	head = dummyHead->next;
	
		    // Display the sorted list
		    if(isEmpty()) {
		        system("cls");
		        cout << "\t\tLIST OF APPOINTMENTS\t\t" << endl;
		        for(int i = 0; i<60; i++) {
		            cout << "=";
		        }
		        cout << "\nThere are no any appointments booking in the list. Thank you." << endl;
		        cout << endl;
		        system("pause");
			    system("cls");
			    } 
				else {
			        system("cls");
			        cout << "\t\tSORTED LIST OF APPOINTMENTS BY NAME IN DESCENDING\t\t" << endl;
			        for(int i = 0; i<60; i++) {
		            	cout << "=";
		        	}
					current = head;
					while(current != NULL) {
					    cout << "\n\nName: " << current->name << endl;
					    cout << "Age: " << current->age << endl;
					    cout << "Matric ID: " << current->matric_id << endl;
				        cout << "Course: " << current->course << endl;
			            for(int i = 0; i<60; i++) {
			                cout << "-";
				        }
						    current = current->next;
						}
						cout << endl;
						for(int i = 0; i<60; i++) {
						    cout << "=";
						}
						cout << endl;
					    system("pause");
				}
		}
		
		void agesortAscAppointments() {
		    Appointment* current = head;
		    Appointment* dummyHead = new Appointment;
		    Appointment* dummyTail = dummyHead;
		    dummyHead->next = NULL;
		
		    while(current != NULL) {
		        Appointment* next = current->next;
		        current->next = NULL;
		
		        // Insert the current element into the dummy list
		        Appointment* prev = dummyHead;
		        Appointment* curr = dummyHead->next;
		        while (curr != NULL && curr->age < current->age) {
		            prev = curr;
		            curr = curr->next;
		        }
		        current->next = curr;
		        prev->next = current;
		
		        current = next;
		    }
		
		    head = dummyHead->next;
		
		    // Display the sorted list
		    if(isEmpty()) {
		        system("cls");
		        cout << "\t\tLIST OF APPOINTMENTS\t\t" << endl;
		        for(int i = 0; i<60; i++) {
		            cout << "=";
		        }
		        cout << "\nThere are no any appointments booking in the list. Thank you." << endl;
		        cout << endl;
		        system("pause");
		        system("cls");
		    } else {
		        system("cls");
		        cout << "\t\tSORTED LIST OF APPOINTMENTS BY NAME IN ASCENDING\t\t" << endl;
		        for(int i = 0; i<60; i++) {
		            cout << "=";
		        }
				current = head;
				while(current != NULL) {
				    cout << "\n\nName: " << current->name << endl;
				    cout << "Age: " << current->age << endl;
				    cout << "Matric ID: " << current->matric_id << endl;
			        cout << "Course: " << current->course << endl;
		            for(int i = 0; i<60; i++) {
		                cout << "-";
			        }
					    current = current->next;
					}
					cout << endl;
					for(int i = 0; i<60; i++) {
					    cout << "=";
					}
					cout << endl;
				    system("pause");
			}
		}
		
		void namesortAscAppointments() {
		    Appointment* current = head;
		    Appointment* dummyHead = new Appointment;
		    Appointment* dummyTail = dummyHead;
		    dummyHead->next = NULL;
		
		    while(current != NULL) {
		        Appointment* next = current->next;
		        current->next = NULL;
		
		        // Insert the current element into the dummy list
		        Appointment* prev = dummyHead;
		        Appointment* curr = dummyHead->next;
		        while (curr != NULL && curr->name < current->name) {
		            prev = curr;
		            curr = curr->next;
		        }
		        current->next = curr;
		        prev->next = current;
		
		        current = next;
		    }
		
		    head = dummyHead->next;
		
		    // Display the sorted list
		    if(isEmpty()) {
		        system("cls");
		        cout << "\t\tLIST OF APPOINTMENTS\t\t" << endl;
		        for(int i = 0; i<60; i++) {
		            cout << "=";
		        }
		        cout << "\nThere are no any appointments booking in the list. Thank you." << endl;
		        cout << endl;
		        system("pause");
		        system("cls");
		    } else {
		        system("cls");
		        cout << "\t\tSORTED LIST OF APPOINTMENTS BY NAME IN ASCENDING\t\t" << endl;
		        for(int i = 0; i<60; i++) {
		            cout << "=";
		        }
				current = head;
				while(current != NULL) {
				    cout << "\n\nName: " << current->name << endl;
				    cout << "Age: " << current->age << endl;
				    cout << "Matric ID: " << current->matric_id << endl;
			        cout << "Course: " << current->course << endl;
		            for(int i = 0; i<60; i++) {
		                cout << "-";
			        }
					    current = current->next;
					}
					cout << endl;
					for(int i = 0; i<60; i++) {
					    cout << "=";
					}
					cout << endl;
				    system("pause");
			}
		}
	    

        void searchAppointment() { //SEARCH THANKYOU
            string name;
            system("cls");
        	cout<<"\t\tFIND YOUR APPOINTMENT\t\t"<<endl;
        	for(int i = 0; i<60; i++)
			{
				cout<<"=";
			}
            cout << "\n\t\tEnter name to search: ";
            getline(cin, name);
            Appointment* current = head;
            while(current != NULL) {
                if(current->name == name) {
                    cout << "\n\t\tName: " << current->name << endl;
                    cout << "\t\tAge: " << current->age << endl;
                    cout << "\t\tMatric ID: " << current->matric_id << endl;
                    cout << "\t\tCourse: " << current->course << endl;
                    
                    cout<<"\n\tHERE IS WHAT WE FOUND FOR YOU. THANK YOU\n"<<endl;
		            for(int i = 0; i<60; i++)
					{
						cout<<"=";
					}
					cout<<endl;
		            system("pause");
		            system("cls");
		            break;
                }
                current = current->next;
            }
            if(current == NULL)
            {
            	cout << "\t\tAPPOINTMENT NOT FOUND." << endl;
	            cout<<endl;
	            for(int i = 0; i<60; i++)
				{
					cout<<"=";
				}
				cout<<endl;
	            system("pause");
			}
           	
        }

        void deleteAppointment() { //DELETION
		    string name;
		    system("cls");
		    cout<<"\t\tDELETE YOUR APPOINTMENT\t\t"<<endl;
		    for(int i = 0; i<60; i++)
		    {
		        cout<<"=";
		    }
		    cout << "\n\t\tEnter name to delete: ";
		    getline(cin, name);
		    // check if linked list is empty
		    if(head == NULL) {
		        cout << "\t\tAPPOINTMENT LIST IS EMPTY." << endl;
		        cout<<endl;
		        for(int i = 0; i<60; i++)
		        {
		            cout<<"=";
		        }
		        cout<<endl;
		        system("pause");
		        return;
		    }
		    // check if the first node is the one to be deleted
		    Appointment *current = head;
		    if(current != NULL && current->name == name) {
		        head = current->next;
		        delete current;
		        cout << "\n\t\tAPPOINTMENT DELETED." << endl;
		        cout<<endl;
		        for(int i = 0; i<60; i++)
		        {
		            cout<<"=";
		        }
		        cout<<endl;
		        system("pause");
		        system("CLS");
		        return;
		    }
		    // iterate through the linked list
		    Appointment *previous = NULL;
		    while(current != NULL && current->name != name) {
		        previous = current;
		        current = current->next;
		    }
		    // check if a matching node is found
		    if(current == NULL) {
		        cout << "\t\tAPPOINTMENT NOT FOUND." << endl;
		        cout<<endl;
		        for(int i = 0; i<60; i++)
		        {
		            cout<<"=";
		        }
		        cout<<endl;
		        system("pause");
		        return;
		    }
		    // delete the node
		    previous->next = current->next;
		    delete current;
		    cout << "\n\t\tAPPOINTMENT DELETED." << endl;
		    cout<<endl;
		    for(int i = 0; i<60; i++)
		    {
		        cout<<"=";
		    }
		    cout<<endl;
		    system("pause");
		    system("CLS");
		}

        
       void insertFromFile(string fileName) {
		    ifstream file;
		    file.open(fileName);
		
		    if(file.is_open()) {
		        string line;
		        while(getline(file, line)) {
		            stringstream ss(line);
		            
		            string name, matric_id, course, age;

		            getline(ss, name, ',');
					getline(ss, age, ',');
		            getline(ss, matric_id, ',');
		            getline(ss, course, ',');
		            
		            Appointment* newAppointment = new Appointment;
		            newAppointment->name = name;
		            newAppointment->age = age;
		            newAppointment->matric_id = matric_id;
		            newAppointment->course = course;
		            newAppointment->next = head;
		            head = newAppointment;
		        }
		        file.close();
		    } else {
		        cout << "Error: Unable to open file." << endl;
		    }
		}
};

int studentDisplay()
{
	int choice;
	system("cls");
    cout<<"\t\tWELCOME TO UTM COUNSELING\t\t"<<endl;
    cout<<"\t\t    << STUDENT >>     \t\t"<<endl;
    for(int i = 0; i<60; i++)
	{
		cout<<"=";
	}
    cout<<endl;
	cout<<"||                                                         ||\n";
	cout<<"||                                                         ||\n";
	cout<<"||               1- Display Appointments                   ||\n";
	cout<<"||               2- Book Appointment                       ||\n";
	cout<<"||               3- Search Appointment                     ||\n";
	cout<<"||               4- Back                                   ||\n";
	cout<<"||                                                         ||\n";
	cout<<"||                                                         ||\n";
	cout<<"||                                                         ||\n";
	for(int i = 0; i<60; i++)
	{
		cout<<"=";
	}
    cout << "\nEnter choice: ";
    cin >> choice;	

    
    return choice;
}

int counselorDisplay()
{
	int choice;
	system("cls");
    cout<<"\t\tWELCOME TO UTM COUNSELING\t\t"<<endl;
    cout<<"\t\t    << COUNSELOR >>     \t\t"<<endl;
    for(int i = 0; i<60; i++)
	{
		cout<<"=";
	}
    cout<<endl;
	cout<<"||                                                         ||\n";
	cout<<"||                                                         ||\n";
	cout<<"||               1- Display Appointments                   ||\n";
	cout<<"||               2- Sort Appointment                       ||\n";
	cout<<"||               3- Search Appointment                     ||\n";
	cout<<"||               4- Delete Appointment                     ||\n";
	cout<<"||               5- Back                                   ||\n";
	cout<<"||                                                         ||\n";
	cout<<"||                                                         ||\n";
	for(int i = 0; i<60; i++)
	{
		cout<<"=";
	}
    cout << "\nEnter choice: ";
    cin >> choice;	

    
    return choice;
}

int sortDisplay2()
{
	int choice;
	system("cls");
	cout<<"\t\tSORTING BY NAME\t\t"<<endl;
    for(int i = 0; i<60; i++)
	{
		cout<<"=";
	}
    cout<<endl;
	cout<<"||                                                         ||\n";
	cout<<"||                                                         ||\n";
	cout<<"||                                                         ||\n";
	cout<<"||               1- Ascending order                        ||\n";
	cout<<"||               2- Descending order                       ||\n";
	cout<<"||               3- Back                                   ||\n";
	cout<<"||                                                         ||\n";
	cout<<"||                                                         ||\n";
	cout<<"||                                                         ||\n";
	for(int i = 0; i<60; i++)
	{
		cout<<"=";
	}
    cout << "\nEnter choice: ";
    cin >> choice;

    
    return choice;
}

int sortDisplay3()
{
	int choice;
	system("cls");
	cout<<"\t\tSORTING BY AGE\t\t"<<endl;
    for(int i = 0; i<60; i++)
	{
		cout<<"=";
	}
    cout<<endl;
	cout<<"||                                                         ||\n";
	cout<<"||                                                         ||\n";
	cout<<"||                                                         ||\n";
	cout<<"||               1- Ascending order                        ||\n";
	cout<<"||               2- Descending order                       ||\n";
	cout<<"||               3- Back                                   ||\n";
	cout<<"||                                                         ||\n";
	cout<<"||                                                         ||\n";
	cout<<"||                                                         ||\n";
	for(int i = 0; i<60; i++)
	{
		cout<<"=";
	}
    cout << "\nEnter choice: ";
    cin >> choice;

    
    return choice;
}

int sortDisplay1()
{
	int choice;
	system("cls");
	cout<<"\t\tCHOOSE WANT TO SORT BY WHAT\t\t"<<endl;
    for(int i = 0; i<60; i++)
	{
		cout<<"=";
	}
    cout<<endl;
	cout<<"||                                                         ||\n";
	cout<<"||                                                         ||\n";
	cout<<"||                                                         ||\n";
	cout<<"||               1- Name                                   ||\n";
	cout<<"||               2- Age                                    ||\n";
	cout<<"||               3- Back                                   ||\n";
	cout<<"||                                                         ||\n";
	cout<<"||                                                         ||\n";
	cout<<"||                                                         ||\n";
	for(int i = 0; i<60; i++)
	{
		cout<<"=";
	}
    cout << "\nEnter choice: ";
    cin >> choice;	

    
    return choice;
}

int main() {
    AppointmentList list;
    list.insertFromFile("students.txt");
    int choice, choice1, choice2, choice3, choice4;
    
 
    MAINMENU:
	while(true) {
    	system("cls");
    	cout<<"\t\tWELCOME TO UTM COUNSELING\t\t"<<endl;
    	for(int i = 0; i<60; i++)
		{
			cout<<"=";
		}
        cout<<endl;
		cout<<"||                                                         ||\n";
		cout<<"||                                                         ||\n";
		cout<<"||                                                         ||\n";
		cout<<"||                     1- Student                          ||\n";
		cout<<"||                     2- Counselor                        ||\n";
		cout<<"||                     3- Exit System                      ||\n";
		cout<<"||                                                         ||\n";
		cout<<"||                                                         ||\n";
		cout<<"||                                                         ||\n";
		for(int i = 0; i<60; i++)
		{
			cout<<"=";
		}
        cout << "\nEnter choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
            	STUDENT:
            	cin.ignore();
                choice1 = studentDisplay();
                switch(choice1)
                {
                	case 1:
                		list.displayAppointments();
                		goto STUDENT;
                		break;
                	case 2:
                		cin.ignore();
                		list.bookAppointment();
                		goto STUDENT;
                		break;
                	case 3:
                		cin.ignore();
                		list.searchAppointment();
                		goto STUDENT;
                		break;
                	case 4:
                		goto MAINMENU;
                		break;
                	default:
		            	cout << "\nInvalid choice." <<endl;
		            	system("pause");
		            	goto STUDENT;
				}
                break;
            case 2:
            	COUNSELOR:
            	cin.ignore();
                choice2 = counselorDisplay();
                switch(choice2)
                {
                	case 1:
                		list.displayAppointments();
                		goto COUNSELOR;
                		break;
                	case 2:
                		SORT:
                		cin.ignore();
                		choice3 = sortDisplay1();
                		switch(choice3)
                		{
                			case 1: //NAME
                				NAME:
                				cin.ignore();
                				choice4 = sortDisplay2();
                				switch(choice4)
                				{
                					case 1:
                						list.namesortAscAppointments();
                						goto SORT;
                						break;
                					case 2:
                						list.namesortDescAppointments();
                						goto SORT;
                						break;
                					case 3:
                						goto SORT;
                						break;
                					default:
                						cout << "\nInvalid choice." <<endl;
						            	system("pause");
						            	goto NAME;
								}
								break;
                			case 2: //AGE
                				AGE:
                				cin.ignore();
                				choice4 = sortDisplay3();
                				switch(choice4)
                				{
                					case 1:
                						list.agesortAscAppointments();
                						goto SORT;
                						break;
                					case 2:
                						list.agesortDescAppointments();
                						goto SORT;
                						break;
                					case 3:
                						goto SORT;
                						break;
                					default:
                						cout << "\nInvalid choice." <<endl;
						            	system("pause");
						            	goto AGE;
								}
								break;
                			case 3:
                				goto COUNSELOR;
                				break;
                			default:
                				cout << "\nInvalid choice." <<endl;
				            	system("pause");
				            	goto SORT;
			
						}
                		goto COUNSELOR;
                		break;
                	case 3:
                		cin.ignore();
                		list.searchAppointment();
                		goto COUNSELOR;
                		break;
                	case 4:
                		cin.ignore();
                		list.deleteAppointment();
                		goto COUNSELOR;
                		break;
                	case 5:
                		goto MAINMENU;
                		break;
                	default:
		            	cout << "\nInvalid choice." <<endl;
		            	system("pause");
		            	goto COUNSELOR;
				}
                break;
            case 3:
                exit(0);
                break;
            default:
            	cout << "\nInvalid choice." <<endl;
            	system("pause");
        }
    }
    return 0;
}
