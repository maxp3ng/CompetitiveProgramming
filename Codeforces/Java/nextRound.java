// https://codeforces.com/problemset/problem/158/A
// unsolved
// comments:

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class nextRound{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        int[] arr = new int[N];

        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();
            if (i >= K && arr[i] < arr[K]){
                System.out.println(i);
                return;
            }
        }
        System.out.println(arr[0] > 0 ? N : 0);
    }
}

//17 14
//16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0