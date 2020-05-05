`include "VX_define.vh"

module VX_dmem_ctrl (
    input wire              clk,
    input wire              reset,

    // Core <-> Dcache    
    VX_cache_core_req_if    dcache_core_req_if,
    VX_cache_core_rsp_if    dcache_core_rsp_if,

    // Dram <-> Dcache
    VX_cache_dram_req_if    dcache_dram_req_if,
    VX_cache_dram_rsp_if    dcache_dram_rsp_if,
    VX_cache_snp_req_if     dcache_snp_req_if,

    // Core <-> Icache    
    VX_cache_core_req_if    icache_core_req_if,  
    VX_cache_core_rsp_if    icache_core_rsp_if,

    // Dram <-> Icache
    VX_cache_dram_req_if    icache_dram_req_if,
    VX_cache_dram_rsp_if    icache_dram_rsp_if
);
    VX_cache_core_req_if #(
        .NUM_REQUESTS(`DNUM_REQUESTS), 
        .WORD_SIZE(`DWORD_SIZE), 
        .CORE_TAG_WIDTH(`CORE_REQ_TAG_WIDTH),
        .CORE_TAG_ID_BITS(`CORE_TAG_ID_BITS)
    ) dcache_core_req_qual_if(), smem_core_req_if();

    VX_cache_core_rsp_if #(
        .NUM_REQUESTS(`DNUM_REQUESTS), 
        .WORD_SIZE(`DWORD_SIZE), 
        .CORE_TAG_WIDTH(`CORE_REQ_TAG_WIDTH),
        .CORE_TAG_ID_BITS(`CORE_TAG_ID_BITS)
    ) dcache_core_rsp_qual_if(), smem_core_rsp_if();

    VX_dcache_io_arb dcache_io_arb (
        .io_select          (dcache_core_req_if.core_req_addr[0][31:24] == `SHARED_MEM_TOP_ADDR),
        .core_req_if        (dcache_core_req_if),
        .dcache_core_req_if (dcache_core_req_qual_if),
        .io_core_req_if     (smem_core_req_if),    
        .dcache_core_rsp_if (dcache_core_rsp_qual_if),
        .io_core_rsp_if     (smem_core_rsp_if),    
        .core_rsp_if        (dcache_core_rsp_if)
    );

    VX_cache #(
        .CACHE_SIZE             (`SCACHE_SIZE),
        .BANK_LINE_SIZE         (`SBANK_LINE_SIZE),
        .NUM_BANKS              (`SNUM_BANKS),
        .WORD_SIZE              (`SWORD_SIZE),
        .NUM_REQUESTS           (`SNUM_REQUESTS),
        .STAGE_1_CYCLES         (`SSTAGE_1_CYCLES),
        .REQQ_SIZE              (`SREQQ_SIZE),
        .MRVQ_SIZE              (`SMRVQ_SIZE),
        .DFPQ_SIZE              (`SDFPQ_SIZE),
        .SNRQ_SIZE              (`SSNRQ_SIZE),
        .CWBQ_SIZE              (`SCWBQ_SIZE),
        .DWBQ_SIZE              (`SDWBQ_SIZE),
        .DFQQ_SIZE              (`SDFQQ_SIZE),
        .LLVQ_SIZE              (`SLLVQ_SIZE),
        .FFSQ_SIZE              (`SFFSQ_SIZE),
        .PRFQ_SIZE              (`SPRFQ_SIZE),
        .PRFQ_STRIDE            (`SPRFQ_STRIDE),
        .FILL_INVALIDAOR_SIZE   (`SFILL_INVALIDAOR_SIZE),
        .SNOOP_FORWARDING_ENABLE(0),
        .DRAM_ENABLE            (0),
        .WRITE_ENABLE           (1),
        .CORE_TAG_WIDTH         (`CORE_REQ_TAG_WIDTH),
        .CORE_TAG_ID_BITS       (`CORE_TAG_ID_BITS),
        .DRAM_TAG_WIDTH         (`SDRAM_TAG_WIDTH)
    ) gpu_smem (
        .clk                (clk),
        .reset              (reset),

        // Core request
        .core_req_valid     (smem_core_req_if.core_req_valid),
        .core_req_read      (smem_core_req_if.core_req_read),
        .core_req_write     (smem_core_req_if.core_req_write),
        .core_req_addr      (smem_core_req_if.core_req_addr),
        .core_req_data      (smem_core_req_if.core_req_data),        
        .core_req_tag       (smem_core_req_if.core_req_tag),
        .core_req_ready     (smem_core_req_if.core_req_ready),

        // Core response
        .core_rsp_valid     (smem_core_rsp_if.core_rsp_valid),
        .core_rsp_data      (smem_core_rsp_if.core_rsp_data),
        .core_rsp_tag       (smem_core_rsp_if.core_rsp_tag),
        .core_rsp_ready     (smem_core_rsp_if.core_rsp_ready),

    `IGNORE_WARNINGS_BEGIN
        // DRAM request
        .dram_req_read      (),
        .dram_req_write     (),        
        .dram_req_addr      (),
        .dram_req_data      (),
        .dram_req_tag       (),
        .dram_req_ready     (0),       

        // DRAM response
        .dram_rsp_valid     (0),
        .dram_rsp_data      (0),
        .dram_rsp_tag       (0),
        .dram_rsp_ready     (),

        // Snoop request
        .snp_req_valid      (0),
        .snp_req_addr       (0),
        .snp_req_ready      (),

        // Snoop forwarding
        .snp_fwd_valid      (),
        .snp_fwd_addr       (),
        .snp_fwd_ready      (0)
    `IGNORE_WARNINGS_END
    );

    VX_cache #(
        .CACHE_SIZE             (`DCACHE_SIZE),
        .BANK_LINE_SIZE         (`DBANK_LINE_SIZE),
        .NUM_BANKS              (`DNUM_BANKS),
        .WORD_SIZE              (`DWORD_SIZE),
        .NUM_REQUESTS           (`DNUM_REQUESTS),
        .STAGE_1_CYCLES         (`DSTAGE_1_CYCLES),
        .REQQ_SIZE              (`DREQQ_SIZE),
        .MRVQ_SIZE              (`DMRVQ_SIZE),
        .DFPQ_SIZE              (`DDFPQ_SIZE),
        .SNRQ_SIZE              (`DSNRQ_SIZE),
        .CWBQ_SIZE              (`DCWBQ_SIZE),
        .DWBQ_SIZE              (`DDWBQ_SIZE),
        .DFQQ_SIZE              (`DDFQQ_SIZE),
        .LLVQ_SIZE              (`DLLVQ_SIZE),
        .FFSQ_SIZE              (`DFFSQ_SIZE),
        .PRFQ_SIZE              (`DPRFQ_SIZE),
        .PRFQ_STRIDE            (`DPRFQ_STRIDE),
        .FILL_INVALIDAOR_SIZE   (`DFILL_INVALIDAOR_SIZE),
        .SNOOP_FORWARDING_ENABLE(0),
        .DRAM_ENABLE            (1),
        .WRITE_ENABLE           (1),
        .CORE_TAG_WIDTH         (`CORE_REQ_TAG_WIDTH),
        .CORE_TAG_ID_BITS       (`CORE_TAG_ID_BITS),
        .DRAM_TAG_WIDTH         (`DDRAM_TAG_WIDTH)
    ) gpu_dcache (
        .clk                (clk),
        .reset              (reset),

        // Core req
        .core_req_valid     (dcache_core_req_qual_if.core_req_valid),
        .core_req_read      (dcache_core_req_qual_if.core_req_read),
        .core_req_write     (dcache_core_req_qual_if.core_req_write),
        .core_req_addr      (dcache_core_req_qual_if.core_req_addr),
        .core_req_data      (dcache_core_req_qual_if.core_req_data),        
        .core_req_tag       (dcache_core_req_qual_if.core_req_tag),
        .core_req_ready     (dcache_core_req_qual_if.core_req_ready),

        // Core response
        .core_rsp_valid     (dcache_core_rsp_qual_if.core_rsp_valid),
        .core_rsp_data      (dcache_core_rsp_qual_if.core_rsp_data),
        .core_rsp_tag       (dcache_core_rsp_qual_if.core_rsp_tag),
        .core_rsp_ready     (dcache_core_rsp_qual_if.core_rsp_ready),

        // DRAM request
        .dram_req_read      (dcache_dram_req_if.dram_req_read),
        .dram_req_write     (dcache_dram_req_if.dram_req_write),        
        .dram_req_addr      (dcache_dram_req_if.dram_req_addr),
        .dram_req_data      (dcache_dram_req_if.dram_req_data),
        .dram_req_tag       (dcache_dram_req_if.dram_req_tag),
        .dram_req_ready     (dcache_dram_req_if.dram_req_ready),

        // DRAM response
        .dram_rsp_valid     (dcache_dram_rsp_if.dram_rsp_valid),        
        .dram_rsp_data      (dcache_dram_rsp_if.dram_rsp_data),
        .dram_rsp_tag       (dcache_dram_rsp_if.dram_rsp_tag),
        .dram_rsp_ready     (dcache_dram_rsp_if.dram_rsp_ready),

        // Snoop Request
        .snp_req_valid      (dcache_snp_req_if.snp_req_valid),
        .snp_req_addr       (dcache_snp_req_if.snp_req_addr),
        .snp_req_ready      (dcache_snp_req_if.snp_req_ready),
        
    `IGNORE_WARNINGS_BEGIN
        // Snoop Forward
        .snp_fwd_valid      (),
        .snp_fwd_addr       (),
        .snp_fwd_ready      (0)
    `IGNORE_WARNINGS_END
    );

    VX_cache #(
        .CACHE_SIZE             (`ICACHE_SIZE),
        .BANK_LINE_SIZE         (`IBANK_LINE_SIZE),
        .NUM_BANKS              (`INUM_BANKS),
        .WORD_SIZE              (`IWORD_SIZE),
        .NUM_REQUESTS           (`INUM_REQUESTS),
        .STAGE_1_CYCLES         (`ISTAGE_1_CYCLES),
        .REQQ_SIZE              (`IREQQ_SIZE),
        .MRVQ_SIZE              (`IMRVQ_SIZE),
        .DFPQ_SIZE              (`IDFPQ_SIZE),
        .SNRQ_SIZE              (`ISNRQ_SIZE),
        .CWBQ_SIZE              (`ICWBQ_SIZE),
        .DWBQ_SIZE              (`IDWBQ_SIZE),
        .DFQQ_SIZE              (`IDFQQ_SIZE),
        .LLVQ_SIZE              (`ILLVQ_SIZE),
        .FFSQ_SIZE              (`IFFSQ_SIZE),
        .PRFQ_SIZE              (`IPRFQ_SIZE),
        .PRFQ_STRIDE            (`IPRFQ_STRIDE),
        .FILL_INVALIDAOR_SIZE   (`IFILL_INVALIDAOR_SIZE),
        .SNOOP_FORWARDING_ENABLE(0),
        .DRAM_ENABLE            (1),
        .WRITE_ENABLE           (0),
        .CORE_TAG_WIDTH         (`CORE_REQ_TAG_WIDTH),
        .CORE_TAG_ID_BITS       (`CORE_TAG_ID_BITS),
        .DRAM_TAG_WIDTH         (`IDRAM_TAG_WIDTH)
    ) gpu_icache (
        .clk                   (clk),
        .reset                 (reset),

        // Core request
        .core_req_valid        (icache_core_req_if.core_req_valid),
        .core_req_read         (icache_core_req_if.core_req_read),
        .core_req_write        (icache_core_req_if.core_req_write),
        .core_req_addr         (icache_core_req_if.core_req_addr),
        .core_req_data         (icache_core_req_if.core_req_data),        
        .core_req_tag          (icache_core_req_if.core_req_tag),
        .core_req_ready        (icache_core_req_if.core_req_ready),

        // Core response
        .core_rsp_valid        (icache_core_rsp_if.core_rsp_valid),
        .core_rsp_data         (icache_core_rsp_if.core_rsp_data),
        .core_rsp_tag          (icache_core_rsp_if.core_rsp_tag),
        .core_rsp_ready        (icache_core_rsp_if.core_rsp_ready),

        // DRAM Req
        .dram_req_read         (icache_dram_req_if.dram_req_read),
        .dram_req_write        (icache_dram_req_if.dram_req_write),        
        .dram_req_addr         (icache_dram_req_if.dram_req_addr),
        .dram_req_data         (icache_dram_req_if.dram_req_data),
        .dram_req_tag          (icache_dram_req_if.dram_req_tag),
        .dram_req_ready        (icache_dram_req_if.dram_req_ready),        

        // DRAM response
        .dram_rsp_valid        (icache_dram_rsp_if.dram_rsp_valid),        
        .dram_rsp_data         (icache_dram_rsp_if.dram_rsp_data),
        .dram_rsp_tag          (icache_dram_rsp_if.dram_rsp_tag),
        .dram_rsp_ready        (icache_dram_rsp_if.dram_rsp_ready),

    `IGNORE_WARNINGS_BEGIN
        // Snoop Request
        .snp_req_valid         (0),
        .snp_req_addr          (0),
        .snp_req_ready         (),

        // Snoop Forward
        .snp_fwd_valid         (),
        .snp_fwd_addr          (),    
        .snp_fwd_ready         (0)
    `IGNORE_WARNINGS_END
    );

endmodule
