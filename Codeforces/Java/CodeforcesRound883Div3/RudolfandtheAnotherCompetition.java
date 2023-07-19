// https://codeforces.com/contest/1846/problem/C
// unsolved
// comments:

import java.io.*;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.lang.Math;
import java.util.Arrays;



public class RudolfandtheAnotherCompetition{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int k = 0; k < T; k++){
            int N = sc.nextInt(); // participants
            int M = sc.nextInt();//problems
            int H = sc.nextInt(); // duration

            int[][] pointsPenalty = new int[N][2];
            for (int i=0; i<N; i++){
                int[] times = new int[M];
                for (int j=0; j<M; j++){
                    times[j] = sc.nextInt();
                }
                Arrays.sort(times);
                int[] timeItTookToFinishEach = new int[M] ;
                timeItTookToFinishEach[0] = times[0];
                for (int j=1; j<M; j++){
                    timeItTookToFinishEach[j] = times[j] + timeItTookToFinishEach[j-1];
                }
                int sumPenalty = timeItTookToFinishEach[0];
                int sumPoints = 0;
                int timeElasped = 0;
                for (int j=1; j<M; j++){
                    timeElasped += times[j];
                    if (timeElasped > H){
                       break;
                    }
                    sumPenalty += timeItTookToFinishEach[j];
                    sumPoints++;
                }
                pointsPenalty[i][0] = sumPoints;
                pointsPenalty[i][1] = sumPenalty;
//                int sumPenalty = 0;
//                int sumPoints = 0;
//                int timeElasped = 0;
//                for (int j=0; j<M; j++){
//                    timeElasped += times[j];
//                    if (timeElasped > H){
//                       break;
//                    }
//                    sumPenalty = timeElasped + timeElasped - times[j];
//                    sumPoints++;
//                }
//                pointsPenalty[i][0] = sumPoints;
//                pointsPenalty[i][1] = sumPenalty;
            }
            int rudolfBeat = 0;
            int rudolfPoints = pointsPenalty[0][0];
            int rudolfPenalty = pointsPenalty[0][1];
            for (int j=1; j<N; j++) {
                if (rudolfPoints == pointsPenalty[j][0]) {
                    rudolfBeat += rudolfPenalty <= pointsPenalty[j][1]?1:0;
                }
                else {
                    rudolfBeat += rudolfPoints >= pointsPenalty[j][0]?1:0;
                }
            }
            System.out.println(N - rudolfBeat);

        }
    }
}


