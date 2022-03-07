package greedy;

import java.util.*;

/*
*   1. 씨름 선수
 */

public class code01 {

    public static class Pair implements Comparable<Pair>{
        private int height;
        private int weight;
        public Pair(int height, int weight){
            this.height = height;
            this.weight = weight;
        }

        @Override
        public int compareTo(Pair p) {
            return p.height - this.height;
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();

        ArrayList<Pair> arr = new ArrayList<>();

        for(int i =0; i < N; i++){
            int h = scan.nextInt();
            int w = scan.nextInt();
            Pair p = new Pair(h,w);
            arr.add(p);
        }

        Collections.sort(arr);

        int maxWeight = arr.get(0).weight;
        int cnt =1;
        for(Pair p : arr){
            if(p.weight > maxWeight){
                cnt++;
                maxWeight = p.weight;
            }
        }

        System.out.println(cnt);
    }
}
