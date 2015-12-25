public class Euclid {
    public static int gcd(int p, int q) {
        if(q == 0)
            return p;
        int r = p % q;
        gcd(q, r);
    } 

    public static void main(String[] args) {
        System.out.println(gcd(4149, 4538));
    }
}
