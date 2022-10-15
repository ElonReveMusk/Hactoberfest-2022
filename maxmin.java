public class smalllarge {
    public static int maxmin(int n[]){
        int largest=Integer.MIN_VALUE;
        int smallest=Integer.MAX_VALUE;
        for(int i=0;i<n.length;i++){
            if(largest<n[i]){
                largest=n[i];

            }
            if(smallest>n[i]){
                smallest=n[i];
            }
        }
        System.out.println("smallest numbers are"+smallest);
        return largest;

    }
    public static void main(String[] args) {
        int n[]={5,7,8,4,9,1};
        System.out.println("largest number are"+maxmin(n));

    }
}
