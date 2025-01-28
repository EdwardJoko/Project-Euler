package go_euler

import (
	"github.com/stretchr/testify/assert"
	"go_euler/solutions"
	"testing"
)

func Test_006(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.Problem_006(10),
		2640,
		"Wrong solution for problem number 6",
	)

	assert.Equal(
		go_euler.Problem_006(100),
		25164150,
		"Wrong solution for problem number 6",
	)
}
