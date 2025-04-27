#ifndef RISCV_TCM_TOP_RTL_H
#define RISCV_TCM_TOP_RTL_H

#include <systemc.h>

#include "axi4_lite.h"
#include "axi4.h"

#include "Vbiriscv_tiny_soc.h"  

class VerilatedVcdC;

//-------------------------------------------------------------
// riscv_tcm_top_rtl: RTL wrapper class
//-------------------------------------------------------------
class riscv_tcm_top_rtl: public sc_module
{
public:
    uint8_t read_mem(uint32_t addr);
    void write_mem(uint32_t addr, uint8_t data);
    sc_in <bool> clk_in;
    sc_in <bool> rst_in;
    sc_in <bool> rst_cpu_in;
    sc_in < sc_uint <32> > intr_in;

    sc_in  <axi4_lite_slave>  axi_i_in;
    sc_out <axi4_lite_master> axi_i_out;
    sc_in  <axi4_master>      axi_t_in;
    sc_out <axi4_slave>       axi_t_out;

    //-------------------------------------------------------------
    // Constructor
    //-------------------------------------------------------------
    SC_HAS_PROCESS(riscv_tcm_top_rtl);
    riscv_tcm_top_rtl(sc_module_name name);

    //-------------------------------------------------------------
    // Trace
    //-------------------------------------------------------------
    virtual void add_trace(sc_trace_file *vcd, std::string prefix);

    void async_outputs(void);
    void trace_rtl(void);
    void trace_enable(VerilatedVcdC *p);
    void trace_enable(VerilatedVcdC *p, sc_core::sc_time start_time);

private:
    //-------------------------------------------------------------
    // Internal RTL instance
    //-------------------------------------------------------------
    std::unique_ptr<Vbiriscv_tiny_soc> m_rtl;

#if VM_TRACE
    std::unique_ptr<VerilatedVcdC> m_vcd;
    bool             m_delay_waves;
    sc_core::sc_time m_waves_start;
#endif

    //-------------------------------------------------------------
    // Internal signals for connecting to Verilated design
    //-------------------------------------------------------------
    sc_signal <bool> m_clk_in;
    sc_signal <bool> m_rst_in;
    sc_signal <bool> m_rst_cpu_in;
    sc_signal < sc_uint<32> > m_intr_in;

    sc_signal <bool> m_axi_i_awready_in;
    sc_signal <bool> m_axi_i_wready_in;
    sc_signal <bool> m_axi_i_bvalid_in;
    sc_signal <sc_uint<2> > m_axi_i_bresp_in;
    sc_signal <bool> m_axi_i_arready_in;
    sc_signal <bool> m_axi_i_rvalid_in;
    sc_signal <sc_uint<32> > m_axi_i_rdata_in;
    sc_signal <sc_uint<2> > m_axi_i_rresp_in;

    sc_signal <bool> m_axi_t_awvalid_in;
    sc_signal <sc_uint<32> > m_axi_t_awaddr_in;
    sc_signal <sc_uint<4> > m_axi_t_awid_in;
    sc_signal <sc_uint<8> > m_axi_t_awlen_in;
    sc_signal <sc_uint<2> > m_axi_t_awburst_in;
    sc_signal <bool> m_axi_t_wvalid_in;
    sc_signal <sc_uint<32> > m_axi_t_wdata_in;
    sc_signal <sc_uint<4> > m_axi_t_wstrb_in;
    sc_signal <bool> m_axi_t_wlast_in;
    sc_signal <bool> m_axi_t_bready_in;
    sc_signal <bool> m_axi_t_arvalid_in;
    sc_signal <sc_uint<32> > m_axi_t_araddr_in;
    sc_signal <sc_uint<4> > m_axi_t_arid_in;
    sc_signal <sc_uint<8> > m_axi_t_arlen_in;
    sc_signal <sc_uint<2> > m_axi_t_arburst_in;
    sc_signal <bool> m_axi_t_rready_in;

    sc_signal <bool> m_axi_i_awvalid_out;
    sc_signal <sc_uint<32> > m_axi_i_awaddr_out;
    sc_signal <bool> m_axi_i_wvalid_out;
    sc_signal <sc_uint<32> > m_axi_i_wdata_out;
    sc_signal <sc_uint<4> > m_axi_i_wstrb_out;
    sc_signal <bool> m_axi_i_bready_out;
    sc_signal <bool> m_axi_i_arvalid_out;
    sc_signal <sc_uint<32> > m_axi_i_araddr_out;
    sc_signal <bool> m_axi_i_rready_out;

    sc_signal <bool> m_axi_t_awready_out;
    sc_signal <bool> m_axi_t_wready_out;
    sc_signal <bool> m_axi_t_bvalid_out;
    sc_signal <sc_uint<2> > m_axi_t_bresp_out;
    sc_signal <sc_uint<4> > m_axi_t_bid_out;
    sc_signal <bool> m_axi_t_arready_out;
    sc_signal <bool> m_axi_t_rvalid_out;
    sc_signal <sc_uint<32> > m_axi_t_rdata_out;
    sc_signal <sc_uint<2> > m_axi_t_rresp_out;
    sc_signal <sc_uint<4> > m_axi_t_rid_out;
    sc_signal <bool> m_axi_t_rlast_out;
};

#endif
