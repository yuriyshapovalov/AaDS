public class Euclid {
    public static int gcd(int p, int q) {
        if(q == 0)
            return p;
        int r = p % q;
        return gcd(q, r);
    } 

    public static void main(String[] args) {
        System.out.println("4149- 438: " + gcd(4146, 438));
    }
}
