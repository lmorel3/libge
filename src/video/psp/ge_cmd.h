#define CMD_NOP 0
#define CMD_VERTICES_POINTER 1
#define CMD_INDICES_POINTER 2
#define CMD_DRAW_TYPE_VCOUNT 4
#define CMD_CALL 10
#define CMD_RETURN 11
#define CMD_BASE_ADDR 16
#define CMD_DRAW_VERTICES_POINTER CMD_BASE_ADDR
#define CMD_DRAW_MODE 18

#define CMD_DRAW_REGION_START_POINT 21
#define CMD_DRAW_REGION_END_POINT 22

#define GE_LIGHTING 23
#define GE_LIGHT0 24
#define GE_LIGHT1 25
#define GE_LIGHT2 26
#define GE_LIGHT3 27
#define GE_CLIP_PLANES 28
#define GE_CULL_FACE 29
#define GE_TEXTURE_2D 30
#define GE_FOG 31
#define GE_DITHER 32
#define GE_BLEND 33
#define GE_ALPHA_TEST 34
#define GE_DEPTH_TEST 35
#define GE_STENCIL_TEST 36
#define GE_LINE_SMOOTH 37
#define GE_PATCH_CULL_FACE 38
#define GE_COLOR_TEST 39
#define GE_COLOR_LOGIC_OP 40

#define CMD_PATH_DIVIDE 54
#define GE_PATCH_FACE 56

#define CMD_MATRIX_MODEL 58
#define CMD_MATRIX_MODEL_ENTRY 59
#define CMD_MATRIX_VIEW 60
#define CMD_MATRIX_VIEW_ENTRY 61
#define CMD_MATRIX_PROJECTION 62
#define CMD_MATRIX_PROJECTION_ENTRY 63
#define CMD_MATRIX_TEXTURE 64
#define CMD_MATRIX_TEXTURE_ENTRY 65

#define CMD_VIEWPORT_WIDTH 66
#define CMD_VIEWPORT_HEIGHT 67
#define CMD_VIEWPORT_NEAR 68
#define CMD_VIEWPORT_X 69
#define CMD_VIEWPORT_Y 70
#define CMD_VIEWPORT_FAR 71

#define CMD_TEX_SCALE_U 72
#define CMD_TEX_SCALE_V 73
#define CMD_TEX_OFFSET_X 74
#define CMD_TEX_OFFSET_Y 75

#define CMD_OFFSET_X 76
#define CMD_OFFSET_Y 77

#define CMD_SHADEMODEL 80
#define GE_FACE_NORMAL_REVERSE 81

#define CMD_MATERIAL 83
#define CMD_AMBIENT_COLOR 85
#define CMD_AMBIENT_COLOR_2 88
#define CMD_SPECULAR 91

#define CMD_LIGHT_TYPE_0 95
#define CMD_LIGHT_TYPE_1 96
#define CMD_LIGHT_TYPE_2 97
#define CMD_LIGHT_TYPE_3 98
#define CMD_LIGHT_X_0 99
#define CMD_LIGHT_Y_0 100
#define CMD_LIGHT_Z_0 101
#define CMD_LIGHT_X_1 102
#define CMD_LIGHT_Y_1 103
#define CMD_LIGHT_Z_1 104
#define CMD_LIGHT_X_2 105
#define CMD_LIGHT_Y_2 106
#define CMD_LIGHT_Z_2 107
#define CMD_LIGHT_X_3 108
#define CMD_LIGHT_Y_3 109
#define CMD_LIGHT_Z_3 110
#define CMD_LIGHT_DIRX_0 111
#define CMD_LIGHT_DIRY_0 112
#define CMD_LIGHT_DIRZ_0 113
#define CMD_LIGHT_DIRX_1 114
#define CMD_LIGHT_DIRY_1 115
#define CMD_LIGHT_DIRZ_1 116
#define CMD_LIGHT_DIRX_2 117
#define CMD_LIGHT_DIRY_2 118
#define CMD_LIGHT_DIRZ_2 119
#define CMD_LIGHT_DIRX_3 120
#define CMD_LIGHT_DIRY_3 121
#define CMD_LIGHT_DIRZ_3 122

#define CMD_LIGHT_CONSTANT_ATTENUATION_0 123
#define CMD_LIGHT_LINEAR_ATTENUATION_0 124
#define CMD_LIGHT_QUADRATIC_ATTENUATION_0 125
#define CMD_LIGHT_CONSTANT_ATTENUATION_1 126
#define CMD_LIGHT_LINEAR_ATTENUATION_1 127
#define CMD_LIGHT_QUADRATIC_ATTENUATION_1 128
#define CMD_LIGHT_CONSTANT_ATTENUATION_2 129
#define CMD_LIGHT_LINEAR_ATTENUATION_2 130
#define CMD_LIGHT_QUADRATIC_ATTENUATION_2 131
#define CMD_LIGHT_CONSTANT_ATTENUATION_3 132
#define CMD_LIGHT_LINEAR_ATTENUATION_3 133
#define CMD_LIGHT_QUADRATIC_ATTENUATION_3 134

#define CMD_LIGHT_AMBIENT_0  143
#define CMD_LIGHT_DIFFUSE_0  144
#define CMD_LIGHT_SPECULAR_0  145
#define CMD_LIGHT_AMBIENT_1  146
#define CMD_LIGHT_DIFFUSE_1  147
#define CMD_LIGHT_SPECULAR_1  148
#define CMD_LIGHT_AMBIENT_2  149
#define CMD_LIGHT_DIFFUSE_2  150
#define CMD_LIGHT_SPECULAR_2  151
#define CMD_LIGHT_AMBIENT_3  152
#define CMD_LIGHT_DIFFUSE_3  153
#define CMD_LIGHT_SPECULAR_3  154

#define CMD_FRAME_BUFFER 156
#define CMD_FRAME_BUFFER_WIDTH 157
#define CMD_DEPTH_BUFFER 158
#define CMD_DEPTH_BUFFER_WIDTH 159

#define CMD_TEX_MIPMAP0 160
#define CMD_TEX_MIPMAP1 161
#define CMD_TEX_MIPMAP2 162
#define CMD_TEX_MIPMAP3 163
#define CMD_TEX_MIPMAP4 164
#define CMD_TEX_MIPMAP5 165
#define CMD_TEX_MIPMAP6 166
#define CMD_TEX_MIPMAP7 167
#define CMD_TEX_STRIDE0 168
#define CMD_TEX_STRIDE1 169
#define CMD_TEX_STRIDE2 170
#define CMD_TEX_STRIDE3 171
#define CMD_TEX_STRIDE4 172
#define CMD_TEX_STRIDE5 173
#define CMD_TEX_STRIDE6 174
#define CMD_TEX_STRIDE7 175

#define CMD_CLUT_LOAD 176
#define CMD_CLUT_LOAD_CACHE 177

#define CMD_TEX_COPY_SRC 178
#define CMD_TEX_COPY_SRC_STRIDE 179
#define CMD_TEX_COPY_DST 178
#define CMD_TEX_COPY_DST_STRIDE 179

#define CMD_TEX_SIZE0 184
#define CMD_TEX_SIZE1 185
#define CMD_TEX_SIZE2 186
#define CMD_TEX_SIZE3 187
#define CMD_TEX_SIZE4 188
#define CMD_TEX_SIZE5 189
#define CMD_TEX_SIZE6 190
#define CMD_TEX_SIZE7 191
#define CMD_TEX_MIPMAP_DRAW_MODE 194
#define CMD_TEX_PIXEL_MODE 195
#define CMD_CLUT_NUM_BLOCKS 196
#define CMD_CLUT_MODE 197
#define CMD_TEX_FILTER 198
#define CMD_TEX_WRAP 199
#define CMD_TEX_FUNC 201
#define CMD_TEX_ENV_COLOR 202
#define CMD_TEX_FLUSH 203

#define CMD_FOG_FAR 205
#define CMD_FOG_NEAR 206
#define CMD_FOG_COLOR 207

#define CMD_PIXEL_MODE 210
#define CMD_CLEAR_BITS 211
#define CMD_SCISSOR_START_POINT 212
#define CMD_SCISSOR_END_POINT 213

#define CMD_CLIP_NEAR 214
#define CMD_CLIP_FAR 215

#define CMD_ALPHA_FUNC 219
#define CMD_DEPTH_FUNC 222
#define CMD_BLEND_FUNC 223
#define CMD_BLEND_SRCFIX 224
#define CMD_BLEND_DSTFIX 225

#define CMD_DITHER_MATRIX_LINE0 226
#define CMD_DITHER_MATRIX_LINE1 227
#define CMD_DITHER_MATRIX_LINE2 228
#define CMD_DITHER_MATRIX_LINE3 229

#define CMD_DEPTH_MASK 231

#define CMD_TRANSFER_KICK 234
#define CMD_TRANSFER_SRC_OFFSET 235
#define CMD_TRANSFER_DST_OFFSET 236
#define CMD_TRANSFER_SIZE 237
