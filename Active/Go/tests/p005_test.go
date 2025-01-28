package go_euler

import (
	"github.com/stretchr/testify/assert"
	"go_euler/solutions"
	"testing"
)

func Test_005(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.Problem_005(2),
		2,
		"Wrong solution for problem number 5",
	)

	assert.Equal(
		go_euler.Problem_005(3),
		6,
		"Wrong solution for problem number 5",
	)

	assert.Equal(
		go_euler.Problem_005(4),
		12,
		"Wrong solution for problem number 5",
	)

	assert.Equal(
		go_euler.Problem_005(10),
		2520,
		"Wrong solution for problem number 5",
	)

	assert.Equal(
		go_euler.Problem_005(20),
		232792560,
		"Wrong solution for problem number 5",
	)
}
