// 4/ something idk this was the first one i did so

import java.util.Scanner;


public class FactoriseNplusM {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 0; i < T; i++) {
            int N = sc.nextInt();
            if (N == 2){
                System.out.println(7);
            } else if (N == 3) {
                System.out.println(11);
            }
            else {
                System.out.println(3);
            }
        }

    }
}
