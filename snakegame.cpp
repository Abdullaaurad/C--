#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define WIDTH 20
#define HEIGHT 20

int GameOver = 0;

typedef enum { UP, DOWN, LEFT, RIGHT, NONE } Direction;
Direction dir = NONE;

int Snakex[400];
int Snakey[400];
int size = 1;
int insectX, insectY;

void initializeGame() {
    Snakex[0] = WIDTH / 2;
    Snakey[0] = HEIGHT / 2;
    insectX = rand() % WIDTH;
    insectY = rand() % HEIGHT;
    dir = NONE;
}

void draw() {
    system("cls");
    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0) printf("#");
            if (i == Snakey[0] && j == Snakex[0]) printf("O");
            else if (i == insectY && j == insectX) printf("X");
            else {
                int isBodyPart = 0;
                for (int k = 0; k < size; k++) {
                    if (i == Snakey[k] && j == Snakex[k]) {
                        printf("o");
                        isBodyPart = 1;
                    }
                }
                if (!isBodyPart) printf(" ");
            }
            if (j == WIDTH - 1) printf("#");
        }
        printf("\n");
    }

    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");
}

void move() {
    int rememberX=Snakex[size];
    int rememberY=Snakey[size];
    for (int i = size; i > 0; i--) {
        Snakex[i] = Snakex[i - 1];
        Snakey[i] = Snakey[i - 1];
    }

    switch (dir) {
        case UP: Snakey[0]--; break;
        case DOWN: Snakey[0]++; break;
        case LEFT: Snakex[0]--; break;
        case RIGHT: Snakex[0]++; break;
        default: break;
    }

    if (Snakex[0]<0) {
        Snakex[0]=19;
    }
    if (Snakex[0]>19){
        Snakex[0]=0;
    }
    if (Snakey[0]<0) {
        Snakey[0]=19;
    }
    if (Snakey[0]>19){
        Snakey[0]=0;
    }

/*
    if (Snakex[0] < 0 || Snakex[0] >= WIDTH || Snakey[0] < 0 || Snakey[0] >= HEIGHT) {
        printf("Game Over! You hit the wall.\n");
        exit(0);
    }
*/

    for (int i = 1; i <= size; i++) {
        if (Snakex[0] == Snakex[i] && Snakey[0] == Snakey[i]) {
            printf("Game Over! You collided with yourself.\n");
            exit(0);
        }
    }

    if (Snakex[0] == insectX && Snakey[0] == insectY) {
        insectX = rand() % WIDTH;
        insectY = rand() % HEIGHT;
        size++;
        Snakex[size]=rememberX;
        Snakey[size]=rememberY;
    }
}

void getDirection() {
    switch (_getch()) {
        case 'w':
            if (dir != DOWN) dir = UP;
            break;
        case 's':
            if (dir != UP) dir = DOWN;
            break;
        case 'a':
            if (dir != RIGHT) dir = LEFT;
            break;
        case 'd':
            if (dir != LEFT) dir = RIGHT;
            break;
        case 'x':
            GameOver = 1;
            printf("Game over\n");
            break;
        default:
            break;
    }
}

int main() {
    initializeGame();
    while (!GameOver) {
        draw();
        getDirection();
        if (dir != NONE) {
            move();
        }
    }
    return 0;
}
