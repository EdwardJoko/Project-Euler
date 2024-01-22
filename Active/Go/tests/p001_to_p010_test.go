package go_euler

import (
	"github.com/stretchr/testify/assert"
	"go_euler/solutions"
	"testing"
)

func Test_001(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.Problem_001(10),
		23,
		"Wrong solution for problem number 1",
	)

	assert.Equal(
		go_euler.Problem_001(1000),
		233168,
		"Wrong solution for problem number 1",
	)
}

func Test_002(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.Problem_002(3),
		2,
		"Wrong solution for problem number 2",
	)

	assert.Equal(
		go_euler.Problem_002(4_000_000),
		4613732,
		"Wrong solution for problem number 2",
	)
}
