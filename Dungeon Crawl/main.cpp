#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string>

using namespace std;
void menu();
void game();
void exitGame();
int main();
void displayBoard();
void createPlayer();
void createEnemys();
void createObjetive();
bool checkColision();
void updateBoard();
void updateGame();
void moveEnemys();
bool checkEnemysColision(unsigned int p1, unsigned int p2);

struct game {
	char board[6][6];
	unsigned int player[2];
	unsigned int enemy1[2];
	unsigned int enemy2[2];
	unsigned int enemy3[2];
	unsigned int enemy4[2];
	unsigned int objective[2];
	char key;
} Game;

void createObjetive() {
	srand(time(NULL));
	while (1) {
		Game.objective[0] = rand() % 6;
		Game.objective[1] = rand() % 6;
		if ((Game.objective[0] != Game.player[0])&&(Game.objective[1] != Game.player[1]))
			if ((Game.objective[0] != Game.enemy1[0])&&(Game.objective[1] != Game.enemy1[1]))
				if ((Game.objective[0] != Game.enemy2[0])&&(Game.objective[1] != Game.enemy2[1]))
					if ((Game.objective[0] != Game.enemy3[0])&&(Game.objective[1] != Game.enemy3[1]))
						if ((Game.objective[0] != Game.enemy4[0])&&(Game.objective[1] != Game.enemy4[1]))
							break;
	}
}

void moveEnemys() {
	unsigned int p1, p2, move;
	p1 = Game.enemy1[0];
	p2 = Game.enemy1[1];
	move = rand() % 5;
	switch (move) {
	case 0:
		break;
	case 1:
		if (p1 != 0)
			p1 -= 1;
		break;
	case 2:
		if (p2 != 0)
			p2 -= 1;
		break;
	case 3:
		if (p1 != 5)
			p1 += 1;
		break;
	case 4:
		if (p2 != 5)
			p2 += 1;
		break;
	}
	if (!checkEnemysColision(p1, p2)) {
		Game.enemy1[0] = p1;
		Game.enemy1[1] = p2;
	}
	p1 = Game.enemy2[0];
	p2 = Game.enemy2[1];
	move = rand() % 5;
	switch (move) {
	case 0:
		break;
	case 1:
		if (p1 != 0)
			p1 -= 1;
		break;
	case 2:
		if (p2 != 0)
			p2 -= 1;
		break;
	case 3:
		if (p1 != 5)
			p1 += 1;
		break;
	case 4:
		if (p2 != 5)
			p2 += 1;
		break;
	}
	if (!checkEnemysColision(p1, p2)) {
		Game.enemy2[0] = p1;
		Game.enemy2[1] = p2;
	}
	p1 = Game.enemy3[0];
	p2 = Game.enemy3[1];
	move = rand() % 5;
	switch (move) {
	case 0:
		break;
	case 1:
		if (p1 != 0)
			p1 -= 1;
		break;
	case 2:
		if (p2 != 0)
			p2 -= 1;
		break;
	case 3:
		if (p1 != 5)
			p1 += 1;
		break;
	case 4:
		if (p2 != 5)
			p2 += 1;
		break;
	}
	if (!checkEnemysColision(p1, p2)) {
		Game.enemy3[0] = p1;
		Game.enemy3[1] = p2;
	}
	p1 = Game.enemy4[0];
	p2 = Game.enemy4[1];
	move = rand() % 5;
	switch (move) {
	case 0:
		break;
	case 1:
		if (p1 != 0)
			p1 -= 1;
		break;
	case 2:
		if (p2 != 0)
			p2 -= 1;
		break;
	case 3:
		if (p1 != 5)
			p1 += 1;
		break;
	case 4:
		if (p2 != 5)
			p2 += 1;
		break;
	}
	if (!checkEnemysColision(p1, p2)) {
		Game.enemy4[0] = p1;
		Game.enemy4[1] = p2;
	}

}

bool checkEnemysColision(unsigned int p1, unsigned int p2) {
	if (p1 == Game.enemy1[0] && p2 == Game.enemy1[1])
		return true;
	if (p1 == Game.enemy2[0] && p2 == Game.enemy2[1])
		return true;
	if (p1 == Game.enemy3[0] && p2 == Game.enemy3[1])
		return true;
	if (p1 == Game.enemy4[0] && p2 == Game.enemy4[1])
		return true;
	if (p1 == Game.objective[0] && p2 == Game.objective[1])
		return true;
	return false;
}

void createEnemys() {

	while (1) {
		Game.enemy1[0] = rand() % 6;
		Game.enemy1[1] = rand() % 6;
		if ((Game.enemy1[0] != Game.player[0])&&(Game.enemy1[1] != Game.player[1]))
			break;
	}
	while (1) {
		Game.enemy2[0] = rand() % 6;
		Game.enemy2[1] = rand() % 6;
		if ((Game.enemy2[0] != Game.player[0])&&(Game.enemy2[1] != Game.player[1]))
			if ((Game.enemy2[0] != Game.enemy1[0])&&(Game.enemy2[1] != Game.enemy1[1]))
				break;
	}
	while (1) {
		Game.enemy3[0] = rand() % 5;
		Game.enemy3[1] = rand() % 6;
		if ((Game.enemy3[0] != Game.player[0])&&(Game.enemy3[1] != Game.player[1]))
			if ((Game.enemy3[0] != Game.enemy1[0])&&(Game.enemy3[1] != Game.enemy1[1]))
				if ((Game.enemy3[0] != Game.enemy2[0])&&(Game.enemy3[1] != Game.enemy2[1]))
					break;
	}
	while (1) {
		Game.enemy4[0] = rand() % 6;
		Game.enemy4[1] = rand() % 6;
		if ((Game.enemy4[0] != Game.player[0])&&(Game.enemy4[1] != Game.player[1]))
			if ((Game.enemy4[0] != Game.enemy1[0])&&(Game.enemy4[1] != Game.enemy1[1]))
				if ((Game.enemy4[0] != Game.enemy2[0])&&(Game.enemy4[1] != Game.enemy2[1]))
					if ((Game.enemy4[0] != Game.enemy3[0])&&(Game.enemy4[1] != Game.enemy3[1]))
						break;
	}

}
void updateBoard() {
	for (unsigned int i = 0; i < 6; i++) {
		for (unsigned int w = 0; w < 6; w++) {
			Game.board[i][w] = '+';
		}
	}
	Game.board[Game.player[0]][Game.player[1]] = 'P';
	Game.board[Game.enemy1[0]][Game.enemy1[1]] = 'E';
	Game.board[Game.enemy2[0]][Game.enemy2[1]] = 'E';
	Game.board[Game.enemy3[0]][Game.enemy3[1]] = 'E';
	Game.board[Game.enemy4[0]][Game.enemy4[1]] = 'E';
	Game.board[Game.objective[0]][Game.objective[1]] = 'X';
}

bool checkColision() {
	return (((Game.player[0] == Game.enemy1[0])&&(Game.player[1] == Game.enemy1[1])) || ((Game.player[0] == Game.enemy2[0])&&(Game.player[1] == Game.enemy2[1]))
			|| ((Game.player[0] == Game.enemy3[0])&&(Game.player[1] == Game.enemy3[1])) || ((Game.player[0] == Game.enemy4[0])&&(Game.player[1] == Game.enemy4[1])));
}

void createPlayer() {
	Game.player[0] = rand() % 6;
	Game.player[1] = rand() % 6;
}

void displayBoard() {
	for (unsigned int i = 0; i < 6; i++) {
		cout << "\t\t\t\t\t\t";
		for (unsigned int w = 0; w < 6; w++) {
			cout << Game.board[i][w] << ' ';
		}
		cout << endl;
	}
}

void updateGame() {
	if (Game.key == 'w')
		if (Game.player[0] != 0)
			Game.player[0] -= 1;
	if (Game.key == 'a')
		if (Game.player[1] != 0)
			Game.player[1] -= 1;
	if (Game.key == 's')
		if (Game.player[0] != 5)
			Game.player[0] += 1;
	if (Game.key == 'd')
		if (Game.player[1] != 5)
			Game.player[1] += 1;
	moveEnemys();
}
bool checkWin(){
	if((Game.player[0]==Game.objective[0])&&(Game.player[1]==Game.objective[1]))
		return true;
	return false;
}

void game() {
	createPlayer();
	createEnemys();
	createObjetive();
	while (1) {
		cout << string(21, '\n');
		updateBoard();
		displayBoard();
		cout << string(11, '\n');
		if (checkColision()) {
			cout << "You lose.\n";
			break;
		}
		if(checkWin()){
			cout << "You Win.\nNice.\n";
			break;
		}
		cin >> Game.key;
		updateGame();
	}
}

void exitGame() {
	int n;
	cout << "\n1-Exit Game.\n2-Return to main menu.\n";
	cin >> n;
	switch (n) {
	case 1:
		cout << "Bye , don't forget to play again.";
		return;
	case 2:
		cout << string(21, '\n');
		main();
		return;
	default:
		cout << "That's not a valid option.\nTry again.";
		return;
	}
}

void menu() {
	int n;
	cout << "0-Exit.\n1-Play Game.\n";
	cin >> n;
	switch (n) {
	case 0:
		cout << "Bye.";
		return;
	case 1:
		cout << "\n\n\n\n\n\n";
		game();
		break;
	default:
		cout << "That's not a valid option.\n";
		menu();
		return;
	}
	exitGame();
}

int main() {
	cout << "Dungeon Crawl\nAvoid the enemy's represented by(E).\n"
			"You are represented by(P) and the objective by(X).\n"
			"Move your player using wasd, and then click enter to confirm\n. ";
	menu();
	return 0;
}

