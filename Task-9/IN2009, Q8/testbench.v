`timescale 1ns/1ps

module tb_karnaugh_map();
    reg P, Q, R, S;
    wire F;
    
    // Instantiate the unit under test
    karnaugh_map_sop uut(
        .P(P),
        .Q(Q),
        .R(R),
        .S(S),
        .F(F)
    );
    
    initial begin
        // Print header with SOP expression
        $display("\nVerification of Karnaugh Map Implementation");
        $display("----------------------------------------");
        $display("Option A: F = QS + P'R̅S + PQR + P̅RS + PQ̅R̅");
        $display("\nTime(ns)  P Q R S | F");
        $display("------------------|---");
        
        // Test all 16 possible input combinations
        // Row 1: P=0, Q=0
        {P, Q, R, S} = 4'b0000; #10;
        $display("%7d   %b %b %b %b |  %b", $time, P, Q, R, S, F);
        {P, Q, R, S} = 4'b0001; #10;
        $display("%7d   %b %b %b %b |  %b", $time, P, Q, R, S, F);
        {P, Q, R, S} = 4'b0010; #10;
        $display("%7d   %b %b %b %b |  %b", $time, P, Q, R, S, F);
        {P, Q, R, S} = 4'b0011; #10;
        $display("%7d   %b %b %b %b |  %b", $time, P, Q, R, S, F);
        
        // Row 2: P=0, Q=1
        {P, Q, R, S} = 4'b0100; #10;
        $display("%7d   %b %b %b %b |  %b", $time, P, Q, R, S, F);
        {P, Q, R, S} = 4'b0101; #10;
        $display("%7d   %b %b %b %b |  %b", $time, P, Q, R, S, F);
        {P, Q, R, S} = 4'b0110; #10;
        $display("%7d   %b %b %b %b |  %b", $time, P, Q, R, S, F);
        {P, Q, R, S} = 4'b0111; #10;
        $display("%7d   %b %b %b %b |  %b", $time, P, Q, R, S, F);
        
        // Row 3: P=1, Q=0
        {P, Q, R, S} = 4'b1000; #10;
        $display("%7d   %b %b %b %b |  %b", $time, P, Q, R, S, F);
        {P, Q, R, S} = 4'b1001; #10;
        $display("%7d   %b %b %b %b |  %b", $time, P, Q, R, S, F);
        {P, Q, R, S} = 4'b1010; #10;
        $display("%7d   %b %b %b %b |  %b", $time, P, Q, R, S, F);
        {P, Q, R, S} = 4'b1011; #10;
        $display("%7d   %b %b %b %b |  %b", $time, P, Q, R, S, F);
        
        // Row 4: P=1, Q=1
        {P, Q, R, S} = 4'b1100; #10;
        $display("%7d   %b %b %b %b |  %b", $time, P, Q, R, S, F);
        {P, Q, R, S} = 4'b1101; #10;
        $display("%7d   %b %b %b %b |  %b", $time, P, Q, R, S, F);
        {P, Q, R, S} = 4'b1110; #10;
        $display("%7d   %b %b %b %b |  %b", $time, P, Q, R, S, F);
        {P, Q, R, S} = 4'b1111; #10;
        $display("%7d   %b %b %b %b |  %b", $time, P, Q, R, S, F);
        
        $display("\nVerification complete!");
        $finish;
    end
    
    // Optional: Create VCD file for waveform viewing
    initial begin
        $dumpfile("karnaugh_wave.vcd");
        $dumpvars(0, tb_karnaugh_map);
    end
endmodule
