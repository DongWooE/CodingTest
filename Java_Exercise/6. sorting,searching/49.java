0import java.util.*;

public class code50 {

    public static void solution(int[] arr, int n){

        int [] tmp = arr.clone();
        Arrays.sort(tmp);
        ArrayList<Integer> result = new ArrayList<>();


        for(int i =0; i < n; i++){
            if(tmp[i] != arr[i]) result.add(i+1);
        }

        for(int i : result)
            System.out.print(i + " ");
    }

//    public static void solution(int[] arr, int n){
//        int chul =-1, oppo = -1;
//        for(int i = 1; i < n; i++){
//            if(arr[i] < arr[i-1]){
//                if(chul == -1) chul = i;
//                else oppo = i+1;
//            }
//        }
//        if(oppo == -1){
//            oppo = chul+1;
//            int cur = arr[chul-1];
//            for(int i = chul; i >=0; i--){
//                if(cur > arr[i-1]){
//                    chul = i+1;
//                    break;
//                }
//            }
//        }
//
//        System.out.println(chul + " " + oppo);
//    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int [] arr = new int [N];
        for(int i =0; i < N; i++){
            arr[i] = s.nextInt();
        }
        solution(arr, N);
    }
}
