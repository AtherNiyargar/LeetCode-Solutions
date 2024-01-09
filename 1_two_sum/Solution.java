public class Solution {
    static int[] twoSum(int[] nums, int target) {
        int[] result = new int[2];
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[i] + nums[j] == target) {
                    result[0] = i;
                    result[1] = j;
                    break;
                }
            }
        }
        return result;
    }

    public static void main(String[] args) {
        int[] arr = new int[5];
        for (int i = 1; i <= 5; i++) {
            arr[i - 1] = i;
        }
        int[] result = twoSum(arr, 9);
        for (int item : result) {
            System.out.println(item);
        }
    }
}
