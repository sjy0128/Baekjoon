#include <stdio.h>

struct { int size; struct Point { int x, y; } data[18]; } queue = {0,};

int visited[12][6];
char board[12][7];

void fall(void);
void print(void);
int judge_effective_pos(int x, int y);
int detect_puyopuyo(void);
int dfs(int x, int y);
void delete_puyopuyo(int x, int y, char c);

int main(void) {
    int streak = -1, cur_cnt;
    struct Point p;
    for(int i = 0; i < 12; i++) scanf("%s", board[i]);
    do {
        fall();
        cur_cnt = detect_puyopuyo();
        for(int i = 0; i < cur_cnt; i++) {
            p = queue.data[--queue.size];
            delete_puyopuyo(p.x, p.y, board[p.x][p.y]);
        }
        streak++;
    } while(cur_cnt);
    printf("%d", streak);
    return 0;
}

void fall(void) {
    for(int i = 0; i < 6; i++) {
        for(int j = 11, k = 11; j >= 0; j--) {
            visited[j][i] = 0;
            if(board[j][i] != '.') {
                board[k][i] = board[j][i];
                if(j != k) board[j][i] = '.';
                k--;
            }
        }
    }
}

int judge_effective_pos(int x, int y) {
    return x >= 0 && y >= 0 && x < 12 && y < 6;
}

int detect_puyopuyo(void) {
    int cnt = queue.size = 0;
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 6; j++) {
            if(board[i][j] != '.' && !visited[i][j] && dfs(i, j) >= 4) {
                cnt++;
                queue.data[queue.size++] = (struct Point) {i, j};
            }
        }
    }
    return cnt;
}

int dfs(int x, int y) {
    int dx[] = {0, -1, 0, 1}, dy[] = {-1, 0, 1, 0}, _x, _y, r = 1;
    visited[x][y] = 1;
    for(int d = 0; d < 4; d++) {
        _x = x + dx[d], _y = y + dy[d];
        if(judge_effective_pos(_x, _y) && !visited[_x][_y] && board[x][y] == board[_x][_y]) r += dfs(_x, _y);
    }
    return r;
}

void delete_puyopuyo(int x, int y, char c) {
    int dx[] = {0, -1, 0, 1}, dy[] = {-1, 0, 1, 0}, _x, _y;
    board[x][y] = '.';
    for(int d = 0; d < 4; d++) {
        _x = x + dx[d], _y = y + dy[d];
        if(judge_effective_pos(_x, _y) && board[_x][_y] == c) delete_puyopuyo(_x, _y, c);
    }
}