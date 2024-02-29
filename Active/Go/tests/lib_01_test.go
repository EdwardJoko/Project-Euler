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

func Test_Generate_Smallest_N_Digit(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.Generate_Smallest_N_Digit(2),
		10,
		"Generate_Smallest_N_Digit library is not working",
	)

	assert.Equal(
		go_euler.Generate_Smallest_N_Digit(3),
		100,
		"Generate_Smallest_N_Digit library is not working",
	)
	
	assert.Equal(
		go_euler.Generate_Smallest_N_Digit(4),
		1000,
		"Generate_Smallest_N_Digit library is not working",
	)
}

func Test_Generate_Biggest_N_Digit(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.Generate_Biggest_N_Digit(2),
		99,
		"Generate_Biggest_N_Digit library is not working",
	)

	assert.Equal(
		go_euler.Generate_Biggest_N_Digit(3),
		999,
		"Generate_Biggest_N_Digit library is not working",
	)
	
	assert.Equal(
		go_euler.Generate_Biggest_N_Digit(4),
		9999,
		"Generate_Biggest_N_Digit library is not working",
	)
}

func Test_IsPrime(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.IsPrime(2),
		true,
		"IsPrime library is not working",
	)

	assert.Equal(
		go_euler.IsPrime(3),
		true,
		"IsPrime library is not working",
	)
	
	assert.Equal(
		go_euler.IsPrime(4),
		false,
		"IsPrime library is not working",
	)

	assert.Equal(
		go_euler.IsPrime(5),
		true,
		"IsPrime library is not working",
	)
}
