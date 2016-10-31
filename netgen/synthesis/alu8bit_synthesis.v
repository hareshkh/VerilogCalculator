////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: alu8bit_synthesis.v
// /___/   /\     Timestamp: Mon Oct 31 11:43:11 2016
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim alu8bit.ngc alu8bit_synthesis.v 
// Device	: xa7a100t-2I-csg324
// Input file	: alu8bit.ngc
// Output file	: C:\Users\Haresh\Calculator\netgen\synthesis\alu8bit_synthesis.v
// # of Modules	: 1
// Design Name	: alu8bit
// Xilinx        : C:\Xilinx\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module alu8bit (
  overflow, carry, instruction, out, extended_out
);
  output overflow;
  output carry;
  input [17 : 0] instruction;
  output [7 : 0] out;
  output [7 : 0] extended_out;
  wire instruction_17_IBUF_0;
  wire instruction_16_IBUF_1;
  wire instruction_15_IBUF_2;
  wire instruction_14_IBUF_3;
  wire instruction_13_IBUF_4;
  wire instruction_12_IBUF_5;
  wire instruction_11_IBUF_6;
  wire instruction_10_IBUF_7;
  wire instruction_9_IBUF_8;
  wire instruction_8_IBUF_9;
  wire instruction_7_IBUF_10;
  wire instruction_6_IBUF_11;
  wire instruction_5_IBUF_12;
  wire instruction_4_IBUF_13;
  wire instruction_3_IBUF_14;
  wire instruction_2_IBUF_15;
  wire instruction_1_IBUF_16;
  wire instruction_0_IBUF_17;
  wire out_7_OBUF_18;
  wire out_6_OBUF_19;
  wire out_5_OBUF_20;
  wire out_4_OBUF_21;
  wire out_3_OBUF_22;
  wire out_2_OBUF_23;
  wire out_1_OBUF_24;
  wire out_0_OBUF_25;
  wire carry_OBUF_26;
  wire overflow_OBUF_27;
  wire extended_out_0_OBUF_28;
  wire \x1/ripple6 ;
  wire \x1/ripple4 ;
  wire \x1/ripple2 ;
  wire Mmux_out22;
  wire N2;
  wire N4;
  wire N6;
  wire N8;
  wire N10;
  GND   XST_GND (
    .G(extended_out_0_OBUF_28)
  );
  LUT5 #(
    .INIT ( 32'h18201922 ))
  Mmux_out81 (
    .I0(instruction_15_IBUF_2),
    .I1(instruction_16_IBUF_1),
    .I2(instruction_17_IBUF_0),
    .I3(instruction_7_IBUF_10),
    .I4(\x1/ripple6 ),
    .O(out_7_OBUF_18)
  );
  LUT6 #(
    .INIT ( 64'h9F99068066E60680 ))
  Mmux_out61 (
    .I0(instruction_5_IBUF_12),
    .I1(instruction_13_IBUF_4),
    .I2(instruction_16_IBUF_1),
    .I3(instruction_17_IBUF_0),
    .I4(Mmux_out22),
    .I5(\x1/ripple4 ),
    .O(out_5_OBUF_20)
  );
  LUT6 #(
    .INIT ( 64'h9F99068066E60680 ))
  Mmux_out41 (
    .I0(instruction_3_IBUF_14),
    .I1(instruction_11_IBUF_6),
    .I2(instruction_16_IBUF_1),
    .I3(instruction_17_IBUF_0),
    .I4(Mmux_out22),
    .I5(\x1/ripple2 ),
    .O(out_3_OBUF_22)
  );
  LUT6 #(
    .INIT ( 64'hEEE8E888E888E888 ))
  \x1/a2/cout1  (
    .I0(instruction_10_IBUF_7),
    .I1(instruction_2_IBUF_15),
    .I2(instruction_1_IBUF_16),
    .I3(instruction_9_IBUF_8),
    .I4(instruction_0_IBUF_17),
    .I5(instruction_8_IBUF_9),
    .O(\x1/ripple2 )
  );
  LUT5 #(
    .INIT ( 32'hEEE8E888 ))
  \x1/a4/cout1  (
    .I0(instruction_12_IBUF_5),
    .I1(instruction_4_IBUF_13),
    .I2(instruction_3_IBUF_14),
    .I3(\x1/ripple2 ),
    .I4(instruction_11_IBUF_6),
    .O(\x1/ripple4 )
  );
  LUT5 #(
    .INIT ( 32'hEEE8E888 ))
  \x1/a6/cout1  (
    .I0(instruction_14_IBUF_3),
    .I1(instruction_6_IBUF_11),
    .I2(instruction_5_IBUF_12),
    .I3(\x1/ripple4 ),
    .I4(instruction_13_IBUF_4),
    .O(\x1/ripple6 )
  );
  LUT5 #(
    .INIT ( 32'h11101000 ))
  carry1 (
    .I0(instruction_16_IBUF_1),
    .I1(instruction_17_IBUF_0),
    .I2(instruction_7_IBUF_10),
    .I3(\x1/ripple6 ),
    .I4(instruction_15_IBUF_2),
    .O(carry_OBUF_26)
  );
  LUT5 #(
    .INIT ( 32'h00010101 ))
  Mmux_out221 (
    .I0(instruction_16_IBUF_1),
    .I1(instruction_17_IBUF_0),
    .I2(\x1/ripple6 ),
    .I3(instruction_15_IBUF_2),
    .I4(instruction_7_IBUF_10),
    .O(Mmux_out22)
  );
  LUT5 #(
    .INIT ( 32'h11111000 ))
  overflow1 (
    .I0(instruction_16_IBUF_1),
    .I1(instruction_17_IBUF_0),
    .I2(instruction_15_IBUF_2),
    .I3(instruction_7_IBUF_10),
    .I4(\x1/ripple6 ),
    .O(overflow_OBUF_27)
  );
  LUT2 #(
    .INIT ( 4'h7 ))
  Mmux_out2_SW0 (
    .I0(instruction_8_IBUF_9),
    .I1(instruction_0_IBUF_17),
    .O(N2)
  );
  LUT6 #(
    .INIT ( 64'h2882E8C23CBE2882 ))
  Mmux_out2 (
    .I0(Mmux_out22),
    .I1(instruction_1_IBUF_16),
    .I2(instruction_9_IBUF_8),
    .I3(N2),
    .I4(instruction_17_IBUF_0),
    .I5(instruction_16_IBUF_1),
    .O(out_1_OBUF_24)
  );
  LUT4 #(
    .INIT ( 16'h175F ))
  Mmux_out3_SW0 (
    .I0(instruction_9_IBUF_8),
    .I1(instruction_8_IBUF_9),
    .I2(instruction_1_IBUF_16),
    .I3(instruction_0_IBUF_17),
    .O(N4)
  );
  LUT6 #(
    .INIT ( 64'h2882E8C23CBE2882 ))
  Mmux_out3 (
    .I0(Mmux_out22),
    .I1(instruction_2_IBUF_15),
    .I2(instruction_10_IBUF_7),
    .I3(N4),
    .I4(instruction_17_IBUF_0),
    .I5(instruction_16_IBUF_1),
    .O(out_2_OBUF_23)
  );
  LUT3 #(
    .INIT ( 8'h17 ))
  Mmux_out5_SW0 (
    .I0(\x1/ripple2 ),
    .I1(instruction_3_IBUF_14),
    .I2(instruction_11_IBUF_6),
    .O(N6)
  );
  LUT6 #(
    .INIT ( 64'h2882E8C23CBE2882 ))
  Mmux_out5 (
    .I0(Mmux_out22),
    .I1(instruction_4_IBUF_13),
    .I2(instruction_12_IBUF_5),
    .I3(N6),
    .I4(instruction_17_IBUF_0),
    .I5(instruction_16_IBUF_1),
    .O(out_4_OBUF_21)
  );
  LUT3 #(
    .INIT ( 8'h17 ))
  Mmux_out7_SW0 (
    .I0(\x1/ripple4 ),
    .I1(instruction_5_IBUF_12),
    .I2(instruction_13_IBUF_4),
    .O(N8)
  );
  LUT6 #(
    .INIT ( 64'h2882E8C23CBE2882 ))
  Mmux_out7 (
    .I0(Mmux_out22),
    .I1(instruction_6_IBUF_11),
    .I2(instruction_14_IBUF_3),
    .I3(N8),
    .I4(instruction_17_IBUF_0),
    .I5(instruction_16_IBUF_1),
    .O(out_6_OBUF_19)
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  Mmux_out1_SW0 (
    .I0(instruction_7_IBUF_10),
    .I1(instruction_15_IBUF_2),
    .O(N10)
  );
  LUT6 #(
    .INIT ( 64'h00555500AA010100 ))
  Mmux_out1 (
    .I0(instruction_16_IBUF_1),
    .I1(\x1/ripple6 ),
    .I2(N10),
    .I3(instruction_8_IBUF_9),
    .I4(instruction_0_IBUF_17),
    .I5(instruction_17_IBUF_0),
    .O(out_0_OBUF_25)
  );
  IBUF   instruction_17_IBUF (
    .I(instruction[17]),
    .O(instruction_17_IBUF_0)
  );
  IBUF   instruction_16_IBUF (
    .I(instruction[16]),
    .O(instruction_16_IBUF_1)
  );
  IBUF   instruction_15_IBUF (
    .I(instruction[15]),
    .O(instruction_15_IBUF_2)
  );
  IBUF   instruction_14_IBUF (
    .I(instruction[14]),
    .O(instruction_14_IBUF_3)
  );
  IBUF   instruction_13_IBUF (
    .I(instruction[13]),
    .O(instruction_13_IBUF_4)
  );
  IBUF   instruction_12_IBUF (
    .I(instruction[12]),
    .O(instruction_12_IBUF_5)
  );
  IBUF   instruction_11_IBUF (
    .I(instruction[11]),
    .O(instruction_11_IBUF_6)
  );
  IBUF   instruction_10_IBUF (
    .I(instruction[10]),
    .O(instruction_10_IBUF_7)
  );
  IBUF   instruction_9_IBUF (
    .I(instruction[9]),
    .O(instruction_9_IBUF_8)
  );
  IBUF   instruction_8_IBUF (
    .I(instruction[8]),
    .O(instruction_8_IBUF_9)
  );
  IBUF   instruction_7_IBUF (
    .I(instruction[7]),
    .O(instruction_7_IBUF_10)
  );
  IBUF   instruction_6_IBUF (
    .I(instruction[6]),
    .O(instruction_6_IBUF_11)
  );
  IBUF   instruction_5_IBUF (
    .I(instruction[5]),
    .O(instruction_5_IBUF_12)
  );
  IBUF   instruction_4_IBUF (
    .I(instruction[4]),
    .O(instruction_4_IBUF_13)
  );
  IBUF   instruction_3_IBUF (
    .I(instruction[3]),
    .O(instruction_3_IBUF_14)
  );
  IBUF   instruction_2_IBUF (
    .I(instruction[2]),
    .O(instruction_2_IBUF_15)
  );
  IBUF   instruction_1_IBUF (
    .I(instruction[1]),
    .O(instruction_1_IBUF_16)
  );
  IBUF   instruction_0_IBUF (
    .I(instruction[0]),
    .O(instruction_0_IBUF_17)
  );
  OBUF   out_7_OBUF (
    .I(out_7_OBUF_18),
    .O(out[7])
  );
  OBUF   out_6_OBUF (
    .I(out_6_OBUF_19),
    .O(out[6])
  );
  OBUF   out_5_OBUF (
    .I(out_5_OBUF_20),
    .O(out[5])
  );
  OBUF   out_4_OBUF (
    .I(out_4_OBUF_21),
    .O(out[4])
  );
  OBUF   out_3_OBUF (
    .I(out_3_OBUF_22),
    .O(out[3])
  );
  OBUF   out_2_OBUF (
    .I(out_2_OBUF_23),
    .O(out[2])
  );
  OBUF   out_1_OBUF (
    .I(out_1_OBUF_24),
    .O(out[1])
  );
  OBUF   out_0_OBUF (
    .I(out_0_OBUF_25),
    .O(out[0])
  );
  OBUF   extended_out_7_OBUF (
    .I(extended_out_0_OBUF_28),
    .O(extended_out[7])
  );
  OBUF   extended_out_6_OBUF (
    .I(extended_out_0_OBUF_28),
    .O(extended_out[6])
  );
  OBUF   extended_out_5_OBUF (
    .I(extended_out_0_OBUF_28),
    .O(extended_out[5])
  );
  OBUF   extended_out_4_OBUF (
    .I(extended_out_0_OBUF_28),
    .O(extended_out[4])
  );
  OBUF   extended_out_3_OBUF (
    .I(extended_out_0_OBUF_28),
    .O(extended_out[3])
  );
  OBUF   extended_out_2_OBUF (
    .I(extended_out_0_OBUF_28),
    .O(extended_out[2])
  );
  OBUF   extended_out_1_OBUF (
    .I(extended_out_0_OBUF_28),
    .O(extended_out[1])
  );
  OBUF   extended_out_0_OBUF (
    .I(extended_out_0_OBUF_28),
    .O(extended_out[0])
  );
  OBUF   overflow_OBUF (
    .I(overflow_OBUF_27),
    .O(overflow)
  );
  OBUF   carry_OBUF (
    .I(carry_OBUF_26),
    .O(carry)
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

