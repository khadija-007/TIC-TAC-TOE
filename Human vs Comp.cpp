//#include<iostream>
//
//using namespace std;
//
//void print(int b[][3], int r)
//
//{
//
//    for (int i = 0; i < r; i++)
//
//    {
//
//        for (int j = 0; j < 3; j++)
//
//        {
//
//            if (b[i][j] == 0)
//
//            {
//
//                cout << "_ ";
//
//            }
//
//            else if (b[i][j] == 1)
//
//            {
//
//                cout << "X ";
//
//            }
//
//            else
//
//            {
//
//                cout << "O ";
//
//            }
//
//        }
//
//        cout << endl;
//
//    }
//
//    cout << endl;
//
//}
//
//bool checkWinner(int b[][3], int r, int& p)
//
//{
//
//    for (int i = 0; i < r; i++)
//
//    {
//
//        if (b[i][0] == b[i][1] && b[i][1] == b[i][2] && b[i][0] != 0)
//
//        {
//
//            p = b[i][0];
//
//            return true;
//
//
//
//        }
//
//    }
//
//    for (int i = 0; i < 3; i++)
//
//    {
//
//        if (b[0][i] == b[1][i] && b[1][i] == b[2][i] && b[2][i] != 0)
//
//        {
//
//            p = b[0][i];
//
//            return true;
//
//
//
//        }
//
//    }
//
//    if (b[0][0] == b[1][1] && b[1][1] == b[2][2] && b[0][0] != 0)
//
//    {
//
//        p = b[0][0];
//
//        return true;
//
//
//
//    }
//
//    if (b[0][2] == b[1][1] && b[1][1] == b[2][0] && b[0][2] != 0)
//
//    {
//
//        p = b[0][2];
//
//        return true;
//
//
//
//    }
//
//    return false;
//
//}
//
//void calc(int b[][3], int& x, int& y, int opp, int p)
//
//{
//
//    bool stop = 0;
//
//    for (int i = 0; i < 3 && stop == 0; i++)
//
//    {
//
//        for (int j = 0; j < 3 && stop == 0; j++)
//
//        {
//
//            if (b[i][j] == 0)
//
//            {
//
//                b[i][j] = p;
//
//                x = i;
//
//                y = j;
//
//                if (checkWinner(b, 3, p) == true)
//
//                    stop = true;
//
//                b[i][j] = 0;
//
//            }
//
//        }
//
//    }
//
//    for (int i = 0; i < 3 && stop == 0; i++)
//
//    {
//
//        for (int j = 0; j < 3 && stop == 0; j++)
//
//        {
//
//            if (b[i][j] == 0)
//
//            {
//
//                b[i][j] = opp;
//
//                x = i;
//
//                y = j;
//
//                if (checkWinner(b, 3, opp) == true)
//
//                    stop = true;
//
//                b[i][j] = 0;
//
//            }
//
//        }
//
//    }
//
//    if (stop == 0)
//
//    {
//
//        if (b[1][1] == 0)
//
//        {
//
//            x = 1;
//
//            y = 1;
//
//        }
//
//        else if (b[0][0] == 0)
//
//        {
//
//            x = 0;
//
//            y = 0;
//
//        }
//
//        else if (b[0][2] == 0)
//
//        {
//
//            x = 0;
//
//            y = 2;
//
//        }
//
//        else if (b[2][0] == 0)
//
//        {
//
//            x = 2;
//
//            y = 0;
//
//        }
//
//        else if (b[2][2] == 0)
//
//        {
//
//            x = 2;
//
//            y = 2;
//
//        }
//
//    }
//
//}
//
//int main()
//
//{
//
//    int board[3][3] = { 0 }, player = 1, x, y, p;
//
//    bool winner = 0;
//
//    for (int i = 1; i <= 9 && winner == 0; i++)
//
//    {
//
//        if (player == 1)
//
//        {
//
//            calc(board, x, y, 2, 1);
//
//            board[x][y] = 1;
//
//            player = 2;
//
//        }
//
//        else
//
//        {
//
//            cout << "\nEnter\n";
//
//            cin >> x >> y;
//
//            while (board[x][y] != 0)
//
//            {
//
//                cout << "\nre-enter\n";
//
//                cin >> x >> y;
//
//            }
//
//            board[x][y] = 2;
//
//            player = 1;
//
//        }
//
//        print(board, 3);
//
//        winner = checkWinner(board, 3, p);
//
//    }
//
//    if (winner == true)
//
//    {
//
//        cout << "The winner is " << p;
//
//    }
//
//    else
//
//    {
//
//        cout << "tie";
//
//    }
//
//    return 0;
//
//}