import java.util.*;

public class code21 {
    public static void solution(int [] arr){
        Integer [] arr_sort = new Integer[arr.length];
        for(int i =0; i < arr.length; i++)
            arr_sort[i] = arr[i];

        Arrays.sort(arr_sort, Collections.reverseOrder());

        int result [] = new int[arr.length];
        for(int i =0; i < arr.length; i++){
            int tmp = arr[i];
            for(int j =0; j < arr.length; j++){
                if(tmp == arr_sort[j]){
                    result[i] = j+1;
                    break;
                }
            }
        }
        for(int x : result)
            System.out.print(x + " ");
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int [] arr = new int[N];
        for(int i =0; i < N; i++){
            int tmp = scanner.nextInt();
            arr[i] = tmp;
        }
        solution(arr);
    }
}
