package go_euler

import (
	"github.com/stretchr/testify/assert"
	"go_euler/solutions"
	"testing"
)

func Test_009(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.Problem_009(12),
		60,
		"Wrong solution for problem number 9",
	)

	assert.Equal(
		go_euler.Problem_009(1000),
		31875000,
		"Wrong solution for problem number 9",
	)
}
