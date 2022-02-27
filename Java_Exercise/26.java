import java.util.*;

public class code27 {
    public static void solution(int [] arr1, int [] arr2){
        ArrayList<Integer> result = new ArrayList<>();
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        int p1 = 0, p2 = 0;
        while(p1 < arr1.length && p2 < arr2.length){
            if(arr1[p1]  == arr2[p2]){
                result.add(arr1[p1]);
                p1++;
                p2++;
            }
            else if(arr1[p1] < arr2[p2]) p1++;
            else p2++;
        }
        for(int x : result)
            System.out.print(x + " ");
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int [] arr1 = new int [N];
        for(int i =0; i < N; i++)
            arr1[i] = scanner.nextInt();
        int M = scanner.nextInt();
        int [] arr2 = new int [M];
        for(int i =0; i < M; i++)
            arr2[i] = scanner.nextInt();
        solution(arr1, arr2);
    }
}
