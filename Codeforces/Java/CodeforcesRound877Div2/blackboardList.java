// https://codeforces.com/contest/1838/problem/0
// unsolved
// comments: stg

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class blackboardList{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int k = 0; k < T; k++){
            int N = sc.nextInt();
            int[] a = new int[N];
            for (int i=0; i<N; i++){
               a[i] = sc.nextInt();
            }
            int min = Integer.MAX_VALUE;
            int minIndex = 0;
            for (int i=0; i<N; i++){
                if (a[i] < 0 && Math.abs(a[i]) < min){
                    min = Math.abs(a[i]);
                    minIndex = i;
                } else if (a[i] != 0 && a[i] < min){
                    min = a[i];
                    minIndex = i;
                }
           }
            System.out.println(a[minIndex]);
        }
    }
}


