// https://codeforces.com/contest/1829/problem/C
// unsolved
// comments:

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class MrPerfectlyFine {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int k = 0; k < T; k++) {
            int N = sc.nextInt();
            int oo, oz, zo;
            oz = zo = oo = Integer.MAX_VALUE/2-1;
            boolean lazyflag1= false;
            boolean lazyflag2 = false;
            for (int i = 0; i < N; i++) {
                int V = sc.nextInt();
                int type = sc.nextInt();
                if (type == 11) {
                    oo = Math.min(V, oo);
                    lazyflag1 = lazyflag2 = true;
                }
                if (type == 1) {
                    zo = Math.min(V, zo);
                    lazyflag2 = true;
                }
                if (type == 10) {
                    oz = Math.min(V, oz);
                    lazyflag1 = true;
                }
            }
            if (lazyflag1 && lazyflag2) {
                System.out.println(Math.min(oz + zo, oo));
            } else {
                System.out.println(-1);
            }
        }

    }
}