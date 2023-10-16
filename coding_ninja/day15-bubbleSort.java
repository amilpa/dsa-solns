
public class Solution {
    public static void bubbleSort(int[] arr, int n) {
        //Your code goes here
        int temp;
        int flag;
        for(int i =0;i<n;i++){
            flag = 0;
            for(int j=0;j<n-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    flag = 1;
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
            if(flag == 0)
            {
                break;
            }
        }
    }

}