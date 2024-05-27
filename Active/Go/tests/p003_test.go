package go_euler

import (
	"github.com/stretchr/testify/assert"
	"go_euler/solutions"
	"testing"
)

func Test_003(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.Problem_003(2),
		2,
		"Wrong solution for problem number 3",
	)

	assert.Equal(
		go_euler.Problem_003(10),
		5,
		"Wrong solution for problem number 3",
	)

	assert.Equal(
		go_euler.Problem_003(13195),
		29,
		"Wrong solution for problem number 3",
	)

	assert.Equal(
		go_euler.Problem_003(600_851_475_143),
		6857,
		"Wrong solution for problem number 2",
	)
}
