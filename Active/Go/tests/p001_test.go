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
