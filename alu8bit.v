`timescale 1ns / 1ps

/*
 * Group_ID-61 (15114031_15114032) - Haresh Khanna & Harjot Singh Oberai
 * Date: October 25, 2016
 * alu8bit.v
 *
 */
 
module alu8bit(
	input wire [17:0] instruction,
	output wire [7:0] out,
	output wire [7:0] extended_out,
	output wire overflow,
	output wire carry
    );

/*
 * Instruction consists of 18 bits.
 * The 2 most significant bits of the instruction are the opcode.
 *
 * Opcode       Function
 *   00         ADD
 *   01         AND
 *   10         XOR
 *   11         MULTIPLY
 *
 * Rest of the 16 bits consist of two 8-bit operands.
 * 
 * 'out' is the main output and 'extended_out' is used to
 * output the 8 MSBs of the 16 bit MULTIPLICATION output.
 *
 * overflow and carry are the overflow and carry in case of addition.
 */
 
// Additional wires to split instruction
	wire [1:0] opcode = instruction[17:16];
	wire [7:0] oper1 = instruction[15:8];
	wire [7:0] oper2 = instruction[7:0];

// Wires for answers.
	wire [7:0] addans;
	wire [7:0] andans;
	wire [7:0] xorans;
	wire [15:0] mulans;
	wire c;
	wire o;

// Modules
	adder8bit x1(oper1, oper2, addans, c, o);
	and8bit   x2(oper1, oper2, andans);
	xor8bit   x3(oper1, oper2, xorans);
	mul8bit   x4(oper1, oper2, mulans);

// Checking and assigning the correct result according to opcode
	assign out = (opcode == 2'b00) ? ((o == 1'b0)? addans : 8'b0) :
						(opcode == 2'b01) ? andans :
						(opcode == 2'b10) ? xorans :
						mulans[7:0];

	assign extended_out = (opcode == 2'b11) ? mulans[15:8] : 8'b0;
	
	assign carry = (opcode == 2'b00 & c == 1'b1) ? 1'b1 : 1'b0;
	
	assign overflow = (opcode == 2'b00 & o == 1'b1) ? 1'b1 : 1'b0;

endmodule
