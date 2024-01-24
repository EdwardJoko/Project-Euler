package go_euler

// check if a certain string is a palindrome or not,
// for example "aa" is a palindrome and "ab" is not
func IsPalindrome(str string) bool {
	str_length := len(str)
	for i := 0; i < str_length/2; i++ {
		if string(str[i]) != string(str[str_length-i-1]) {
			return false
		}
	}
	return true
}
