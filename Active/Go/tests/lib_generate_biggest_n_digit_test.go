package go_euler

import (
	"github.com/stretchr/testify/assert"
	"go_euler/lib"
	"testing"
)

func Test_Generate_Biggest_N_Digit(t *testing.T) {
	assert := assert.New(t)

	assert.Equal(
		go_euler.Generate_Biggest_N_Digit(2),
		99,
		"Generate_Biggest_N_Digit library is not working",
	)

	assert.Equal(
		go_euler.Generate_Biggest_N_Digit(3),
		999,
		"Generate_Biggest_N_Digit library is not working",
	)
	
	assert.Equal(
		go_euler.Generate_Biggest_N_Digit(4),
		9999,
		"Generate_Biggest_N_Digit library is not working",
	)
}
