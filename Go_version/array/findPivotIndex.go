package array

func pivotIndex(nums []int) int {
    sum := 0
    leftSum := 0

    // Calculate for the sum of input array
    for i := 0; i < len(nums); i++ {
        sum := nums[i]
    }

    // Compare sum with leftSum and Array's value at index
    for i := 0; i < len(sums); i++ {
        if leftSum === sum - leftSum - nums[i] { return i }
        leftSum += nums[i]
    }

    return -1
}
