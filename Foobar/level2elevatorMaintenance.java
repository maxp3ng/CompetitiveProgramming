//import java.util.Arrays;
//
//public class level2elevatorMaintenance{
//    public static String[] solution(String[] l) {
//        l = sort(l,0,-1);
//        return l;
//    }
//    public static String[] sort(String[] l, int layer, int digit) {
//
//
//        for (int i = 0; i < l.length; i++) {
//            for (int j = 0; j < l.length-1-i; j++) {
//                if(l[j].charAt(sortValue)>l[j+1].charAt(sortValue))
//                {
//                    String temp=l[j];
//                    l[j]=l[j+1];
//                    l[j+1]=temp;
//                }
//            }
//        }
//        return l;
//    }
//    public static void main(String[] args) {
//        System.out.println(Arrays.toString(solution(new String[]{"1.11", "2.0.0", "1.2", "2", "0.1", "1.2.1", "1.1.1", "2.0"})));
//        System.out.println(Arrays.toString(solution(new String[]{"1.1.2", "1.0", "1.3.3", "1.0.12", "1.0.2"})));
//    }
//}