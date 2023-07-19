// https://codeforces.com/contest/1843/problem/B
// unsolved
// comments:

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class LongLong{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int k = 0; k < T; k++){
            int N = sc.nextInt();
            int[] a = new int[N];
            for(int i=0; i<N; i++){
               a[i] = sc.nextInt();
            }
            int sign = 0;
            int flips = 0;
            int total = 0;
            for(int i=0; i<N; i++){
                if(a[i]==0){
                    continue;
                }
                int currSign = a[i]>0?1:-1;
                if (currSign != sign) {
                    if (sign != 0) {flips++;}
                    sign = currSign;
                }
                total += Math.abs(a[i]);
            }
            int ret = 0;
            if (sign == 1){
                if (flips%2 == 0){
                    ret = flips/2;
                } else {
                    ret = (flips+1)/2;
                }
            }else {
                if (flips%2 == 0){
                    ret = (flips+2)/2;
                }else {
                    ret = (flips+1)/2;
                }
            }
            System.out.println(total + " " + ret);
        }
    }
}


