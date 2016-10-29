`timescale 1ns / 1ps

/*
 * Group_ID-61 (15114031_15114032) - Haresh Khanna & Harjot Singh Oberai
 * Date: October 25, 2016
 * adder8bit.v
 *
 */
 
module adder8bit(
    input wire [7:0] a,
    input wire [7:0] b,
    output wire [7:0] sum,
    output wire carry,
	 output wire overflow
    );

// Initial carry and 7 ripple wires.
	wire cin;
	wire ripple0;
	wire ripple1;
	wire ripple2;
	wire ripple3;
	wire ripple4;
	wire ripple5;
	wire ripple6;
	assign cin = 1'b0;
	
	adder1bit a0( .a(a[0]), .b(b[0]), .cin(cin),     .sum(sum[0]), .cout(ripple0) );
	adder1bit a1( .a(a[1]), .b(b[1]), .cin(ripple0), .sum(sum[1]), .cout(ripple1) );
	adder1bit a2( .a(a[2]), .b(b[2]), .cin(ripple1), .sum(sum[2]), .cout(ripple2) );
	adder1bit a3( .a(a[3]), .b(b[3]), .cin(ripple2), .sum(sum[3]), .cout(ripple3) );
	adder1bit a4( .a(a[4]), .b(b[4]), .cin(ripple3), .sum(sum[4]), .cout(ripple4) );
	adder1bit a5( .a(a[5]), .b(b[5]), .cin(ripple4), .sum(sum[5]), .cout(ripple5) );
	adder1bit a6( .a(a[6]), .b(b[6]), .cin(ripple5), .sum(sum[6]), .cout(ripple6) );
	adder1bit a7( .a(a[7]), .b(b[7]), .cin(ripple6), .sum(sum[7]), .cout(carry) );
	
	or overflow_detect(overflow, carry, ripple6);

endmodule
