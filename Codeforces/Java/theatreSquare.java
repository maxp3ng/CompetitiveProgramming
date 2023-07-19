// https://codeforces.com/problemset/problem/1/A
// solved 4/6/23
// comments: no way the first problem ever! doing them in order of most done is a good idea but i feel like i should skip ahead 5 at a time or smth because it's going to take wayy too long to do every single codeforces problem in existence

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class theatreSquare{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long N = scanner.nextLong();
        long M = scanner.nextLong();
        long A = scanner.nextLong();
        System.out.println( (long)(Math.ceil((double) N / A) * Math.ceil((double) M / A)));
    }


}

