import java.util.*;

public class code56 {
    private int totalWeight;
    private int maxWeight;
    private int totalLength;

    private void DFS(int weight, int cur, int [] arr){
        if(weight > totalWeight) return;
        if(cur == totalLength){
            maxWeight = Math.max(maxWeight, weight);
        }
        else{
            DFS(weight+arr[cur], cur+1, arr);
            DFS(weight, cur+1, arr);
        }
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        code56 c = new code56();
        c.totalWeight = scan.nextInt();
        c.totalLength = scan.nextInt();
        int [] arr = new int [c.totalLength];
        for(int i =0; i <c.totalLength; i++)
            arr[i] = scan.nextInt();
        c.DFS(0, 0, arr);
        System.out.println(c.maxWeight);
    }
}
