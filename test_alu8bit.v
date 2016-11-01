`timescale 1ns / 1ps

/*
 * Group_ID-61 (15114031_15114032) - Haresh Khanna & Harjot Singh Oberai
 * Date: October 25, 2016
 * test_alu8bit.v
 *
 */

module test_alu8bit;

	// Inputs
	reg [17:0] instruction;

	// Outputs
	wire [7:0] out;
	wire [7:0] extended_out;
	wire overflow;
	wire carry;

	// Instantiate the Unit Under Test (UUT)
	alu8bit uut (
		.instruction(instruction), 
		.out(out), 
		.extended_out(extended_out), 
		.overflow(overflow), 
		.carry(carry)
	);
	
	initial begin
		// Initialize Inputs
		instruction = 0;
		
		#100
		
		//Instructions :
		// add 00000001 00000111
		instruction = 18'b000000000100000111;
		// and 00010100 00001111
		#100 instruction = 18'b010001010000001111;
		// mul 00000011 00000111
		#100 instruction = 18'b110000001100000111;
		// xor 00001111 11110000
		#100 instruction = 18'b100000111111110000;
	end
      
endmodule

