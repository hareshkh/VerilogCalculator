`timescale 1ns / 1ps

/*
 * Group_ID-61 (15114031_15114032) - Haresh Khanna & Harjot Singh Oberai
 * Date: October 25, 2016
 * adder8bit.v
 *
 */

module mul8bit(
	input wire [7:0] a,
	input wire [7:0] b,
	input wire clk,
	output wire [15:0] result
    );

	reg [7:0] msb_ans, q, m;
	reg q_1, clock;
	integer count;
	
	initial begin
		count = 8;
		clock = clk;
		msb_ans = 8'b0;
		q_1 = 1'b0;
		m = a;
		q = b;
	end
	
	always @ (posedge(clock)) begin
		if (count > 0) begin
			if (q[0] == 1'b1 & q_1 == 1'b0) begin
				msb_ans = msb_ans - m;
			end
			else if (q[0] == 1'b0 & q_1 == 1'b1) begin
				msb_ans = msb_ans + m;
			end
			{msb_ans,q,q_1} = {msb_ans[7],msb_ans,q};
			count = count -1;
		end
	end
	
	assign result = {msb_ans,q};
	
endmodule
