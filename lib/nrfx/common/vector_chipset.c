
// Run the SystemInit from the nrfx library (${NRFXROOT}/mdk/system_nrf*.c)

void SystemInit(void);

static void pre_main(void) {
	SystemInit();
}
