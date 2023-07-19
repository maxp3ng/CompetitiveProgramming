//
// unsolved
// comments:

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;


public class FlatTable{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] a = new int[4];
        int allEqual = 0;
        for(int i=0; i<4; i++){
            a[i]=sc.nextInt();
            if(a[i] != a[0]){allEqual = i;}
        }
        if(allEqual==0){System.out.println(1);}
        int p = sc.nextInt();
        int diff = 3==allEqual?2:3;
        int ans = a[allEqual]==a[diff]?a[0]:a[allEqual];
        System.out.println((ans+p == a[diff] || ans-p == a[diff])?1:0);

    }
}


