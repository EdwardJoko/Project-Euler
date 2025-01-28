package go_euler

import (
	"errors"
	"github.com/stretchr/testify/assert"
	"go_euler/lib"
	"log"
	"testing"
)

func Test_Generate_Biggest_N_Digit(t *testing.T) {
	assert := assert.New(t)

	num, err := go_euler.Generate_Biggest_N_Digit(2)
	if err != nil {
		log.Fatal(err)
	}
	assert.Equal(
		num,
		99,
		"Generate_Biggest_N_Digit library is not working",
	)

	num, err = go_euler.Generate_Biggest_N_Digit(3)
	if err != nil {
		log.Fatal(err)
	}
	assert.Equal(
		num,
		999,
		"Generate_Biggest_N_Digit library is not working",
	)

	num, err = go_euler.Generate_Biggest_N_Digit(4)
	if err != nil {
		log.Fatal(err)
	}
	assert.Equal(
		num,
		9999,
		"Generate_Biggest_N_Digit library is not working",
	)

	num, err = go_euler.Generate_Biggest_N_Digit(-1)
	assert.Equal(
		err,
		errors.New("Cannot generate number if the digit is 0 or less"),
		"Generate_Biggest_N_Digit library is not working",
	)
}
