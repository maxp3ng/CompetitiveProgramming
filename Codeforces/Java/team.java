// https://codeforces.com/problemset/problem/231/A
// solved 4/6/23
// comments: i hate type casting

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class team{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        scanner.nextLine();
        int count = 0;
        for (int i = 0; i < N; i++){
            String str = scanner.nextLine();
            if (Character.getNumericValue(str.charAt(0)) +  Character.getNumericValue(str.charAt(2)) + Character.getNumericValue(str.charAt(4)) >= 2){
                count++;
            }
        }
        System.out.println(count);
    }
}

