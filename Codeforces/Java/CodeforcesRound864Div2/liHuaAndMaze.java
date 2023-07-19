// https://codeforces.com/contest/1797/problem/A
// solved 4/8/23
// comments: gonnna be fr just gonna try to solve this one problem

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class liHuaAndMaze{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int k = 0; k < T; k++){
            int N = sc.nextInt();
            int M = sc.nextInt();

            int x1 = sc.nextInt();
            int y1 = sc.nextInt();
            int x2 = sc.nextInt();
            int y2 = sc.nextInt();


            int xNumberOfEdges = (x1 == 1? 1:0) + (x1 == N? 1:0) + (y1 == 1? 1:0) + (y1 == M? 1:0);
            int yNumberOfEdges = (x2 == 1? 1:0) + (x2 == N? 1:0) + (y2 == 1? 1:0) + (y2 == M? 1:0);
            int edges = Math.max(xNumberOfEdges, yNumberOfEdges);
            System.out.println(4-edges);
        }
    }
}

//3
//4 4
//2 2 3 3
//6 7
//1 1 2 3
//9 9
//5 1 3 6