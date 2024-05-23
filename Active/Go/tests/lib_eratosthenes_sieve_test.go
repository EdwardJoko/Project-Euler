package go_euler

import (
	"github.com/stretchr/testify/assert"
	"go_euler/lib"
	"testing"
)

func Test_Eratosthenes_Sieve(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.Eratosthenes_Sieve(0),
		[]int{0},
		"Eratosthenes_Sieve library is not working",
	)

	assert.Equal(
		go_euler.Eratosthenes_Sieve(3),
		[]int{0, 0, 2, 3},
		"Eratosthenes_Sieve library is not working",
	)

	assert.Equal(
		go_euler.Eratosthenes_Sieve(5),
		[]int{0, 0, 2, 3, 0, 5},
		"Eratosthenes_Sieve library is not working",
	)

	assert.Equal(
		go_euler.Eratosthenes_Sieve(10),
		[]int{0, 0, 2, 3, 0, 5, 0, 7, 0, 0, 0},
		"Eratosthenes_Sieve library is not working",
	)
}
