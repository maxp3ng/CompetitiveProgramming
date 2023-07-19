// https://codeforces.com/contest/1829/problem/A
// unsolved
// comments:

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class LoveStory{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int i = 0; i < T; i++){
           String s = sc.next();
           String compare = "codeforces";
           int n = 0;
           for (int j = 0; j < s.length(); j++){
                if (s.charAt(j) != compare.charAt(j)){
                    n++;
               }
           }
           System.out.println(n);
        }

    }
}

