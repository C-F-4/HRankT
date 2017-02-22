/*
Drone Flight Planner

You are planning the amount of fuel need to complete a drone flight.

To fly higher, the drone burns 1 liter of fuel per feet.

However, flying lower charges the drone with the amount of energy equivalent to 1 liter of fuel for every feet.

Flying sideways takes no energy (only flying up and down takes/charges energy).

Given an array of 3D coordinates named route, find the minimal amount of fuel the drone would need to fly through this route.

Explain and code the most efficient solution possible, with the minimal number of actions and variables.

Example:

    Completing the route 
    [ {x: 0, y: 2, z:10}, 
      {x: 3, y: 5, z: 0}, 
      {x: 9, y:20, z: 6}, 
      {x:10, y:12, z:15}, 
      {x:10, y:10, z: 8}  ] 
  requires a minimum of 5 liters of fuel.
 */

import java.util.*;

class coords {

    public Integer x, y, z;

    public coords(Integer x, Integer y, Integer z) {
        this.x = x;
        this.y = y;
        this.z = z;
    }
}

public class Solution {

    static Integer getMinFuel(coords[] routes) {
        if (routes == null || routes.length == 0 || routes.length == 1) {
            return 0;
        }
        // In X-Y plane drone can move freely.
        // So try to find minimum fuel required to move on z-axis
        Integer peek = 0;
        for (Integer i = 0; i < routes.length; i++) {
            peek = (peek >= routes[i].z)?(peek):(routes[i].z);
        }
        return (peek - routes[0].z);
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Integer size = in.nextInt();
        coords[] routes = new coords[size];
        for (Integer i = 0; i < size; i++) {
            routes[i] = new coords(in.nextInt(), in.nextInt(), in.nextInt());
        }
        // Print minimum amount of fuel required
        System.out.println(getMinFuel(routes));
    }
}
