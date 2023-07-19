// https://codeforces.com/contest/1843/problem/0
// solved
// comments: spent too long

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class SashaAndArrayColoring{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int k = 0; k < T; k++){
            int N = sc.nextInt();
            int[] arr = new int[N];
            for (int i=0; i<N; i++){
               arr[i] = sc.nextInt();
            }
            for (int i = 0; i < arr.length - 1; i++)
            {
                int index = i;
                for (int j = i + 1; j < arr.length; j++){
                    if (arr[j] < arr[index]){
                        index = j;//searching for lowest index
                    }
                }
                int smallerNumber = arr[index];
                arr[index] = arr[i];
                arr[i] = smallerNumber;
            }
            int half = arr.length%2==1? (arr.length-1)/2 : arr.length/2;
            int count = 0;
            for (int i=0; i<half; i++){
                count -= arr[i];
            }
            for (int i=1; i<=half; i++){
                count += arr[N-i];
            }
            System.out.println(count);
        }
    }
}


