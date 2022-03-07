import java.util.*;

public class code36 {

    static class Descending implements Comparator<Integer>{
        @Override
        public int compare(Integer o1, Integer o2) {
            return o2.compareTo(o1);
        }
    }

    public static void solution(int [] arr, int n, int k){
        TreeSet<Integer> set = new TreeSet<Integer>(new Descending());

        //TreeSet<Integer> mySet = new TreeSet<Integer>(Collections.reverseOrder();
        for(int i =0; i < n-2; i++)
            for(int j =i+1; j< n-1; j++)
                for(int l =j+1; l < n; l++){
                    int tmp = arr[i] + arr[j] + arr[l];
                    set.add(tmp);
                }

        int cnt = 0;
        int tmp = -1;
        for(Integer x : set){
            if(cnt == k-1){
                tmp = x;
                break;
            }
            cnt++;
        }

        System.out.println(tmp);
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int K = s.nextInt();
        int [] arr = new int [N];
        for(int i =0; i < N; i++)
            arr[i] = s.nextInt();
        solution(arr, N, K);
    }
}
