#include<iostream>
#include<string>
using namespace std;

void DrawBoard(char refrenceSet[3][3]) {// step4  add this array to fill acells with numbers

	bool isStraightline = true;//step1
	int chari = 0, charj = 0;
	for (int i = 0; i < 7; i++) {//لوب خارجيه ترسم عدد طوابق اللعبه
		if(isStraightline){//يعمل اللفه الاولى خطوط وبعدها يبدل 
		for (int j = 0; j < 25; j++) {//لوب داخليه للخطوط
			cout << "-" ;
		}
		cout << endl;
		}//if
		else {//choosing this place will fill cells with numbers
			charj = 0;//ليش لما خليناه ب 0 اضاف ال4 في مكانها  
		for (int j = 0; j < 4; j++) {
			if (refrenceSet[chari][charj] == ' ' ||j==3)//if it is empty but actually it doesnot empty
				cout << "|\t";
			else {
				cout << "|" << refrenceSet[chari][charj] << "\t";//this will write 1 to 9
			}
			charj++;//to increment columns
		}
		cout << endl;
		chari++;//to increment rows
		}//first else
		isStraightline = !isStraightline;// |بعد كل لفه خارجيهعشان يرسمtrue<<falseرجع قيمة ال
	
	}

}
char isGameOver(char setGame[3][3]) {//step7
	for (int i = 0; i < 3; i++)
	{
		if (setGame[i][0] == setGame[i][1] && setGame[i][1] == setGame[i][2])
		{
			return setGame[i][0];
		}
	}

	for (int j = 0; j < 3; j++)
	{
		if (setGame[0][j] == setGame[1][j] && setGame[1][j] == setGame[2][j])
		{
			return setGame[0][j];
		}
	}

	if ((setGame[0][0] == setGame[1][1] && setGame[1][1] == setGame[2][2]) ||
		(setGame[0][2] == setGame[1][1] && setGame[1][1] == setGame[2][0]))
	{
		return setGame[1][1];
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (setGame[i][j] == ' '){
				return ' ';}
			
				return '-';
		}

	}
	
}




void playGame() {//initilaizing 2dim-array with empty
	char setGame[3][3];
	for (int i = 0; i < 3; i++) {//step3
		for (int j = 0; j < 3; j++) {
			setGame[i][j] = ' ';
		}
	}
	cout << "pleas use the refrence below to know how cells are identified" << endl;//step4
	char refrenceSet[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
     DrawBoard(refrenceSet);
	 //step5 
	 bool isX = true;
	 while(true){
	
	 cout << "please Enter cell number " << endl;
	 int cellNumber;
	 cin >> cellNumber;
	 cellNumber--;//حتى يبدا من الصفر حتى تكون العمليات الحسابيه صحيحه 
	 int i, j;
	 i = cellNumber / 3;//عشان اجيب رقم الصف
	 j = cellNumber % 3;//عشان اجيب رقم العمود
	  //step6
	 if (setGame[i][j] != ' '){//  do داخل الifهنا غلطت وحطيت
	 do {
		 
			 cout << " The place not empty please choose another cell " << endl;
		 cin >> cellNumber;
		 if (setGame[i][j] == ' ')
			 break;//حتى ماتضل اللوب لانهائيه
	 } while (true);
     }
	 if (isX)
		 setGame[i][j] = 'X';
	 else
		 setGame[i][j] = 'O';
	 isX = !isX;
	 DrawBoard(setGame);
	 /*if (isGameOver(setGame) != ' ')//step7
		 break;*/
	 char result = isGameOver(setGame);
	 if (result == '-') {
		 cout << "Game is Over" << endl;
		 break;
	 }
	 else if (result == 'X') {
		 cout << "X player won!" << endl;
		 break;
	 }
	 else if (result=='O'){
		 cout << "O player won"; break;
	 }


}
}



void main() {
	
	playGame();
}