 
void clk_set_divider_a(int index, int value) {
    // Test this for interpretation
    volatile uint32_t* clk = 0x40020000 + (0x10*index);
    *clk = value;
}
void clk_select(int peripheral, int divider, int index) {
    // Test this for interpretation
    volatile uint32_t* sel = 0x40020200;
    sel[index] = divider << 3 | index;
}

