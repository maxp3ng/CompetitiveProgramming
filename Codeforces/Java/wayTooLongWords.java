// https://codeforces.com/problemset/problem/71/A
// solved 4/6/23
// comments: still getting used to returning to daily grindset | the show goes on

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class wayTooLongWords{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();

        for (int i = 0; i < N; i++){
           String str = scanner.next();
           if (str.length() > 10) {
               System.out.println("" + str.charAt(0) + (str.length()-2) + str.charAt(str.length()-1));
           } else {
               System.out.println(str);
           }
        }
    }
}

