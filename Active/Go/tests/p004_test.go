package go_euler

import (
	"github.com/stretchr/testify/assert"
	"go_euler/solutions"
	"testing"
)

func Test_004(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.Problem_004(2),
		"9009",
		"Wrong solution for problem number 4",
	)

	assert.Equal(
		go_euler.Problem_004(3),
		"906609",
		"Wrong solution for problem number 4",
	)

	assert.Equal(
		go_euler.Problem_004(4),
		"99000099",
		"Wrong solution for problem number 4",
	)
}
