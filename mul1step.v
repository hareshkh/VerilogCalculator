`timescale 1ns / 1ps

/*
 * Group_ID-61 (15114031_15114032) - Haresh Khanna & Harjot Singh Oberai
 * Date: October 25, 2016
 * mul1step.v
 *
 */

module mul1step(
	input wire [7:0] ain,
	input wire [7:0] qin,
	input wire q_1in,
	input wire [7:0] m,
	output wire [7:0] aout,
	output wire [7:0] qout,
	output wire q_1out
    );

	reg [7:0] atemp;
	reg [7:0] qtemp;
	reg q_1temp;
	
	wire [7:0] a_sum = ain + m;
	wire [7:0] a_sub = ain + ~m + 1;
	
	always @(ain, qin, q_1in, m, a_sum, a_sub) begin
		case({qin[0],q_1in})
			2'b00, 2'b11: begin
				atemp = {ain[7], ain[7:1]};
				qtemp = {ain[0], qin[7:1]};
				q_1temp = qin[0];
			end
			
			2'b01: begin
				atemp = {a_sum[7], a_sum[7:1]};
				qtemp = {a_sum[0], qin[7:1]};
				q_1temp = qin[0];
			end
			
			2'b10: begin
				atemp = {a_sub[7], a_sub[7:1]};
				qtemp = {a_sub[0], qin[7:1]};
				q_1temp = qin[0];
			end			
		endcase
	end
	
	assign aout = atemp;
	assign qout = qtemp;
	assign q_1out = q_1temp;

endmodule
