`timescale 1ns/1ps

module karnaugh_map_sop(
    input P, Q, R, S,
    output F
);
    // Implement the SOP expression: QS + P'R̅S + PQR + P̅RS + PQ̅R̅
    assign F = (Q & S) | (~P & ~R & S) | (P & Q & R) | (~P & R & S) | (P & ~Q & ~R);
    
    // Alternative representation using gate-level modeling
    /*
    wire term1, term2, term3, term4, term5;
    and(term1, Q, S);
    and(term2, ~P, ~R, S);
    and(term3, P, Q, R);
    and(term4, ~P, R, S);
    and(term5, P, ~Q, ~R);
    or(F, term1, term2, term3, term4, term5);
    */
endmodule
