import java.util.*;

// two pointer algorithm
public class code26 {
    public static void solution(int [] arr1, int [] arr2){
        ArrayList<Integer> result = new ArrayList<>();
        int p1 =0, p2 = 0, n = arr1.length, m = arr2.length;
        while(p1 < n && p2 < m){
            if(arr1[p1] < arr2[p2]) result.add(arr1[p1++]);
            else result.add(arr2[p2++]);
        }
        while(p1 < n) result.add(arr1[p1++]);
        while(p2 < m) result.add(arr2[p2++]);

        for(int x : result) System.out.print(x + " ");
    }
//    public static void solution(int [] arr1, int [] arr2){
//        int index =0;
//        int[] arr = new int[arr1.length + arr2.length];
//        for(int i : arr1) arr[index++] = i;
//        for(int j : arr2) arr[index++] = j;
//        Arrays.sort(arr);
//
//        for(int x : arr)
//            System.out.print(x + " ");
//    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int [] array1 = new int [N];
        for(int i =0; i < N; i++){
            int tmp = scanner.nextInt();
            array1[i] = tmp;
        }
        int M = scanner.nextInt();
        int [] array2 = new int[M];
        for(int i =0; i <M; i++){
            int tmp = scanner.nextInt();
            array2[i] = tmp;
        }
        solution(array1, array2);
    }
}
