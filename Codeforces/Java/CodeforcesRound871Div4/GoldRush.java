// https://codeforces.com/contest/1829/problem/D
// unsolved
// comments:

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class GoldRush{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        cases:
        for (int i = 0; i < T; i++){
            int N = sc.nextInt();
            int M = sc.nextInt();

            if (M > N){
                System.out.println("NO");
                continue cases;
            }
            if ((N/M) % 3 == 0 || N == M || N == 0){
                System.out.println("YES");
                continue cases;
            }
            int count = 0;
            while (M % 2 == 0){
                M /= 2;
                count++;
                if (N/M % 3 == 0 && Math.log((double) N /M)/Math.log(3) >= count){
                    System.out.println("YES");
                    continue cases;
                }
            }
            System.out.println("NO");
        }
    }
}

