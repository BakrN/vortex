#include "common.h"


void kernel_body (
    const void * /* arg */,
	const context_t * /* context */,
	uint32_t /* group_x */,
	uint32_t /* group_y */,
	uint32_t /* group_z */
) {

}

int main () {
    gemm_args_t* args = (gemm_args_t*)KERNEL_ARG_DEV_MEM_ADDR;

    void vx_spawn_tasks(int num_tasks, vx_spawn_tasks_cb callback, void * arg);
    return 0;
}
