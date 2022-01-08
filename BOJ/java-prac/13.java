import java.util.*;

public class code13 {
    public static void solution(int [] array){
        ArrayList<Integer> list = new ArrayList<>();
        int last = Integer.MIN_VALUE;
        for(int i : array){
            if(i > last){
                System.out.print(i + " ");
            }
            last = i;
        }
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int [] array = new int[N];
        for(int i =0; i < N; i++){
            int tmp = scan.nextInt();
            array[i] = tmp;
        }
        solution(array);
    }
}
