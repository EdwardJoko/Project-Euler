package go_euler

import (
	"github.com/stretchr/testify/assert"
	"go_euler/lib"
	"log"
	"testing"
)

func Test_Generate_Smallest_N_Digit(t *testing.T) {
	assert := assert.New(t)

	num, err := go_euler.Generate_Smallest_N_Digit(2)
	if err != nil {
		log.Fatal(err)
	}
	assert.Equal(
		num,
		10,
		"Generate_Smallest_N_Digit library is not working",
	)

	num, err = go_euler.Generate_Smallest_N_Digit(3)
	if err != nil {
		log.Fatal(err)
	}
	assert.Equal(
		num,
		100,
		"Generate_Smallest_N_Digit library is not working",
	)

	num, err = go_euler.Generate_Smallest_N_Digit(4)
	if err != nil {
		log.Fatal(err)
	}
	assert.Equal(
		num,
		1000,
		"Generate_Smallest_N_Digit library is not working",
	)
}
