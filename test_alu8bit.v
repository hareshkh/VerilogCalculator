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
	reg clk;

	// Outputs
	wire [7:0] out;
	wire [7:0] extended_out;
	wire overflow;
	wire carry;

	// Instantiate the Unit Under Test (UUT)
	alu8bit uut (
		.instruction(instruction), 
		.clk(clk), 
		.out(out), 
		.extended_out(extended_out), 
		.overflow(overflow), 
		.carry(carry)
	);

	always begin
		#5 clk = 0;
		#5 clk = 1;
	end
	initial begin
		// Initialize Inputs
		instruction = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// stimulus here
		instruction = 18'b000000000100000001;
		#100 instruction = 18'b010001010000001111;
		#100 instruction = 18'b110000001100000011;

	end
      
endmodule

