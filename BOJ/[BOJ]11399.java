import java.util.*;

public class bj11399 {

    static int [] arr;

    static void solution(){
        Arrays.sort(arr);
        int sum = 0, totalSum = 0;
        for(int i =0; i < arr.length; i++){
            sum += arr[i];
            totalSum += sum;
        }
        System.out.println(totalSum);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        arr = new int [N];
        for(int i =0; i < N; i++)
            arr[i] = sc.nextInt();
        solution();
    }
}
