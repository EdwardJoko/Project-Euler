package go_euler

import (
	"github.com/stretchr/testify/assert"
	"go_euler/solutions"
	"testing"
)

func Test_010(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.Problem_010(0),
		0,
		"Wrong solution for problem number 10",
	)

	assert.Equal(
		go_euler.Problem_010(2),
		2,
		"Wrong solution for problem number 10",
	)


	assert.Equal(
		go_euler.Problem_010(10),
		17,
		"Wrong solution for problem number 10",
	)

	assert.Equal(
		go_euler.Problem_010(2_000_000),
		142913828922,
		"Wrong solution for problem number 10",
	)
}
