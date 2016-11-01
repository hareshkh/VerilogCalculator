`timescale 1ns / 1ps

/*
 * Group_ID-61 (15114031_15114032) - Haresh Khanna & Harjot Singh Oberai
 * Date: October 25, 2016
 * mul8bit.v
 *
 */

module mul8bit(
	input wire [7:0] inp1,
	input wire [7:0] inp2,
	output wire [15:0] result
    );
	 
	wire [7:0] q0, q1, q2, q3, q4, q5, q6, q7, q8;
	wire [7:0] a0, a1, a2, a3, a4, a5, a6, a7, a8;
	wire q_0, q_1, q_2, q_3, q_4, q_5, q_6, q_7, q_8;
	
	assign a0 = 8'b0;
	assign q0 = inp1;
	assign q_0 = 1'b0;
	
	mul1step mult1(a0, q0, q_0, inp2, a1, q1, q_1);
	mul1step mult2(a1, q1, q_1, inp2, a2, q2, q_2);
	mul1step mult3(a2, q2, q_2, inp2, a3, q3, q_3);
	mul1step mult4(a3, q3, q_3, inp2, a4, q4, q_4);
	mul1step mult5(a4, q4, q_4, inp2, a5, q5, q_5);
	mul1step mult6(a5, q5, q_5, inp2, a6, q6, q_6);
	mul1step mult7(a6, q6, q_6, inp2, a7, q7, q_7);
	mul1step mult8(a7, q7, q_7, inp2, a8, q8, q_8);
	
	assign result = {a8,q8};

endmodule
