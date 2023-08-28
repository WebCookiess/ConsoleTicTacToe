#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void display(string letters[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << letters[i][j];
            if (j < 2)
            {
                cout << " | ";
            }
        }
        cout << "\n";
        if (i < 2)
        {
            cout << "---------\n";
        }
    }
}
void get_inputX(string letters[3][3])
{
    int choose_cell;
    cin >> choose_cell;
    cout << "\n";
    switch (choose_cell)
    {
    case 1:
        if (letters[0][0] == " ")
            letters[0][0] = "X";
        break;
    case 2:
        if (letters[0][1] == " ")
            letters[0][1] = "X";
        break;
    case 3:
        if (letters[0][2] == " ")
            letters[0][2] = "X";
        break;
    case 4:
        if (letters[1][0] == " ")
            letters[1][0] = "X";
        break;
    case 5:
        if (letters[1][1] == " ")
            letters[1][1] = "X";
        break;
    case 6:
        if (letters[1][2] == " ")
            letters[1][2] = "X";
        break;
    case 7:
        if (letters[2][0] == " ")
            letters[2][0] = "X";
        break;
    case 8:
        if (letters[2][1] == " ")
            letters[2][1] = "X";
        break;
    case 9:
        if (letters[2][2] == " ")
            letters[2][2] = "X";
        break;
    default:
        cout << "Invalid input\n";
        break;
    }
}

void get_inputY(string letters[3][3])
{
    int choose_cell;
    cin >> choose_cell;
    cout << "\n";
    switch (choose_cell)
    {
    case 1:
        if (letters[0][0] == " ")
            letters[0][0] = "Y";
        break;
    case 2:
        if (letters[0][1] == " ")
            letters[0][1] = "Y";
        break;
    case 3:
        if (letters[0][2] == " ")
            letters[0][2] = "Y";
        break;
    case 4:
        if (letters[1][0] == " ")
            letters[1][0] = "Y";
        break;
    case 5:
        if (letters[1][1] == " ")
            letters[1][1] = "Y";
        break;
    case 6:
        if (letters[1][2] == " ")
            letters[1][2] = "Y";
        break;
    case 7:
        if (letters[2][0] == " ")
            letters[2][0] = "Y";
        break;
    case 8:
        if (letters[2][1] == " ")
            letters[2][1] = "Y";
        break;
    case 9:
        if (letters[2][2] == " ")
            letters[2][2] = "Y";
        break;
    default:
        cout << "Invalid input\n";
        break;
    }
}
bool check_win(string letters[3][3], string player)
{
    // Check rows
    for (int i = 0; i < 3; i++)
    {
        if (letters[i][0] == player && letters[i][1] == player && letters[i][2] == player)
            return true;
    }

    // Check columns
    for (int j = 0; j < 3; j++)
    {
        if (letters[0][j] == player && letters[1][j] == player && letters[2][j] == player)
            return true;
    }

    // Check diagonals
    if (letters[0][0] == player && letters[1][1] == player && letters[2][2] == player)
        return true;

    if (letters[0][2] == player && letters[1][1] == player && letters[2][0] == player)
        return true;

    return false;
}

int main()
{
    string letters[3][3] =
    {
        { " ", " ", " "},

        { " ", " ", " "},

        { " ", " ", " "}
    };

    bool run = true;
    while (run)
    {
        cout << "\n\nPlayer X's turn. Choose a cell (1-9): ";
        get_inputX(letters);
        display(letters);
        cout << "\n\n";
        if (check_win(letters, "X"))
        {
            cout << "Player X wins!\n";
            break;
        }

        cout << "\n\nPlayer Y's turn. Choose a cell (1-9): ";
        get_inputY(letters);
        display(letters);
        cout << "\n\n";
        if (check_win(letters, "Y"))
        {
            cout << "Player Y wins!\n";
            break;
        }

    }
    cin.ignore();
    cin.get();
    return 0;
}
