// Source : https://leetcode.com/problems/sum-of-two-integers/
// Author : RQY
// Date   : 2016-07-07

/**********************************************************************************
 *
 * Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.
 *
 *
 *
 *
 **********************************************************************************/
 class Solution {
 public:
     int getSum(int a, int b) {
         // return a + b;
         int c = a ^ b;
         int d = (a & b)<<1;
         if(d == 0)
             return c;
         else
             return getSum(c, d);
     }
 };
