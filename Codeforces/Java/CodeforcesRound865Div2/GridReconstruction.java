// https://codeforces.com/contest/1816/problem/B
// unsolved
// comments:

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class GridReconstruction{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int k = 0; k < T; k++){
            int N = sc.nextInt();
            int twoN = 2*N;
            String line1 = String.valueOf(twoN - 1);
            for (int i = 1; i < twoN-1; i+=2){
                line1 += " " + String.valueOf(i);
            }
            String line2 = "";
            for (int i = 2; i < twoN-1; i+=2){
                line2 += String.valueOf(i) + " ";
            }
            line2 += String.valueOf(twoN);
            System.out.println(line1);
            System.out.println(line2);
        }
    }
}

