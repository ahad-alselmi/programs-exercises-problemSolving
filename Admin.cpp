#ifdef THISFILE
#include<iostream>
using namespace std;



//enum subjects { Arabic,English,Math,Since,Relgion};


struct admin {
	int numOfStudents;
	char* studentName;
	//int BrithDay;
	char gender;
	char* Address;
	//int subjects [4] ;
};

 void ReadSubjectgrade() {
	int subjects[4];
		//for(int i=0;i<4;i++)
		cout << "Enter Grade of Arabic course :" << endl;
		cin >> subjects[0];
		cout << "Enter Grade of English course :" << endl;
		cin >> subjects[1];
		cout << "Enter Grade of Math course :" << endl;
		cin >> subjects[2];
		cout << "Enter Grade of science course :" << endl;
		cin >> subjects[3];
		cout << "Enter Grade of Religion course :" << endl;
		cin >> subjects[4];

		
	}
    /*void  ReadSubjectgrade()   ثم نعمل كاستينق enumنحط المتغير العادي في متغير نوعهcinعدم قبول ال
	subjects ss;
	int grad; cin >> grad; 
		ss=(subjects)grad;//variable holds enum type

}*/
	admin readInformation() {
		admin adm;
		cout << "Enter Number of student" << endl;
		int numOfStudents;
		cin >> numOfStudents;
		while (numOfStudents) {
			cout << "Enter student name:" << endl;
			char* studentName = new char[150];
			for (int i = 0; i < numOfStudents; i++) {
				cin >> studentName[i];
			}

			cout << "Enter M/m for Male OR F/f for female:/" << endl;
			char gender;
			cin >> gender;
			/*switch (gender) {
			case'M':
			case'm':
				break;
			case'F':
			case'f':
				break;
			}*/
			cout << "Enter your address" << endl;
			char* Address = new char[150];
			for (int i = 0; i < numOfStudents; i++) {
				cin >> Address[i];
			}
			adm.numOfStudents = numOfStudents;
			adm.studentName = studentName;
			adm.gender = gender;
			adm.Address = Address;
			ReadSubjectgrade();
		}

		return adm;
	}

	void Report() {
		admin adm;
		char gender='/';
		adm.gender = gender;
		int count = 0;
		cout << "Enter your age"<<endl;
		int age;
		cin >> age;
		if (adm.gender == 'm' || 'M'){
			age += age;
		count++;
		cout<<"Average of Male Ages"<<age / count<<endl;}
		else if (adm.gender == 'f' || 'F') {
			age += age;
			count++;
			cout << "Average of Female Ages" << age / count << endl;
		}
		}
	/*void subjectsReport() {}*/

	int main() {
		admin adm = readInformation();
		ReadSubjectgrade();
		Report();
	
	}
#endif
	
	
	
		
	
	
	



