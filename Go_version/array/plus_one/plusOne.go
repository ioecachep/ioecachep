package plus_one

func plusOne(digits []int) []int {
    for i := len(digits) - 1; i >= 0; i-- {
        if digits[i] + 1 == 10 {
            digits[i] = 0
        } else {
            digits[i]++
            return digits
        }
    }

    return append([]int{ 1 }, digits...)
}
