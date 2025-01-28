package go_euler

import (
	"github.com/stretchr/testify/assert"
	"go_euler/solutions"
	"testing"
)

func Test_012(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.Problem_012(5),
		28,
		"Wrong solution for problem number 12",
	)

	assert.Equal(
		go_euler.Problem_012(500),
		76576500,
		"Wrong solution for problem number 12",
	)
}
