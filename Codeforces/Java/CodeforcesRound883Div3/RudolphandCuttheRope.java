// https://codeforces.com/contest/1846/problem/A
// solved 7/7/23
// comments: I GOT IT ENTIRELY EWRONG AND WASTED 15 MINS

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class RudolphandCuttheRope{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int k = 0; k < T; k++){
            int N = sc.nextInt();
            int count = 0;
            for (int i=0; i<N; i++){
                int a = sc.nextInt();
                int b = sc.nextInt();
                if (a - b > 0){ count++;}
            }

            System.out.println(count   );


//            int[] a = new int[N];
//            for (int i=0; i<N; i++) {
//                a[i] = sc.nextInt();
//            }
//            int[] b = new int[N];
//            for (int i=0; i<N; i++) {
//                b[i] = sc.nextInt();
//            }
//
//            int holdingVal = Integer.MIN_VALUE;
//            for (int i=0; i<N; i++){
//                if (holdingVal < a[i] - b[i]){
//                    holdingVal = a[i] - b[i];
//                }
//            }
//
//            int count = 0;
//            for (int i=0; i<N; i++){
//                if (a[i] >= holdingVal){ count++; }
//            }
//            System.out.println(holdingVal);
//            System.out.println(count);
        }
    }
}


