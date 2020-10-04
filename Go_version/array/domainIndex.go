package array
// Largest number at least Twice of Others

func domaintIndex(nums []int) int {
    maxIndex := 0
    for i := 0; i < len(nums); i++ {
        if nums[i] > nums[maxIndex] {
            maxIndex = i
        }
    }

    for i := 0; i < len(nums); i++ {
        if maxIndex != i && 2 * nums[i] > nums[maxIndex] { return -1 }
    }

    return maxIndex
}

