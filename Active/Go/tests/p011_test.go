package go_euler

import (
	"github.com/stretchr/testify/assert"
	"go_euler/solutions"
	"testing"
)

func Test_011(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.Problem_011(4),
		70600674,
		"Wrong solution for problem number 11",
	)
}
