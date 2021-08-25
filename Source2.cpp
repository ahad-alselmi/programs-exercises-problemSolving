//#ifdef THISFILE
#include <iostream>
using namespace std;

int ReadSubjectGrade(int id)
{
	int grade = 0;
	do
	{
		cout << "Please enter the subject number " << id << " grade: ";
		cin >> grade;
		if (grade > 100 || grade < 0)
		{
			cout << "Invalid grade! Please try again!" << endl;
		}
	} while (grade > 100 || grade < 0);

	return grade;
}

float CalculateMean(int sum, int count)
{
	return (float)sum / count;
}

float CalculateMedian(int * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	if (size % 2 == 1)
	{
		return arr[size / 2];
	}
	else
	{
		return (arr[size / 2] + arr[size / 2 - 1]) / 2.0f;
	}
}


void main()
{
	int sum = 0;
	int max = -1, min = 101;
	int* subjects;
	int totalSubjects;
	cout << "Enter total subjects: ";
	cin >> totalSubjects;
	subjects = new int[totalSubjects];
	for (int i = 0; i < totalSubjects; i++)
	{
		subjects[i] /*same of =*(subjects + i)*/ = ReadSubjectGrade(i); 
		if (subjects[i] < min)
			min = subjects[i];
		if (subjects[i] > max)
			max = subjects[i];
		sum += subjects[i];
	}

	cout << "Mean is: " << CalculateMean(sum, totalSubjects) << endl;
	cout << "Median is: " << CalculateMedian(subjects, totalSubjects) << endl;
	cout << "Max is: " << max << endl;
	cout << "Min is: " << min << endl;

	delete[] subjects;
}
//#endif