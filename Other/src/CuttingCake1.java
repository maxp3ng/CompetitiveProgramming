//
// unsolved
// comments:

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class CuttingCake1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();


        int N = s.length();
        boolean flag = true;
        for(int i=1; i<N; i++){
            if (s.charAt(i) != s.charAt(0)) {
                flag = false;
                break;
            }
        }
        if (flag) {
            System.out.println(N);
            return;
        }


        for (int i=2; i<N/2; i++){
            if (N%i == 0){
                flag = true;
                String first =  s.substring(0,i-1);
                for (int j=i; j<N; j+=i){
                    if (!first.equals(s.substring(j, j + i - 1))) {
                        flag = false;
                        break;
                    }
                }
                if (flag){System.out.println(N/i); return;}
            }
        }
        System.out.println(1) ;
    }
}


