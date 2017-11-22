# Component makefile for extras/uROSnode

# expected anyone using bmp driver includes it as 'uROSnode/*.h'
INC_DIRS += $(uROSnode_ROOT)..

# args for passing into compile rule generation
uROSnode_SRC_DIR =  $(uROSnode_ROOT)

$(eval $(call component_compile_rules,uROSnode))
