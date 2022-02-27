import java.util.*;

public class code34 {
    public static void solution(int [] arr, int n, int k){

        ArrayList<Integer> answer = new ArrayList<>();

        HashMap<Integer, Integer> map = new HashMap<>();

        int rt = 0;
        for(; rt < k; rt++) map.put(arr[rt], map.getOrDefault(arr[rt], 0)+1);
        answer.add(map.size());

        for(int lt =0; rt < n; rt++){
            map.put(arr[rt], map.getOrDefault(arr[rt],0)+1);
            if(map.get(arr[lt]) > 1){
                map.put(arr[lt], map.get(arr[lt])-1);
            }
            else map.remove(arr[lt]);
            answer.add(map.size());
            lt++;
        }

        for(Integer x : answer)
            System.out.print(x + " ");

    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int K = s.nextInt();
        int [] arr = new int [N];
        for(int i =0; i <N; i++)
            arr[i] = s.nextInt();
        solution(arr, N, K);
    }
}
