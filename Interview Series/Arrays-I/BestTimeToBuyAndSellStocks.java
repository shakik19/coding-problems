//? Source: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


public class BestTimeToBuyAndSellStocks {

    public static int maxProfit(int[] prices) {
        int max = 0, min = prices[0];
        for (int i = 1; i < prices.length; i++) {
            int cost = prices[i] - min;
            max = (cost > max) ? cost : max;
            min = (prices[i] < min) ? prices[i] : min;
        }
        return max;
    }
}
