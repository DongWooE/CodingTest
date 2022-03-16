import java.util.*;

public class pizza {

    static int n;
    static int m;
    static ArrayList<Pos> pizza = new ArrayList<>();
    static ArrayList<Pos> house = new ArrayList<>();
    static ArrayList<Pos> selectedPizza = new ArrayList<>();
    static int [] visited;
    static int max = 1000000;

    static class Pos{
        int x;
        int y;

        Pos(int x,int y){
            this.x = x;
            this.y = y;
        }
    }

    static void combination(int L, int start){
        if(L == m){
            for(int i =0; i < pizza.size(); i++)
                if(visited[i] == 1) selectedPizza.add(pizza.get(i));
            calcDistance();
        }
        else{
            for(int i = start; i < pizza.size(); i++){
                    visited[i] = 1;
                    selectedPizza.add(pizza.get(i));
                    combination(L+1, i+1);
                    visited[i] = 0;
            }
        }
    }

    static void calcDistance(){
        int d = 0;
        for(Pos h : house){
            int minD= 1000000;
            for(Pos p : selectedPizza){
                int tmp = Math.abs(p.x - h.x) + Math.abs(p.y - h.y);
                minD = Math.min(tmp, minD);
            }
            d += minD;
        }
        max = Math.min(d, max);
        selectedPizza.clear();
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        m = scan.nextInt();

        for(int i =0; i < n; i++){
            for(int j =0; j < n; j++){
                int t = scan.nextInt();
                if(t == 1) house.add(new Pos(i,j));
                else if(t == 2) pizza.add(new Pos(i,j));
            }
        }

        visited = new int [pizza.size()];

        combination(0,0);

        System.out.println(max);
    }
}
