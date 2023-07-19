// https://codeforces.com/contest/1846/problem/B
// solved 7/7/23
// comments: extremely brute force solution go brrr

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class RudolphandTicTacToe{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int k = 0; k < T; k++){
           char[][] a = new char[3][3] ;
           for (int i=0; i<3; i++){
               String s = sc.next();
               for (int j=0; j<3; j++){
                   a[i][j] = s.charAt(j);
               }
           }

            int b = 0;
           if (a[0][0] == a[1][0] && a[1][0] == a[2][0] && a[0][0] != '.'){
               System.out.println(a[0][0]);
               continue;
           }
           if(a[0][1] == a[1][1] && a[1][1] == a[2][1] && a[0][1] != '.'){
               System.out.println(a[0][1]);
               continue;
           }
          if(a[0][2] == a[1][2] && a[1][2] == a[2][2] && a[0][2] != '.'){
            System.out.println(a[0][2]);
            continue;
          }
          if (a[0][0] == a[0][1] && a[0][1] == a[0][2] && a[0][0] != '.'){
            System.out.println(a[0][0]);
            continue;
          }
            if (a[1][0] == a[1][1] && a[1][1] == a[1][2] && a[1][0] != '.'){
                System.out.println(a[1][0]);
                continue;
            }
            if (a[2][0] == a[2][1] && a[2][1] == a[2][2] && a[2][0] != '.'){
                System.out.println(a[2][0]);
                continue;
            }
            if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0] != '.'){
                System.out.println(a[0][0]);
                continue;
            }
            if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[0][2] != '.'){
                System.out.println(a[0][2]);
                continue;
            }
            System.out.println("DRAW");

        }
    }
}


