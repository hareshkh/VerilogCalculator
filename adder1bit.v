`timescale 1ns / 1ps

/*
 * Group_ID-61 (15114031_15114032) - Haresh Khanna & Harjot Singh Oberai
 * Date: October 25, 2016
 * adder1bit.v
 *
 */

module adder1bit(
	input a,
	input b,
	input cin,
	output sum,
	output cout
	);

	assign sum = a ^ b ^ cin;
	assign cout = (a & b)  |  (a & cin)  |  (b & cin);

endmodule
