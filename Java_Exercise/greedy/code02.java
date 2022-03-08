/*
    2. 회의실 배정
 */

import java.util.*;

public class code67{

    public static class Time implements Comparable<Time>{
        private int open;
        private int close;
        public Time(int open, int close){
            this.open = open;
            this.close = close;
        }
        @Override
        public int compareTo(Time o) {
            if(o.close == this.close){
                return this.open - o.open;
            }
            else return this.close - o.close;
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        Time [] arr = new Time [N];

        for(int i =0; i < N; i++){
            int open = scan.nextInt();
            int close = scan.nextInt();
            Time t = new Time(open, close);
            arr[i] = t;
        }

        Arrays.sort(arr);

        int cnt = 1;
        Time before = arr[0];
        for(int i =1; i < N; i++){
            if(before.close <= arr[i].open){
                cnt++;
                before = arr[i];
            }
        }

        System.out.println(cnt);
    }
}