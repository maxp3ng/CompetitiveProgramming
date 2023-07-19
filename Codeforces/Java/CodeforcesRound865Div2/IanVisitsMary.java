// https://codeforces.com/contest/1816/problem/A
// unsolved
// comments: slope has to be int

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class IanVisitsMary{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int k = 0; k < T; k++) {
            double x = sc.nextInt();
            double y = sc.nextInt();
            if (Math.ceil((double)(y/x))==Math.floor((double)(y/x)) || Math.ceil((double)(x/y))==Math.floor((double)(x/y))) {
                System.out.println(2);
                System.out.println((int)x + " " + (int)(y-1));
            }
            else {
                System.out.println(1);
            }
            System.out.println((int)x + " " + (int)y);
            continue;
        }
    }
}

