// https://www.codechef.com/JAN21C/problems/WIPL

import java.util.*;
import java.lang.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner input = new Scanner(System.in);

        int t = input.nextInt();

        for (int w = 0; w < t; w++) {
            int n = input.nextInt();
            int Points[] = new int[n];
            LinkedHashSet<Integer> points2 = new LinkedHashSet<Integer>();
            int k = input.nextInt();
            for (int i = 0; i < n; i++)
                Points[i] = input.nextInt();

            Arrays.sort(Points);

            points2.add(Points[n - 1]);
            int total = Points[n - 1];
            int Billlo = -1;

            for (int i = n - 2; i >= 0; i--) {

                LinkedHashSet<Integer> points3 = new LinkedHashSet<Integer>();

                total = total + Points[i];

                Iterator iterat = points2.iterator();

                while (iterat.hasNext()) {

                    int p = (int) (iterat.next());
                    points3.add(p);
                    points3.add(Points[i]);
                    points3.add(p + Points[i]);
                    if (((p + Points[i]) >= k) && ((total - p - Points[i]) >= k)) {

                        Billlo = n - i;

                        break;
                    }
                    if (((Points[i]) >= k) && ((total - Points[i]) >= k)) {

                        Billlo = n - i;
                        break;
                    }
                }

                if (Billlo != -1)  break;
                points2 = points3;
            }
            System.out.println(Billlo);

        }
    }
}
