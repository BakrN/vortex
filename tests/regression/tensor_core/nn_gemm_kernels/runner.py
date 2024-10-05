
import argparse
# 32 4 K = 8 for fp16

dnn_gemms = {
               "efficient_net_conv": [(196,112,80*25), (49,192,112*25), (49,320,192*9)],
               "efficient_net_fc":   [(1024, 256, 7*7*1280)],

               "vgg_conv":   [(12544,128,1152), (3136,256,2304), (784,512,4608)],
               "vgg_fc":   [(1024,1024,4096),(1024,4096,4096)],

               "bert_mha": [(512,768,768)],
               "bert_ffn": [(512,3072,768), (512,768,3072)],

               "lstm_hidden": [(512,64,512)]
}






MIN_TILE_ROWS = 16
MIN_TILE_COLS = 16

NUM_CORES = 4
NUM_WARPS = 8
NUM_THREADS = 32


# Vortex gemm params
#TILE_ROWS


# vanilla and sliced-k vortex

#tc_m without A_rows , B_cols ,

for _, (name, experiments )in enumerate(dnn_gemms):
    for gemm in experiments:
        M,N,K = gemm

        tile_size_M = M/(NUM_CORES*NUM_WARPS)**(1/2)
        tile_size_N = N/(NUM_CORES*NUM_WARPS)**(1/2) # 8 ,
        # pad K round to for sliced k(64), cooperative (64), and normal(8)


