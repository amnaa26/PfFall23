#include <stdio.h>

int main() {
    char maze[5][5] = {
        {'S', 'O', 'O', 'W', 'W'},
        {'O', 'W', 'O', 'W', 'W'},
        {'W', 'O', 'O', 'W', 'O'},
        {'W', 'W', 'O', 'W', 'O'},
        {'W', 'W', 'O', 'E', 'W'}
    };

    int x = 0, y = 0;
    int path_found = 0;
    
    printf("Welcome to the Maze Adventure!\n");

    printf("The Original Maze:\n");
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 5; y++) {
            printf("%c ", maze[x][y]);
        }
        printf("\n");
    }

    printf("Output after Traversal:\n");

    for (x = 0; x < 5; x++) {
        path_found = 0;
        for (y = path_found; y < 5; y++) {
            if (maze[x][y] == 'S' || maze[x][y] == 'O' || maze[x][y] == 'E') {
                printf("(%d,%d) ", x, y);
            } else if (maze[x][y] == 'W') {
                path_found = y - 1;
                printf("\n");
                break;
            }
        }
    }

    return 0;
}
