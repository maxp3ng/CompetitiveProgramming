package CodeforcesRound869Div2;// https://codeforces.com/contest/1818/problem/A
// unsolved
// comments:

import java.io.*;
import java.util.Objects;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class Politics{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int j = 0; j < T; j++){
            int N = sc.nextInt();
            int K = sc.nextInt();
            String me = sc.next();
            int count = 1;
            for (int i = 1; i < N; i++){
                String compare = sc.next();
               if (Objects.equals(compare, me)) {
                   count++;
               }
            }
            System.out.println(count);
        }
    }
}

