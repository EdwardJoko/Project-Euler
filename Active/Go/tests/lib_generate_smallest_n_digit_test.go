package go_euler

import (
	"github.com/stretchr/testify/assert"
	"go_euler/lib"
	"testing"
)

func Test_Generate_Smallest_N_Digit(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.Generate_Smallest_N_Digit(2),
		10,
		"Generate_Smallest_N_Digit library is not working",
	)

	assert.Equal(
		go_euler.Generate_Smallest_N_Digit(3),
		100,
		"Generate_Smallest_N_Digit library is not working",
	)
	
	assert.Equal(
		go_euler.Generate_Smallest_N_Digit(4),
		1000,
		"Generate_Smallest_N_Digit library is not working",
	)
}
