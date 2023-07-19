// https://codeforces.com/contest/1829/problem/E
// unsolved
// comments:

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class TheLakes{

    static int floodFillUtil(int screen[][], int x, int y,
                              int N, int M)
    {
        int total = 0;
        // Base cases
        if (x < 0 || x >= M || y < 0 || y >= N)
            return 0;
        if (screen[x][y] == 0)
            return 0;

        total += screen[x][y];
        screen[x][y] = 0;

        total += floodFillUtil(screen, x+1, y, N, M);
        total += floodFillUtil(screen, x-1, y, N, M);
        total += floodFillUtil(screen, x, y+1, N, M);
        total += floodFillUtil(screen, x, y-1, N, M);
        return total;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int k = 0; k < T; k++) {
            int N = sc.nextInt();
            int M = sc.nextInt();

            int[][] screen = new int[M][N];
            for (int i = 0; i < M; i++){
                for (int j = 0; j < N; j++){
                    screen[i][j] = sc.nextInt();
                }
            }
            int max = 0;
            for (int i = 0; i < M; i++){
                for (int j = 0; j < N; j++){
                    if (screen[i][j] != 0){
                        max = Math.max(max, floodFillUtil(screen, i, j, N, M));
                    }
                }
            }
            System.out.println(max);
        }
    }

}




