package go_euler

import (
	"github.com/stretchr/testify/assert"
	"go_euler/lib"
	"testing"
)

func Test_IsPalindrome(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.IsPalindrome("abcba"),
		true,
		"IsPalindrome library is not working",
	)

	assert.Equal(
		go_euler.IsPalindrome("1000"),
		false,
		"IsPalindrome library is not working",
	)

	assert.Equal(
		go_euler.IsPalindrome("10001"),
		true,
		"IsPalindrome library is not working",
	)
}
