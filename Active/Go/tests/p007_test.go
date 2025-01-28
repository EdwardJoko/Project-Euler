package go_euler

import (
	"github.com/stretchr/testify/assert"
	"go_euler/solutions"
	"testing"
)

func Test_007(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.Problem_007(1),
		2,
		"Wrong solution for problem number 7",
	)

	assert.Equal(
		go_euler.Problem_007(2),
		3,
		"Wrong solution for problem number 7",
	)

	assert.Equal(
		go_euler.Problem_007(3),
		5,
		"Wrong solution for problem number 7",
	)

	assert.Equal(
		go_euler.Problem_007(10_001),
		104743,
		"Wrong solution for problem number 7",
	)
}
