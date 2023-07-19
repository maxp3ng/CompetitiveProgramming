// https://codeforces.com/contest/1829/problem/B
// unsolved
// comments:

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class BlankSpace{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 0; i < T; i++){
            int N = sc.nextInt();
            int chain = 0;
            int highest = 0;
            for (int j =0; j < N; j++){
                chain = sc.nextInt() == 0 ?  chain + 1 : 0;
                highest = Math.max(highest, chain);
            }
            System.out.println(highest);
        }


    }
}

