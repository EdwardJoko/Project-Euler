package go_euler

import (
	"github.com/stretchr/testify/assert"
	"go_euler/solutions"
	"testing"
)

func Test_008(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.Problem_008(4),
		5832,
		"Wrong solution for problem number 8",
	)

	assert.Equal(
		go_euler.Problem_008(13),
		23514624000,
		"Wrong solution for problem number 8",
	)
}
