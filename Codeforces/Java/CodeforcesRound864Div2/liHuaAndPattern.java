// https://codeforces.com/contest/1797/problem/B
// solved 4/8/23
// comments: thinking is half the battle

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class liHuaAndPattern{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int k = 0; k < T; k++){
            int N = sc.nextInt();
            int K = sc.nextInt();

            int[][] arr = new int[N][N];
            for (int i = 0; i < N; i++){
                for (int j = 0; j < N; j++){
                    arr[i][j] = sc.nextInt();
                }
            }

            int half = (int) (double) (N/2);
            for (int i = 0; i < half; i++){
                for (int j = 0; j < N; j++){
                    if (arr[i][j] != arr[N-i-1][N-j-1]){
                        K--;
                    }
                    arr[i][j] = -1;
                    arr[N-i-1][N-j-1] = -1;
                }
            }
            if (N%2 == 1){
                for (int i = 0; i < half; i++){
                    if (arr[half][i] != arr[half][N-i-1]){
                        K--;
                    }
                    arr[half][i] = -1;
                    arr[half][N-i-1] = -1;
                }
                System.out.println(K >= 0?"YES":"NO");
                continue;
            }
            System.out.println(K%2== 0 && K >= 0 ?"YES":"NO");
        }
    }
}
