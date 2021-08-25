#include<iostream>
#include<ctime>
#include<random>

using namespace std;

char board[9] = { ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
void show_board();
void get_x_player_choice();
void get_o_player_choice();
void get_computer_choice();
int count_board(char symbol);
char check_winner();
void player_vs_computer();
void player_vs_player();


int main() {
	int round;
	int mode;
	cout << "1.player_vs_computer" << endl;
	cout << "2.player VS player" << endl;
	cout << "select mode";
	cin >> mode;

	cout << "how much round do you want";//my sloution
	cin >> round;//my sloution
	while(round){//my sloution 

	switch (mode) {
	case 1:
		
			player_vs_computer();
			 
			show_board();//my sloution 
			
			
		break;
	case 2:
		player_vs_player(); break;
	default:
		cout << "please select valid game mod";
		}

}


		return 0;
	}




void show_board() {

	cout << "   " << "     |   " << "    |   " << endl;
	cout << "   " << board[0] << "    |   " << board[1] << "   |   " << board[2] << endl;
	cout << "   " << "     |   " << "    |   " << endl;
	cout << "----------------------------"<<endl;
	cout << "   " << "     |   " << "    |   " << endl;
	cout << "   " << board[3] << "    |   " << board[4] << "   |   " << board[5] << endl;
	cout << "   " << "     |   " << "    |   " << endl;
	cout << "----------------------------"<<endl;
	cout << "   " << "     |   " << "    |   " << endl;
	cout << "   " << board[6] << "    |   " << board[7] << "   |   " << board[8] << endl;
	cout << "   " << "     |   " << "    |   " << endl;
	
}

void get_computer_choice() {
	
		srand(time(0));
		int choice;
		do {
			choice = rand() % 9;
		} while (board[choice] != ' ');
		board[choice] = 'O';
		
	}


void get_x_player_choice() {

	
		while (true) {

			cout << "select your position(1-9)" << endl;
			int choice;
			cin >> choice;
			choice--;
			
			if (choice < 0 || choice > 8) {
				cout << "please select position  from (1-9)";
			}
			else if (board[choice] != ' ') {
				cout << "please selecte an empty position";
			}
			else {
				board[choice] = 'X';
				break;
			}
            
		}
	
}

	void get_o_player_choice() {
		while (true) {
			cout << "select your position(1-9)" << endl;
			int choice;
			cin >> choice;
			choice--;//because the player will start from 1 and the array from 0
			if (choice < 0 || choice > 8) {
				cout << "please select position  from (1-9)";
			}
			else if (board[choice] != ' ') {
				cout << "please selecte an empty position";
			}
			else {
				board[choice] = 'O';
				break;
			}
}
}		
	int count_board(char symbol) {
		int	total = 0;
		for (int i = 0; i < 9; i++) {
			if (board[i] == symbol)
				total += 1;
		}
		return total;
 }
	char check_winner() {
		//checking winner in horizontal/row
		if (board[0] == board[1]&& board[1] == board[2] && board[0] != ' ')
			return board[0];
		if (board[3] == board[4] && board[4] == board[5] && board[3] != ' ')
			return board[3];
		if (board[6] == board[7] && board[7] == board[8] && board[6] != ' ')
			return board[6];
		//checking winner in vertical/column
		if (board[0] == board[3] && board[3] == board[6] && board[0] != ' ')
			return board[0];
		if (board[1] == board[4] && board[4] == board[7] && board[1] != ' ')
			return board[1];
		if (board[2] == board[5] && board[5] == board[8] && board[2] != ' ')
			return board[2];
		//checking winner in daiognal
		if (board[0] == board[4] && board[4] == board[8] && board[0] != ' ')
			return board[6];
		if (board[2] == board[4] && board[4] == board[6] && board[2] != ' ')
			return board[2];
		//check if the player can continue or not
		if (count_board('X') + count_board('O') < 9){
			return 'C';}//continue game still have space
		else return 'D';//when  both players have same value
	}
	
		void player_vs_computer() {

			int playerscore = 0;
			int computerscore = 0;
			string playerName;
			cout << "Enter your name ";
			cin >> playerName;


			while (true) {
				system("cls");
				show_board();
				if (count_board('X') == count_board('O')) {
					cout << playerName << "'s turn" << endl;

					get_x_player_choice();
				}
				else {
					get_computer_choice();
				}
				char winner = check_winner();
				if (winner == 'X') {
					system("cls");
					show_board();
					cout << playerName << "  won the game " << ++playerscore << endl;//my sloution 
					break;

				}
				else if (winner == 'O') {
					system("cls");
					show_board();
					cout << "  comuter won  " <<++ computerscore  << endl; break;//my sloution 
				}


				else if (winner == 'D') {
					system("cls");
					show_board();
					cout << "The game Draw";
					break;
				}


			}

		}
	
	
	void player_vs_player() {
		string x_playerName;
		cout << "enter x_playerName ";
		cin >> x_playerName;
		string o_playerName;
		cout << "enter o_playerName ";
		cin >> o_playerName;
		while (true) {
			system("cls");
			show_board();
			if (count_board('X') == count_board('O')) {
				cout << x_playerName << "'s turn" << endl;
				get_x_player_choice();
				
			}
			else{
				cout << o_playerName << "'s turn" << endl;
				get_o_player_choice(); 
			}

			char winner = check_winner();
			if (winner == 'X'){
				system("cls");
				show_board();
				cout << x_playerName << " won the game" << endl; break;
			}
			else if (winner == 'O'){
				system("cls");
				show_board();
				cout << o_playerName << " won the game" << endl; break;
			}
			else if (winner == 'D'){
				cout << "the game is Draw"<<endl;
			break;}

		}


	}
