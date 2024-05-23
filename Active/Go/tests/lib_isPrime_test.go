package go_euler

import (
	"github.com/stretchr/testify/assert"
	"go_euler/lib"
	"testing"
)

func Test_IsPrime(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.IsPrime(2),
		true,
		"IsPrime library is not working",
	)

	assert.Equal(
		go_euler.IsPrime(3),
		true,
		"IsPrime library is not working",
	)
	
	assert.Equal(
		go_euler.IsPrime(4),
		false,
		"IsPrime library is not working",
	)

	assert.Equal(
		go_euler.IsPrime(5),
		true,
		"IsPrime library is not working",
	)
}
