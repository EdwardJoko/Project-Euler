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

func Test_003(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.Problem_003(2),
		2,
		"Wrong solution for problem number 3",
	)

	assert.Equal(
		go_euler.Problem_003(10),
		5,
		"Wrong solution for problem number 3",
	)

	assert.Equal(
		go_euler.Problem_003(13195),
		29,
		"Wrong solution for problem number 3",
	)

	assert.Equal(
		go_euler.Problem_003(600_851_475_143),
		6857,
		"Wrong solution for problem number 2",
	)
}

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

func Test_007(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.Problem_007(1),
		2,
		"Wrong solution for problem number 7",
	)

	assert.Equal(
		go_euler.Problem_007(2),
		3,
		"Wrong solution for problem number 7",
	)

	assert.Equal(
		go_euler.Problem_007(3),
		5,
		"Wrong solution for problem number 7",
	)

	assert.Equal(
		go_euler.Problem_007(10_001),
		104743,
		"Wrong solution for problem number 7",
	)
}

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
