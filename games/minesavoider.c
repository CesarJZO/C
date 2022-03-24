#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

#pragma region Global variables
/**
 * The width and height of the map
 */
const int LENGTH = 10;
/**
 * The current row of the PLAYER
 */
int current_r;
/**
 * The current column of the PLAYER
 */
int current_c;
/**
 * The total amount of "bonus" objects in the map
 */
int bonus_amount;
/**
 * Wether PLAYER has collide with a MINE
 */
bool collision = false;
/**
 * When finish the game wether the player Won or not
 */
bool win;
/**
 * A 2D char array representing the map area of the game
 */
char map[LENGTH][LENGTH];
#pragma endregion

#pragma region Game objects
const char MINE =  '*';
const char BONUS = '@';
const char PATH = '-';
const char PLAYER = 'P';
#pragma endregion

#pragma region Functions
/**
 * Initializes the map by filling it with PATH chars
 */
void fill_map();
/**
 * Shows the initial prompts, asking for the amount of the specified object
 * @param message The message to be prompted
 * @param object The specified constant char which is going to be placed on the map
 * @param max The max limit of objects to be placed
 */
void ask(char message[], char object, int max);
/**
 * Checks if the specified position is available
 * @param r Row to be checked
 * @param c Column to be checked
 */
bool available(int r, int c);
/**
 * Places the specified object on random positions
 * @param object The specified constant char which is going to be placed on the map
 * @param amount The specified amount of times object is going to be placed
 */
void place_object(char object, int amount);
/**
 * Places the PLAYER on a random position of the map
 */
void place_player();
/**
 * Checks if there is a BONUS object in target position
 * @param r Current row of the PLAYER
 * @param c Current col of the PLAYER
 */
bool get_bonus(int r, int c);
/**
 * Moves the PLAYER towards the specified direction. Multiple directions can be used at once
 * @param direction w, a, s or d are the only directions accepted
 */
void move(char direction);
/**
 * Prints the formatted map to the terminal
 */
void print_map();
#pragma endregion

int main()
{
    srand((unsigned)time(NULL));
    fill_map();

    char mine_message[] = "Amount of mines [<50]: ";
    ask(mine_message, MINE, 50);
    char bonus_message[] = "Amount of bonus [<15]: ";
    ask(bonus_message, BONUS, 15);

    place_player();

    int bonus_count = 0;
    char direction;
    do
    {
        scanf("%c", &direction);
        move(direction);
        collision = map[current_r][current_c] == MINE;

        if (get_bonus(current_r, current_c))
            bonus_count++;
        if (!collision)
            map[current_r][current_c] = PLAYER;
        else
            win = false;
        if (bonus_count == bonus_amount)
        {
            win = true;
            collision = true;
        }
        print_map();
        printf("Score: %d\n", bonus_count);
    } while (!collision);
    if (win)
    {
        printf("You win!\n");
        return 0;
    }
    else
    {
        printf("You lose.\n");
        return 1;
    }
}

bool get_bonus(int r, int c)
{
    return map[current_r][current_c] == BONUS;
}

void ask(char message[], char object, int max)
{
    int amount;
    do
    {
        printf("%s", message);
        scanf("%d", &amount);
        if (amount > max)
            printf("That's too high!\n");
        if (amount < 0)
            printf("You need at least one!\n");
    } while (amount > max || amount < 0);
    if (object == BONUS)
        bonus_amount = amount;
    place_object(object, amount);
}

void move(char direction)
{
    direction = tolower(direction);
    if (direction == 'w' || direction == 'a' || direction == 's' || direction == 'd')
        map[current_r][current_c] = PATH;
    switch (direction)
    {
    case 'a':
        if (current_c > 0)
            current_c--;
        break;
    case 'w':
        if (current_r > 0)
            current_r--;
        break;
    case 's':
        if (current_r < LENGTH - 1)
            current_r++;
        break;
    case 'd':
        if (current_c < LENGTH - 1)
            current_c++;
        break;
    }
}

bool available(int r, int c)
{
    return map[r][c] == PATH;
}

void place_player()
{
    int r, c;
    do
    {
        r = rand() % LENGTH;
        c = rand() % LENGTH;
    } while (!available(r, c));
    current_r = r;
    current_c = c;
    map[r][c] = PLAYER;
}

void place_object(char object, int amount)
{
    for (int i = 0; i < amount; i++)
    {
        int r, c;
        do
        {
            r = rand() % LENGTH;
            c = rand() % LENGTH;
        } while (!available(r, c));
        map[r][c] = object;
    }
}

void fill_map()
{
    for (int i = 0; i < LENGTH; i++)
        for (int j = 0; j < LENGTH; j++)
            map[i][j] = PATH;
}

void print_map()
{
    for (int i = 0; i < LENGTH; i++)
    {
        printf("| ");
        for (int j = 0; j < LENGTH; j++)
            printf("%c ", map[i][j]);
        printf("|\n");
    }
    printf("\n");
}
