# THIS FILE WAS AUTOMATICALY GENERATED!
# ANY MODIFICATION WILL BE OVERWRITTEN!

# To improve project view in Clion    :
# Tools > CMake > Change Project Root

cmake_minimum_required(VERSION 3.5)
project(libartd-compiler)
set(ANDROID_ROOT ${CMAKE_SOURCE_DIR}/..)

set(CMAKE_C_COMPILER "${ANDROID_ROOT}/prebuilts/clang/host/linux-x86/clang-stable/bin/clang")
set(CMAKE_CXX_COMPILER "${ANDROID_ROOT}/prebuilts/clang/host/linux-x86/clang-stable/bin/clang++")
list(APPEND
        SOURCE_FILES
        ${ANDROID_ROOT}/art/compiler/compiled_method.cc
        ${ANDROID_ROOT}/art/compiler/debug/elf_debug_writer.cc
        ${ANDROID_ROOT}/art/compiler/dex/dex_to_dex_compiler.cc
        ${ANDROID_ROOT}/art/compiler/dex/inline_method_analyser.cc
        ${ANDROID_ROOT}/art/compiler/dex/verified_method.cc
        ${ANDROID_ROOT}/art/compiler/dex/verification_results.cc
        ${ANDROID_ROOT}/art/compiler/dex/quick_compiler_callbacks.cc
        ${ANDROID_ROOT}/art/compiler/driver/compiled_method_storage.cc
        ${ANDROID_ROOT}/art/compiler/driver/compiler_driver.cc
        ${ANDROID_ROOT}/art/compiler/driver/compiler_options.cc
        ${ANDROID_ROOT}/art/compiler/driver/dex_compilation_unit.cc
        ${ANDROID_ROOT}/art/compiler/linker/buffered_output_stream.cc
        ${ANDROID_ROOT}/art/compiler/linker/file_output_stream.cc
        ${ANDROID_ROOT}/art/compiler/linker/multi_oat_relative_patcher.cc
        ${ANDROID_ROOT}/art/compiler/linker/output_stream.cc
        ${ANDROID_ROOT}/art/compiler/linker/vector_output_stream.cc
        ${ANDROID_ROOT}/art/compiler/linker/relative_patcher.cc
        ${ANDROID_ROOT}/art/compiler/jit/jit_compiler.cc
        ${ANDROID_ROOT}/art/compiler/jit/jit_logger.cc
        ${ANDROID_ROOT}/art/compiler/jni/quick/calling_convention.cc
        ${ANDROID_ROOT}/art/compiler/jni/quick/jni_compiler.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/block_builder.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/bounds_check_elimination.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/builder.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/cha_guard_optimization.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/code_generator.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/code_generator_utils.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/code_sinking.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/constant_folding.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/dead_code_elimination.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/escape.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/graph_checker.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/graph_visualizer.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/gvn.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/induction_var_analysis.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/induction_var_range.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/inliner.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/instruction_builder.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/instruction_simplifier.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/intrinsics.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/licm.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/linear_order.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/load_store_analysis.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/load_store_elimination.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/locations.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/loop_optimization.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/nodes.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/optimization.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/optimizing_compiler.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/parallel_move_resolver.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/prepare_for_register_allocation.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/reference_type_propagation.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/register_allocation_resolver.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/register_allocator.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/register_allocator_graph_color.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/register_allocator_linear_scan.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/select_generator.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/scheduler.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/sharpening.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/side_effects_analysis.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/ssa_builder.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/ssa_liveness_analysis.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/ssa_phi_elimination.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/stack_map_stream.cc
        ${ANDROID_ROOT}/art/compiler/trampolines/trampoline_compiler.cc
        ${ANDROID_ROOT}/art/compiler/utils/assembler.cc
        ${ANDROID_ROOT}/art/compiler/utils/jni_macro_assembler.cc
        ${ANDROID_ROOT}/art/compiler/utils/swap_space.cc
        ${ANDROID_ROOT}/art/compiler/compiler.cc
        ${ANDROID_ROOT}/art/compiler/elf_writer.cc
        ${ANDROID_ROOT}/art/compiler/elf_writer_quick.cc
        ${ANDROID_ROOT}/art/compiler/image_writer.cc
        ${ANDROID_ROOT}/art/compiler/oat_writer.cc
        ${ANDROID_ROOT}/art/compiler/jni/quick/arm/calling_convention_arm.cc
        ${ANDROID_ROOT}/art/compiler/linker/arm/relative_patcher_arm_base.cc
        ${ANDROID_ROOT}/art/compiler/linker/arm/relative_patcher_thumb2.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/code_generator_arm_vixl.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/code_generator_vector_arm_vixl.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/instruction_simplifier_arm.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/instruction_simplifier_shared.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/intrinsics_arm_vixl.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/nodes_shared.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/scheduler_arm.cc
        ${ANDROID_ROOT}/art/compiler/utils/arm/assembler_arm_vixl.cc
        ${ANDROID_ROOT}/art/compiler/utils/arm/constants_arm.cc
        ${ANDROID_ROOT}/art/compiler/utils/arm/jni_macro_assembler_arm_vixl.cc
        ${ANDROID_ROOT}/art/compiler/utils/arm/managed_register_arm.cc
        ${ANDROID_ROOT}/art/compiler/jni/quick/arm64/calling_convention_arm64.cc
        ${ANDROID_ROOT}/art/compiler/linker/arm64/relative_patcher_arm64.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/code_generator_arm64.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/code_generator_vector_arm64.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/scheduler_arm64.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/instruction_simplifier_arm64.cc
        ${ANDROID_ROOT}/art/compiler/optimizing/intrinsics_arm64.cc
        ${ANDROID_ROOT}/art/compiler/utils/arm64/assembler_arm64.cc
        ${ANDROID_ROOT}/art/compiler/utils/arm64/jni_macro_assembler_arm64.cc
        ${ANDROID_ROOT}/art/compiler/utils/arm64/managed_register_arm64.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/compiler/art_compiler_operator_srcs/gen/art/compiler/compiled_method.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/compiler/art_compiler_operator_srcs/gen/art/compiler/dex/dex_to_dex_compiler.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/compiler/art_compiler_operator_srcs/gen/art/compiler/driver/compiler_driver.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/compiler/art_compiler_operator_srcs/gen/art/compiler/driver/compiler_options.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/compiler/art_compiler_operator_srcs/gen/art/compiler/image_writer.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/compiler/art_compiler_operator_srcs/gen/art/compiler/optimizing/locations.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/compiler/art_compiler_operator_srcs/gen/art/compiler/utils/arm/constants_arm.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/compiler/art_compiler_operator_srcs/gen/art/compiler/utils/mips/assembler_mips.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/compiler/art_compiler_operator_srcs/gen/art/compiler/utils/mips64/assembler_mips64.operator_out.cc

        ${ANDROID_ROOT}/art/runtime/aot_class_linker.cc
        ${ANDROID_ROOT}/art/runtime/art_field.cc
        ${ANDROID_ROOT}/art/runtime/art_method.cc
        ${ANDROID_ROOT}/art/runtime/atomic.cc
        ${ANDROID_ROOT}/art/runtime/barrier.cc
        ${ANDROID_ROOT}/art/runtime/base/allocator.cc
        ${ANDROID_ROOT}/art/runtime/base/arena_allocator.cc
        ${ANDROID_ROOT}/art/runtime/base/arena_bit_vector.cc
        ${ANDROID_ROOT}/art/runtime/base/bit_vector.cc
        ${ANDROID_ROOT}/art/runtime/base/file_magic.cc
        ${ANDROID_ROOT}/art/runtime/base/hex_dump.cc
        ${ANDROID_ROOT}/art/runtime/base/logging.cc
        ${ANDROID_ROOT}/art/runtime/base/mutex.cc
        ${ANDROID_ROOT}/art/runtime/base/safe_copy.cc
        ${ANDROID_ROOT}/art/runtime/base/scoped_arena_allocator.cc
        ${ANDROID_ROOT}/art/runtime/base/scoped_flock.cc
        ${ANDROID_ROOT}/art/runtime/base/stringpiece.cc
        ${ANDROID_ROOT}/art/runtime/base/time_utils.cc
        ${ANDROID_ROOT}/art/runtime/base/timing_logger.cc
        ${ANDROID_ROOT}/art/runtime/base/unix_file/fd_file.cc
        ${ANDROID_ROOT}/art/runtime/base/unix_file/random_access_file_utils.cc
        ${ANDROID_ROOT}/art/runtime/cha.cc
        ${ANDROID_ROOT}/art/runtime/check_jni.cc
        ${ANDROID_ROOT}/art/runtime/class_linker.cc
        ${ANDROID_ROOT}/art/runtime/class_loader_context.cc
        ${ANDROID_ROOT}/art/runtime/class_table.cc
        ${ANDROID_ROOT}/art/runtime/code_simulator_container.cc
        ${ANDROID_ROOT}/art/runtime/common_throws.cc
        ${ANDROID_ROOT}/art/runtime/compiler_filter.cc
        ${ANDROID_ROOT}/art/runtime/debugger.cc
        ${ANDROID_ROOT}/art/runtime/dex_file.cc
        ${ANDROID_ROOT}/art/runtime/dex_file_annotations.cc
        ${ANDROID_ROOT}/art/runtime/dex_file_layout.cc
        ${ANDROID_ROOT}/art/runtime/dex_file_tracking_registrar.cc
        ${ANDROID_ROOT}/art/runtime/dex_file_verifier.cc
        ${ANDROID_ROOT}/art/runtime/dex_instruction.cc
        ${ANDROID_ROOT}/art/runtime/dex_to_dex_decompiler.cc
        ${ANDROID_ROOT}/art/runtime/elf_file.cc
        ${ANDROID_ROOT}/art/runtime/exec_utils.cc
        ${ANDROID_ROOT}/art/runtime/fault_handler.cc
        ${ANDROID_ROOT}/art/runtime/gc/allocation_record.cc
        ${ANDROID_ROOT}/art/runtime/gc/allocator/dlmalloc.cc
        ${ANDROID_ROOT}/art/runtime/gc/allocator/rosalloc.cc
        ${ANDROID_ROOT}/art/runtime/gc/accounting/bitmap.cc
        ${ANDROID_ROOT}/art/runtime/gc/accounting/card_table.cc
        ${ANDROID_ROOT}/art/runtime/gc/accounting/heap_bitmap.cc
        ${ANDROID_ROOT}/art/runtime/gc/accounting/mod_union_table.cc
        ${ANDROID_ROOT}/art/runtime/gc/accounting/remembered_set.cc
        ${ANDROID_ROOT}/art/runtime/gc/accounting/space_bitmap.cc
        ${ANDROID_ROOT}/art/runtime/gc/collector/concurrent_copying.cc
        ${ANDROID_ROOT}/art/runtime/gc/collector/garbage_collector.cc
        ${ANDROID_ROOT}/art/runtime/gc/collector/immune_region.cc
        ${ANDROID_ROOT}/art/runtime/gc/collector/immune_spaces.cc
        ${ANDROID_ROOT}/art/runtime/gc/collector/mark_compact.cc
        ${ANDROID_ROOT}/art/runtime/gc/collector/mark_sweep.cc
        ${ANDROID_ROOT}/art/runtime/gc/collector/partial_mark_sweep.cc
        ${ANDROID_ROOT}/art/runtime/gc/collector/semi_space.cc
        ${ANDROID_ROOT}/art/runtime/gc/collector/sticky_mark_sweep.cc
        ${ANDROID_ROOT}/art/runtime/gc/gc_cause.cc
        ${ANDROID_ROOT}/art/runtime/gc/heap.cc
        ${ANDROID_ROOT}/art/runtime/gc/reference_processor.cc
        ${ANDROID_ROOT}/art/runtime/gc/reference_queue.cc
        ${ANDROID_ROOT}/art/runtime/gc/scoped_gc_critical_section.cc
        ${ANDROID_ROOT}/art/runtime/gc/space/bump_pointer_space.cc
        ${ANDROID_ROOT}/art/runtime/gc/space/dlmalloc_space.cc
        ${ANDROID_ROOT}/art/runtime/gc/space/image_space.cc
        ${ANDROID_ROOT}/art/runtime/gc/space/large_object_space.cc
        ${ANDROID_ROOT}/art/runtime/gc/space/malloc_space.cc
        ${ANDROID_ROOT}/art/runtime/gc/space/region_space.cc
        ${ANDROID_ROOT}/art/runtime/gc/space/rosalloc_space.cc
        ${ANDROID_ROOT}/art/runtime/gc/space/space.cc
        ${ANDROID_ROOT}/art/runtime/gc/space/zygote_space.cc
        ${ANDROID_ROOT}/art/runtime/gc/task_processor.cc
        ${ANDROID_ROOT}/art/runtime/gc/verification.cc
        ${ANDROID_ROOT}/art/runtime/hprof/hprof.cc
        ${ANDROID_ROOT}/art/runtime/image.cc
        ${ANDROID_ROOT}/art/runtime/indirect_reference_table.cc
        ${ANDROID_ROOT}/art/runtime/instrumentation.cc
        ${ANDROID_ROOT}/art/runtime/intern_table.cc
        ${ANDROID_ROOT}/art/runtime/interpreter/interpreter.cc
        ${ANDROID_ROOT}/art/runtime/interpreter/interpreter_common.cc
        ${ANDROID_ROOT}/art/runtime/interpreter/interpreter_intrinsics.cc
        ${ANDROID_ROOT}/art/runtime/interpreter/interpreter_switch_impl.cc
        ${ANDROID_ROOT}/art/runtime/interpreter/lock_count_data.cc
        ${ANDROID_ROOT}/art/runtime/interpreter/shadow_frame.cc
        ${ANDROID_ROOT}/art/runtime/interpreter/unstarted_runtime.cc
        ${ANDROID_ROOT}/art/runtime/java_frame_root_info.cc
        ${ANDROID_ROOT}/art/runtime/java_vm_ext.cc
        ${ANDROID_ROOT}/art/runtime/jdwp/jdwp_event.cc
        ${ANDROID_ROOT}/art/runtime/jdwp/jdwp_expand_buf.cc
        ${ANDROID_ROOT}/art/runtime/jdwp/jdwp_handler.cc
        ${ANDROID_ROOT}/art/runtime/jdwp/jdwp_main.cc
        ${ANDROID_ROOT}/art/runtime/jdwp/jdwp_request.cc
        ${ANDROID_ROOT}/art/runtime/jdwp/jdwp_socket.cc
        ${ANDROID_ROOT}/art/runtime/jdwp/object_registry.cc
        ${ANDROID_ROOT}/art/runtime/jni_env_ext.cc
        ${ANDROID_ROOT}/art/runtime/jit/debugger_interface.cc
        ${ANDROID_ROOT}/art/runtime/jit/jit.cc
        ${ANDROID_ROOT}/art/runtime/jit/jit_code_cache.cc
        ${ANDROID_ROOT}/art/runtime/jit/profile_compilation_info.cc
        ${ANDROID_ROOT}/art/runtime/jit/profiling_info.cc
        ${ANDROID_ROOT}/art/runtime/jit/profile_saver.cc
        ${ANDROID_ROOT}/art/runtime/jni_internal.cc
        ${ANDROID_ROOT}/art/runtime/jobject_comparator.cc
        ${ANDROID_ROOT}/art/runtime/linear_alloc.cc
        ${ANDROID_ROOT}/art/runtime/managed_stack.cc
        ${ANDROID_ROOT}/art/runtime/mem_map.cc
        ${ANDROID_ROOT}/art/runtime/memory_region.cc
        ${ANDROID_ROOT}/art/runtime/method_handles.cc
        ${ANDROID_ROOT}/art/runtime/mirror/array.cc
        ${ANDROID_ROOT}/art/runtime/mirror/call_site.cc
        ${ANDROID_ROOT}/art/runtime/mirror/class.cc
        ${ANDROID_ROOT}/art/runtime/mirror/class_ext.cc
        ${ANDROID_ROOT}/art/runtime/mirror/dex_cache.cc
        ${ANDROID_ROOT}/art/runtime/mirror/emulated_stack_frame.cc
        ${ANDROID_ROOT}/art/runtime/mirror/executable.cc
        ${ANDROID_ROOT}/art/runtime/mirror/field.cc
        ${ANDROID_ROOT}/art/runtime/mirror/method.cc
        ${ANDROID_ROOT}/art/runtime/mirror/method_handle_impl.cc
        ${ANDROID_ROOT}/art/runtime/mirror/method_handles_lookup.cc
        ${ANDROID_ROOT}/art/runtime/mirror/method_type.cc
        ${ANDROID_ROOT}/art/runtime/mirror/object.cc
        ${ANDROID_ROOT}/art/runtime/mirror/reference.cc
        ${ANDROID_ROOT}/art/runtime/mirror/stack_trace_element.cc
        ${ANDROID_ROOT}/art/runtime/mirror/string.cc
        ${ANDROID_ROOT}/art/runtime/mirror/throwable.cc
        ${ANDROID_ROOT}/art/runtime/monitor.cc
        ${ANDROID_ROOT}/art/runtime/native_bridge_art_interface.cc
        ${ANDROID_ROOT}/art/runtime/native_stack_dump.cc
        ${ANDROID_ROOT}/art/runtime/native/dalvik_system_DexFile.cc
        ${ANDROID_ROOT}/art/runtime/native/dalvik_system_VMDebug.cc
        ${ANDROID_ROOT}/art/runtime/native/dalvik_system_VMRuntime.cc
        ${ANDROID_ROOT}/art/runtime/native/dalvik_system_VMStack.cc
        ${ANDROID_ROOT}/art/runtime/native/dalvik_system_ZygoteHooks.cc
        ${ANDROID_ROOT}/art/runtime/native/java_lang_Class.cc
        ${ANDROID_ROOT}/art/runtime/native/java_lang_Object.cc
        ${ANDROID_ROOT}/art/runtime/native/java_lang_String.cc
        ${ANDROID_ROOT}/art/runtime/native/java_lang_StringFactory.cc
        ${ANDROID_ROOT}/art/runtime/native/java_lang_System.cc
        ${ANDROID_ROOT}/art/runtime/native/java_lang_Thread.cc
        ${ANDROID_ROOT}/art/runtime/native/java_lang_Throwable.cc
        ${ANDROID_ROOT}/art/runtime/native/java_lang_VMClassLoader.cc
        ${ANDROID_ROOT}/art/runtime/native/java_lang_Void.cc
        ${ANDROID_ROOT}/art/runtime/native/java_lang_invoke_MethodHandleImpl.cc
        ${ANDROID_ROOT}/art/runtime/native/java_lang_ref_FinalizerReference.cc
        ${ANDROID_ROOT}/art/runtime/native/java_lang_ref_Reference.cc
        ${ANDROID_ROOT}/art/runtime/native/java_lang_reflect_Array.cc
        ${ANDROID_ROOT}/art/runtime/native/java_lang_reflect_Constructor.cc
        ${ANDROID_ROOT}/art/runtime/native/java_lang_reflect_Executable.cc
        ${ANDROID_ROOT}/art/runtime/native/java_lang_reflect_Field.cc
        ${ANDROID_ROOT}/art/runtime/native/java_lang_reflect_Method.cc
        ${ANDROID_ROOT}/art/runtime/native/java_lang_reflect_Parameter.cc
        ${ANDROID_ROOT}/art/runtime/native/java_lang_reflect_Proxy.cc
        ${ANDROID_ROOT}/art/runtime/native/java_util_concurrent_atomic_AtomicLong.cc
        ${ANDROID_ROOT}/art/runtime/native/libcore_util_CharsetUtils.cc
        ${ANDROID_ROOT}/art/runtime/native/org_apache_harmony_dalvik_ddmc_DdmServer.cc
        ${ANDROID_ROOT}/art/runtime/native/org_apache_harmony_dalvik_ddmc_DdmVmInternal.cc
        ${ANDROID_ROOT}/art/runtime/native/sun_misc_Unsafe.cc
        ${ANDROID_ROOT}/art/runtime/non_debuggable_classes.cc
        ${ANDROID_ROOT}/art/runtime/oat.cc
        ${ANDROID_ROOT}/art/runtime/oat_file.cc
        ${ANDROID_ROOT}/art/runtime/oat_file_assistant.cc
        ${ANDROID_ROOT}/art/runtime/oat_file_manager.cc
        ${ANDROID_ROOT}/art/runtime/oat_quick_method_header.cc
        ${ANDROID_ROOT}/art/runtime/object_lock.cc
        ${ANDROID_ROOT}/art/runtime/offsets.cc
        ${ANDROID_ROOT}/art/runtime/os_linux.cc
        ${ANDROID_ROOT}/art/runtime/parsed_options.cc
        ${ANDROID_ROOT}/art/runtime/plugin.cc
        ${ANDROID_ROOT}/art/runtime/primitive.cc
        ${ANDROID_ROOT}/art/runtime/quick_exception_handler.cc
        ${ANDROID_ROOT}/art/runtime/read_barrier.cc
        ${ANDROID_ROOT}/art/runtime/reference_table.cc
        ${ANDROID_ROOT}/art/runtime/reflection.cc
        ${ANDROID_ROOT}/art/runtime/runtime.cc
        ${ANDROID_ROOT}/art/runtime/runtime_callbacks.cc
        ${ANDROID_ROOT}/art/runtime/runtime_common.cc
        ${ANDROID_ROOT}/art/runtime/runtime_options.cc
        ${ANDROID_ROOT}/art/runtime/scoped_thread_state_change.cc
        ${ANDROID_ROOT}/art/runtime/signal_catcher.cc
        ${ANDROID_ROOT}/art/runtime/stack.cc
        ${ANDROID_ROOT}/art/runtime/stack_map.cc
        ${ANDROID_ROOT}/art/runtime/thread.cc
        ${ANDROID_ROOT}/art/runtime/thread_list.cc
        ${ANDROID_ROOT}/art/runtime/thread_pool.cc
        ${ANDROID_ROOT}/art/runtime/ti/agent.cc
        ${ANDROID_ROOT}/art/runtime/trace.cc
        ${ANDROID_ROOT}/art/runtime/transaction.cc
        ${ANDROID_ROOT}/art/runtime/type_lookup_table.cc
        ${ANDROID_ROOT}/art/runtime/utf.cc
        ${ANDROID_ROOT}/art/runtime/utils.cc
        ${ANDROID_ROOT}/art/runtime/vdex_file.cc
        ${ANDROID_ROOT}/art/runtime/verifier/instruction_flags.cc
        ${ANDROID_ROOT}/art/runtime/verifier/method_verifier.cc
        ${ANDROID_ROOT}/art/runtime/verifier/reg_type.cc
        ${ANDROID_ROOT}/art/runtime/verifier/reg_type_cache.cc
        ${ANDROID_ROOT}/art/runtime/verifier/register_line.cc
        ${ANDROID_ROOT}/art/runtime/verifier/verifier_deps.cc
        ${ANDROID_ROOT}/art/runtime/verify_object.cc
        ${ANDROID_ROOT}/art/runtime/well_known_classes.cc
        ${ANDROID_ROOT}/art/runtime/zip_archive.cc
        ${ANDROID_ROOT}/art/runtime/arch/context.cc
        ${ANDROID_ROOT}/art/runtime/arch/instruction_set.cc
        ${ANDROID_ROOT}/art/runtime/arch/instruction_set_features.cc
        ${ANDROID_ROOT}/art/runtime/arch/memcmp16.cc
        ${ANDROID_ROOT}/art/runtime/arch/arm/instruction_set_features_arm.cc
        ${ANDROID_ROOT}/art/runtime/arch/arm/registers_arm.cc
        ${ANDROID_ROOT}/art/runtime/arch/arm64/instruction_set_features_arm64.cc
        ${ANDROID_ROOT}/art/runtime/arch/arm64/registers_arm64.cc
        ${ANDROID_ROOT}/art/runtime/arch/mips/instruction_set_features_mips.cc
        ${ANDROID_ROOT}/art/runtime/arch/mips/registers_mips.cc
        ${ANDROID_ROOT}/art/runtime/arch/mips64/instruction_set_features_mips64.cc
        ${ANDROID_ROOT}/art/runtime/arch/mips64/registers_mips64.cc
        ${ANDROID_ROOT}/art/runtime/arch/x86/instruction_set_features_x86.cc
        ${ANDROID_ROOT}/art/runtime/arch/x86/registers_x86.cc
        ${ANDROID_ROOT}/art/runtime/arch/x86_64/registers_x86_64.cc
        ${ANDROID_ROOT}/art/runtime/entrypoints/entrypoint_utils.cc
        ${ANDROID_ROOT}/art/runtime/entrypoints/jni/jni_entrypoints.cc
        ${ANDROID_ROOT}/art/runtime/entrypoints/math_entrypoints.cc
        ${ANDROID_ROOT}/art/runtime/entrypoints/quick/quick_alloc_entrypoints.cc
        ${ANDROID_ROOT}/art/runtime/entrypoints/quick/quick_cast_entrypoints.cc
        ${ANDROID_ROOT}/art/runtime/entrypoints/quick/quick_deoptimization_entrypoints.cc
        ${ANDROID_ROOT}/art/runtime/entrypoints/quick/quick_dexcache_entrypoints.cc
        ${ANDROID_ROOT}/art/runtime/entrypoints/quick/quick_entrypoints_enum.cc
        ${ANDROID_ROOT}/art/runtime/entrypoints/quick/quick_field_entrypoints.cc
        ${ANDROID_ROOT}/art/runtime/entrypoints/quick/quick_fillarray_entrypoints.cc
        ${ANDROID_ROOT}/art/runtime/entrypoints/quick/quick_jni_entrypoints.cc
        ${ANDROID_ROOT}/art/runtime/entrypoints/quick/quick_lock_entrypoints.cc
        ${ANDROID_ROOT}/art/runtime/entrypoints/quick/quick_math_entrypoints.cc
        ${ANDROID_ROOT}/art/runtime/entrypoints/quick/quick_thread_entrypoints.cc
        ${ANDROID_ROOT}/art/runtime/entrypoints/quick/quick_throw_entrypoints.cc
        ${ANDROID_ROOT}/art/runtime/entrypoints/quick/quick_trampoline_entrypoints.cc
        ${ANDROID_ROOT}/art/runtime/interpreter/mterp/mterp.cc
        ${ANDROID_ROOT}/art/runtime/interpreter/mterp/out/mterp_arm64.S
        ${ANDROID_ROOT}/art/runtime/arch/arm64/context_arm64.cc
        ${ANDROID_ROOT}/art/runtime/arch/arm64/entrypoints_init_arm64.cc
        ${ANDROID_ROOT}/art/runtime/arch/arm64/jni_entrypoints_arm64.S
        ${ANDROID_ROOT}/art/runtime/arch/arm64/memcmp16_arm64.S
        ${ANDROID_ROOT}/art/runtime/arch/arm64/quick_entrypoints_arm64.S
        ${ANDROID_ROOT}/art/runtime/arch/arm64/thread_arm64.cc
        ${ANDROID_ROOT}/art/runtime/monitor_pool.cc
        ${ANDROID_ROOT}/art/runtime/arch/arm64/fault_handler_arm64.cc
        ${ANDROID_ROOT}/art/runtime/jdwp/jdwp_adb.cc
        ${ANDROID_ROOT}/art/runtime/monitor_android.cc
        ${ANDROID_ROOT}/art/runtime/runtime_android.cc
        ${ANDROID_ROOT}/art/runtime/thread_android.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/arch/instruction_set.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/base/allocator.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/base/callee_save_type.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/base/enums.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/base/mutex.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/debugger.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/base/unix_file/fd_file.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/dex_file.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/dex_file_layout.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/dex_instruction.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/dex_instruction_utils.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/gc_root.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/gc/allocator_type.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/gc/allocator/rosalloc.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/gc/collector_type.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/gc/collector/gc_type.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/gc/heap.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/gc/space/region_space.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/gc/space/space.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/gc/weak_root_state.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/image.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/instrumentation.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/indirect_reference_table.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/invoke_type.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/jdwp/jdwp.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/jdwp/jdwp_constants.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/lock_word.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/mirror/class.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/oat.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/object_callbacks.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/process_state.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/stack.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/suspend_reason.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/thread.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/thread_state.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/ti/agent.operator_out.cc
        ${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/art/runtime/verifier/verifier_enums.operator_out.cc
        )

# GLOBAL FLAGS:
# Raw param [0] = '-Iart/compiler'
# Raw param [1] = '-Ibionic/libc/private -Iexternal/icu/icu4c/source/common -Iexternal/lz4/lib -Iexternal/valgrind/include -Iexternal/valgrind -Iexternal/vixl/src -Iexternal/zlib -Ilibnativehelper/platform_include -Iart/disassembler'
# Raw param [2] = '-Iart/compiler'
# Raw param [3] = ''
# Raw param [4] = '${config.Arm64ClangCflags}'
# Raw param [5] = '${config.CommonClangGlobalCflags}'
# Raw param [6] = '${config.DeviceClangGlobalCflags}'
# Raw param [7] = '${config.Arm64ClangCortexA53Cflags}'
# Raw param [8] = '-Iexternal/boringssl/src/include'
# Raw param [9] = '-Iexternal/libcxx/include'
# Raw param [10] = '-Iexternal/libcxxabi/include'
# Raw param [11] = '-Isystem/core/base/include'
# Raw param [12] = '-Iexternal/lz4/lib'
# Raw param [13] = '-Iexternal/lzma/C'
# Raw param [14] = '-Iart/runtime'
# Raw param [15] = '-Iout/soong/.intermediates/art/tools/cpp-define-generator/cpp-define-generator-asm-support/gen'
# Raw param [16] = '-Iart/dexlayout'
# Raw param [17] = '-Isystem/core/libcutils/include'
# Raw param [18] = '-Iout/soong/.intermediates/art/compiler/art_compiler_operator_srcs/gen'
# variable ${config.Arm64ClangCflags} = '-fno-exceptions -Wno-multichar -fno-strict-aliasing -fstack-protector-strong -ffunction-sections -fdata-sections -funwind-tables -Wa,--noexecstack -Werror=format-security -D_FORTIFY_SOURCE=2 -fno-short-enums -no-canonical-prefixes -Werror=pointer-to-int-cast -Werror=int-to-pointer-cast -Werror=implicit-function-declaration -DNDEBUG -O2 -g -Wstrict-aliasing=2'
# Raw param [0] = '-fno-exceptions'
# Raw param [1] = '-Wno-multichar'
# Raw param [2] = '-fno-strict-aliasing'
# Raw param [3] = '-fstack-protector-strong'
# Raw param [4] = '-ffunction-sections'
# Raw param [5] = '-fdata-sections'
# Raw param [6] = '-funwind-tables'
# Raw param [7] = '-Wa,--noexecstack'
# Raw param [8] = '-Werror=format-security'
# Raw param [9] = '-D_FORTIFY_SOURCE=2'
# Raw param [10] = '-fno-short-enums'
# Raw param [11] = '-no-canonical-prefixes'
# Raw param [12] = '-Werror=pointer-to-int-cast'
# Raw param [13] = '-Werror=int-to-pointer-cast'
# Raw param [14] = '-Werror=implicit-function-declaration'
# Raw param [15] = '-DNDEBUG'
# Raw param [16] = '-O2'
# Raw param [17] = '-g'
# Raw param [18] = '-Wstrict-aliasing=2'
# FLAG '-fno-exceptions' became -fno-exceptions
# FLAG '-Wno-multichar' became -Wno-multichar
# FLAG '-fno-strict-aliasing' became -fno-strict-aliasing
# FLAG '-fstack-protector-strong' became -fstack-protector-strong
# FLAG '-ffunction-sections' became -ffunction-sections
# FLAG '-fdata-sections' became -fdata-sections
# FLAG '-funwind-tables' became -funwind-tables
# FLAG '-Wa,--noexecstack' became -Wa,--noexecstack
# FLAG '-Werror=format-security' became -Werror=format-security
# FLAG '-D_FORTIFY_SOURCE=2' became -D_FORTIFY_SOURCE=2
# FLAG '-fno-short-enums' became -fno-short-enums
# FLAG '-no-canonical-prefixes' became -no-canonical-prefixes
# FLAG '-Werror=pointer-to-int-cast' became -Werror=pointer-to-int-cast
# FLAG '-Werror=int-to-pointer-cast' became -Werror=int-to-pointer-cast
# FLAG '-Werror=implicit-function-declaration' became -Werror=implicit-function-declaration
# FLAG '-DNDEBUG' became -DNDEBUG
# FLAG '-O2' became -O2
# FLAG '-g' became -g
# FLAG '-Wstrict-aliasing=2' became -Wstrict-aliasing=2
# variable ${config.CommonClangGlobalCflags} = '-DANDROID -fmessage-length=0 -W -Wall -Wno-unused -Winit-self -Wpointer-arith -DNDEBUG -UDEBUG -fdebug-prefix-map=/proc/self/cwd= -D__compiler_offsetof=__builtin_offsetof -Werror=int-conversion -Wno-reserved-id-macro -Wno-format-pedantic -Wno-unused-command-line-argument -fcolor-diagnostics -Wno-expansion-to-defined -fdebug-prefix-map=$$PWD/='
# Raw param [0] = '-DANDROID'
# Raw param [1] = '-fmessage-length=0'
# Raw param [2] = '-W'
# Raw param [3] = '-Wall'
# Raw param [4] = '-Wno-unused'
# Raw param [5] = '-Winit-self'
# Raw param [6] = '-Wpointer-arith'
# Raw param [7] = '-DNDEBUG'
# Raw param [8] = '-UDEBUG'
# Raw param [9] = '-fdebug-prefix-map=/proc/self/cwd='
# Raw param [10] = '-D__compiler_offsetof=__builtin_offsetof'
# Raw param [11] = '-Werror=int-conversion'
# Raw param [12] = '-Wno-reserved-id-macro'
# Raw param [13] = '-Wno-format-pedantic'
# Raw param [14] = '-Wno-unused-command-line-argument'
# Raw param [15] = '-fcolor-diagnostics'
# Raw param [16] = '-Wno-expansion-to-defined'
# Raw param [17] = '-fdebug-prefix-map=$$PWD/='
# FLAG '-DANDROID' became -DANDROID
# FLAG '-fmessage-length=0' became -fmessage-length=0
# FLAG '-W' became -W
# FLAG '-Wall' became -Wall
# FLAG '-Wno-unused' became -Wno-unused
# FLAG '-Winit-self' became -Winit-self
# FLAG '-Wpointer-arith' became -Wpointer-arith
# FLAG '-DNDEBUG' became -DNDEBUG
# FLAG '-UDEBUG' became -UDEBUG
# FLAG '-fdebug-prefix-map=/proc/self/cwd=' became -fdebug-prefix-map=/proc/self/cwd=
# FLAG '-D__compiler_offsetof=__builtin_offsetof' became -D__compiler_offsetof=__builtin_offsetof
# FLAG '-Werror=int-conversion' became -Werror=int-conversion
# FLAG '-Wno-reserved-id-macro' became -Wno-reserved-id-macro
# FLAG '-Wno-format-pedantic' became -Wno-format-pedantic
# FLAG '-Wno-unused-command-line-argument' became -Wno-unused-command-line-argument
# FLAG '-fcolor-diagnostics' became -fcolor-diagnostics
# FLAG '-Wno-expansion-to-defined' became -Wno-expansion-to-defined
# FLAG '-fdebug-prefix-map=$$PWD/=' became -fdebug-prefix-map=$$PWD/=
# variable ${config.DeviceClangGlobalCflags} = '-Werror=return-type -Werror=non-virtual-dtor -Werror=address -Werror=sequence-point -Werror=date-time -nostdlibinc'
# Raw param [0] = '-Werror=return-type'
# Raw param [1] = '-Werror=non-virtual-dtor'
# Raw param [2] = '-Werror=address'
# Raw param [3] = '-Werror=sequence-point'
# Raw param [4] = '-Werror=date-time'
# Raw param [5] = '-nostdlibinc'
# FLAG '-Werror=return-type' became -Werror=return-type
# FLAG '-Werror=non-virtual-dtor' became -Werror=non-virtual-dtor
# FLAG '-Werror=address' became -Werror=address
# FLAG '-Werror=sequence-point' became -Werror=sequence-point
# FLAG '-Werror=date-time' became -Werror=date-time
# FLAG '-nostdlibinc' became -nostdlibinc
# variable ${config.Arm64ClangCortexA53Cflags} = '-mcpu=cortex-a53'
# Raw param [0] = '-mcpu=cortex-a53'
# FLAG '-mcpu=cortex-a53' became -mcpu=cortex-a53

include_directories(
        "${ANDROID_ROOT}/art/compiler"
        "${ANDROID_ROOT}/bionic/libc/private -Iexternal/icu/icu4c/source/common -Iexternal/lz4/lib -Iexternal/valgrind/include -Iexternal/valgrind -Iexternal/vixl/src -Iexternal/zlib -Ilibnativehelper/platform_include -Iart/disassembler"
        "${ANDROID_ROOT}/art/compiler"
        "${ANDROID_ROOT}/external/boringssl/src/include"
        "${ANDROID_ROOT}/external/libcxx/include"
        "${ANDROID_ROOT}/external/libcxxabi/include"
        "${ANDROID_ROOT}/system/core/base/include"
        "${ANDROID_ROOT}/external/lz4/lib"
        "${ANDROID_ROOT}/external/lzma/C"
        "${ANDROID_ROOT}/art/runtime"
        "${ANDROID_ROOT}/out/soong/.intermediates/art/tools/cpp-define-generator/cpp-define-generator-asm-support/gen"
        "${ANDROID_ROOT}/art/dexlayout"
        "${ANDROID_ROOT}/system/core/libcutils/include"
        "${ANDROID_ROOT}/out/soong/.intermediates/art/compiler/art_compiler_operator_srcs/gen"

        "${ANDROID_ROOT}/art/runtime"
        "${ANDROID_ROOT}/bionic/libc/private -Iexternal/icu/icu4c/source/common -Iexternal/lz4/lib -Iexternal/valgrind/include -Iexternal/valgrind -Iexternal/vixl/src -Iexternal/zlib -Ilibnativehelper/platform_include -Iart/cmdline -Iart/sigchainlib -Iart"
        "${ANDROID_ROOT}/art/runtime"
        "${ANDROID_ROOT}/system/core/libziparchive/include"
        "${ANDROID_ROOT}/external/zlib"
        "${ANDROID_ROOT}/system/core/base/include"
        "${ANDROID_ROOT}/external/libcxx/include"
        "${ANDROID_ROOT}/external/libcxxabi/include"
        "${ANDROID_ROOT}/libnativehelper/include"
        "${ANDROID_ROOT}/libnativehelper/platform_include"
        "${ANDROID_ROOT}/libnativehelper/include_jni"
        "${ANDROID_ROOT}/system/core/libnativebridge/include"
        "${ANDROID_ROOT}/system/core/libnativeloader/include"
        "${ANDROID_ROOT}/system/core/libbacktrace/include"
        "${ANDROID_ROOT}/system/core/demangle/include"
        "${ANDROID_ROOT}/external/lz4/lib"
        "${ANDROID_ROOT}/system/core/liblog/include"
        "${ANDROID_ROOT}/system/core/libcutils/include"
        "${ANDROID_ROOT}/system/core/libutils/include"
        "${ANDROID_ROOT}/system/core/libsystem/include"
        "${ANDROID_ROOT}/system/core/debuggerd/tombstoned/include"
        "${ANDROID_ROOT}/system/core/debuggerd/common/include"
        "${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen"
        "${ANDROID_ROOT}/out/soong/.intermediates/art/tools/cpp-define-generator/cpp-define-generator-asm-support/gen"
)

file (GLOB_RECURSE TMP_HEADERS
        "${ANDROID_ROOT}/art/compiler/**/*.h"
        "${ANDROID_ROOT}/bionic/libc/private -Iexternal/icu/icu4c/source/common -Iexternal/lz4/lib -Iexternal/valgrind/include -Iexternal/valgrind -Iexternal/vixl/src -Iexternal/zlib -Ilibnativehelper/platform_include -Iart/disassembler/**/*.h"
        "${ANDROID_ROOT}/art/compiler/**/*.h"
        "${ANDROID_ROOT}/external/boringssl/src/include/**/*.h"
        "${ANDROID_ROOT}/external/libcxx/include/**/*.h"
        "${ANDROID_ROOT}/external/libcxxabi/include/**/*.h"
        "${ANDROID_ROOT}/system/core/base/include/**/*.h"
        "${ANDROID_ROOT}/external/lz4/lib/**/*.h"
        "${ANDROID_ROOT}/external/lzma/C/**/*.h"
        "${ANDROID_ROOT}/art/runtime/**/*.h"
        "${ANDROID_ROOT}/out/soong/.intermediates/art/tools/cpp-define-generator/cpp-define-generator-asm-support/gen/**/*.h"
        "${ANDROID_ROOT}/art/dexlayout/**/*.h"
        "${ANDROID_ROOT}/system/core/libcutils/include/**/*.h"
        "${ANDROID_ROOT}/out/soong/.intermediates/art/compiler/art_compiler_operator_srcs/gen/**/*.h"

        "${ANDROID_ROOT}/art/runtime/**/*.h"
        "${ANDROID_ROOT}/bionic/libc/private -Iexternal/icu/icu4c/source/common -Iexternal/lz4/lib -Iexternal/valgrind/include -Iexternal/valgrind -Iexternal/vixl/src -Iexternal/zlib -Ilibnativehelper/platform_include -Iart/cmdline -Iart/sigchainlib -Iart/**/*.h"
        "${ANDROID_ROOT}/art/runtime/**/*.h"
        "${ANDROID_ROOT}/system/core/libziparchive/include/**/*.h"
        "${ANDROID_ROOT}/external/zlib/**/*.h"
        "${ANDROID_ROOT}/system/core/base/include/**/*.h"
        "${ANDROID_ROOT}/external/libcxx/include/**/*.h"
        "${ANDROID_ROOT}/external/libcxxabi/include/**/*.h"
        "${ANDROID_ROOT}/libnativehelper/include/**/*.h"
        "${ANDROID_ROOT}/libnativehelper/platform_include/**/*.h"
        "${ANDROID_ROOT}/libnativehelper/include_jni/**/*.h"
        "${ANDROID_ROOT}/system/core/libnativebridge/include/**/*.h"
        "${ANDROID_ROOT}/system/core/libnativeloader/include/**/*.h"
        "${ANDROID_ROOT}/system/core/libbacktrace/include/**/*.h"
        "${ANDROID_ROOT}/system/core/demangle/include/**/*.h"
        "${ANDROID_ROOT}/external/lz4/lib/**/*.h"
        "${ANDROID_ROOT}/system/core/liblog/include/**/*.h"
        "${ANDROID_ROOT}/system/core/libcutils/include/**/*.h"
        "${ANDROID_ROOT}/system/core/libutils/include/**/*.h"
        "${ANDROID_ROOT}/system/core/libsystem/include/**/*.h"
        "${ANDROID_ROOT}/system/core/debuggerd/tombstoned/include/**/*.h"
        "${ANDROID_ROOT}/system/core/debuggerd/common/include/**/*.h"
        "${ANDROID_ROOT}/out/soong/.intermediates/art/runtime/art_operator_srcs/gen/**/*.h"
        "${ANDROID_ROOT}/out/soong/.intermediates/art/tools/cpp-define-generator/cpp-define-generator-asm-support/gen/**/*.h"
        )

list (APPEND SOURCE_FILES ${TMP_HEADERS})

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fno-exceptions")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-multichar")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fno-strict-aliasing")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fstack-protector-strong")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -ffunction-sections")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fdata-sections")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -funwind-tables")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wa,--noexecstack")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=format-security")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D_FORTIFY_SOURCE=2")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fno-short-enums")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -no-canonical-prefixes")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=pointer-to-int-cast")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=int-to-pointer-cast")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=implicit-function-declaration")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DNDEBUG")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O2")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wstrict-aliasing=2")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DANDROID")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fmessage-length=0")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -W")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-unused")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Winit-self")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wpointer-arith")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DNDEBUG")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -UDEBUG")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fdebug-prefix-map=/proc/self/cwd=")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D__compiler_offsetof=__builtin_offsetof")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=int-conversion")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-reserved-id-macro")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-format-pedantic")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-unused-command-line-argument")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fcolor-diagnostics")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-expansion-to-defined")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fdebug-prefix-map=$$PWD/=")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=return-type")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=non-virtual-dtor")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=address")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=sequence-point")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror=date-time")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -nostdlibinc")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -mcpu=cortex-a53")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-exceptions")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-multichar")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-strict-aliasing")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fstack-protector-strong")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ffunction-sections")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fdata-sections")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -funwind-tables")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wa,--noexecstack")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror=format-security")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_FORTIFY_SOURCE=2")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-short-enums")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -no-canonical-prefixes")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror=pointer-to-int-cast")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror=int-to-pointer-cast")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror=implicit-function-declaration")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DNDEBUG")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wstrict-aliasing=2")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DANDROID")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fmessage-length=0")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -W")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unused")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Winit-self")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wpointer-arith")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DNDEBUG")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -UDEBUG")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fdebug-prefix-map=/proc/self/cwd=")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__compiler_offsetof=__builtin_offsetof")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror=int-conversion")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-reserved-id-macro")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-format-pedantic")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-unused-command-line-argument")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fcolor-diagnostics")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-expansion-to-defined")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fdebug-prefix-map=$$PWD/=")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror=return-type")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror=non-virtual-dtor")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror=address")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror=sequence-point")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror=date-time")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -nostdlibinc")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -mcpu=cortex-a53")

# CFLAGS:
# Raw param [0] = '-fno-rtti'
# Raw param [1] = '-ggdb3'
# Raw param [2] = '-Wall'
# Raw param [3] = '-Werror'
# Raw param [4] = '-Wextra'
# Raw param [5] = '-Wstrict-aliasing'
# Raw param [6] = '-fstrict-aliasing'
# Raw param [7] = '-Wunreachable-code'
# Raw param [8] = '-Wredundant-decls'
# Raw param [9] = '-Wshadow'
# Raw param [10] = '-Wunused'
# Raw param [11] = '-fvisibility=protected'
# Raw param [12] = '-Wthread-safety'
# Raw param [13] = '-Wthread-safety-negative'
# Raw param [14] = '-Wimplicit-fallthrough'
# Raw param [15] = '-Wfloat-equal'
# Raw param [16] = '-Wint-to-void-pointer-cast'
# Raw param [17] = '-Wused-but-marked-unused'
# Raw param [18] = '-Wdeprecated'
# Raw param [19] = '-Wunreachable-code-break'
# Raw param [20] = '-Wunreachable-code-return'
# Raw param [21] = '-D_LIBCPP_ENABLE_THREAD_SAFETY_ANNOTATIONS'
# Raw param [22] = '-O3'
# Raw param [23] = '-DART_DEFAULT_GC_TYPE_IS_CMS'
# Raw param [24] = '-DART_ENABLE_VDEX'
# Raw param [25] = '-DIMT_SIZE=43'
# Raw param [26] = '-DART_USE_READ_BARRIER=1'
# Raw param [27] = '-DART_READ_BARRIER_TYPE_IS_BAKER=1'
# Raw param [28] = '-DART_STACK_OVERFLOW_GAP_arm=8192'
# Raw param [29] = '-DART_STACK_OVERFLOW_GAP_arm64=8192'
# Raw param [30] = '-DART_STACK_OVERFLOW_GAP_mips=16384'
# Raw param [31] = '-DART_STACK_OVERFLOW_GAP_mips64=16384'
# Raw param [32] = '-DART_STACK_OVERFLOW_GAP_x86=8192'
# Raw param [33] = '-DART_STACK_OVERFLOW_GAP_x86_64=8192'
# Raw param [34] = '-DDYNAMIC_ANNOTATIONS_ENABLED=1'
# Raw param [35] = '-DVIXL_DEBUG'
# Raw param [36] = '-UNDEBUG'
# Raw param [37] = '-O2'
# Raw param [38] = '-DART_TARGET'
# Raw param [39] = '-Wmissing-noreturn'
# Raw param [40] = '-DART_ENABLE_CODEGEN_arm'
# Raw param [41] = '-DART_ENABLE_CODEGEN_arm64'
# Raw param [42] = '-Wframe-larger-than=1736'
# Raw param [43] = '-DART_FRAME_SIZE_LIMIT=1736'
# Raw param [44] = '-DART_BASE_ADDRESS=0x70000000'
# Raw param [45] = '-DART_TARGET_ANDROID'
# Raw param [46] = '-DART_BASE_ADDRESS_MIN_DELTA=-0x1000000'
# Raw param [47] = '-DART_BASE_ADDRESS_MAX_DELTA=0x1000000'
# Raw param [48] = '-Wno-frame-larger-than='
# Raw param [49] = '-target aarch64-linux-android'
# Raw param [50] = '-B${config.Arm64GccRoot}/aarch64-linux-android/bin'
# Raw param [51] = '-DANDROID_STRICT'
# Raw param [52] = '-fPIC'
# Raw param [53] = '-D_USING_LIBCXX'
# FLAG '-fno-rtti' became -fno-rtti
# FLAG '-ggdb3' became -ggdb3
# FLAG '-Wall' became -Wall
# FLAG '-Werror' became -Werror
# FLAG '-Wextra' became -Wextra
# FLAG '-Wstrict-aliasing' became -Wstrict-aliasing
# FLAG '-fstrict-aliasing' became -fstrict-aliasing
# FLAG '-Wunreachable-code' became -Wunreachable-code
# FLAG '-Wredundant-decls' became -Wredundant-decls
# FLAG '-Wshadow' became -Wshadow
# FLAG '-Wunused' became -Wunused
# FLAG '-fvisibility=protected' became -fvisibility=protected
# FLAG '-Wthread-safety' became -Wthread-safety
# FLAG '-Wthread-safety-negative' became -Wthread-safety-negative
# FLAG '-Wimplicit-fallthrough' became -Wimplicit-fallthrough
# FLAG '-Wfloat-equal' became -Wfloat-equal
# FLAG '-Wint-to-void-pointer-cast' became -Wint-to-void-pointer-cast
# FLAG '-Wused-but-marked-unused' became -Wused-but-marked-unused
# FLAG '-Wdeprecated' became -Wdeprecated
# FLAG '-Wunreachable-code-break' became -Wunreachable-code-break
# FLAG '-Wunreachable-code-return' became -Wunreachable-code-return
# FLAG '-D_LIBCPP_ENABLE_THREAD_SAFETY_ANNOTATIONS' became -D_LIBCPP_ENABLE_THREAD_SAFETY_ANNOTATIONS
# FLAG '-O3' became -O3
# FLAG '-DART_DEFAULT_GC_TYPE_IS_CMS' became -DART_DEFAULT_GC_TYPE_IS_CMS
# FLAG '-DART_ENABLE_VDEX' became -DART_ENABLE_VDEX
# FLAG '-DIMT_SIZE=43' became -DIMT_SIZE=43
# FLAG '-DART_USE_READ_BARRIER=1' became -DART_USE_READ_BARRIER=1
# FLAG '-DART_READ_BARRIER_TYPE_IS_BAKER=1' became -DART_READ_BARRIER_TYPE_IS_BAKER=1
# FLAG '-DART_STACK_OVERFLOW_GAP_arm=8192' became -DART_STACK_OVERFLOW_GAP_arm=8192
# FLAG '-DART_STACK_OVERFLOW_GAP_arm64=8192' became -DART_STACK_OVERFLOW_GAP_arm64=8192
# FLAG '-DART_STACK_OVERFLOW_GAP_mips=16384' became -DART_STACK_OVERFLOW_GAP_mips=16384
# FLAG '-DART_STACK_OVERFLOW_GAP_mips64=16384' became -DART_STACK_OVERFLOW_GAP_mips64=16384
# FLAG '-DART_STACK_OVERFLOW_GAP_x86=8192' became -DART_STACK_OVERFLOW_GAP_x86=8192
# FLAG '-DART_STACK_OVERFLOW_GAP_x86_64=8192' became -DART_STACK_OVERFLOW_GAP_x86_64=8192
# FLAG '-DDYNAMIC_ANNOTATIONS_ENABLED=1' became -DDYNAMIC_ANNOTATIONS_ENABLED=1
# FLAG '-DVIXL_DEBUG' became -DVIXL_DEBUG
# FLAG '-UNDEBUG' became -UNDEBUG
# FLAG '-O2' became -O2
# FLAG '-DART_TARGET' became -DART_TARGET
# FLAG '-Wmissing-noreturn' became -Wmissing-noreturn
# FLAG '-DART_ENABLE_CODEGEN_arm' became -DART_ENABLE_CODEGEN_arm
# FLAG '-DART_ENABLE_CODEGEN_arm64' became -DART_ENABLE_CODEGEN_arm64
# FLAG '-Wframe-larger-than=1736' became -Wframe-larger-than=1736
# FLAG '-DART_FRAME_SIZE_LIMIT=1736' became -DART_FRAME_SIZE_LIMIT=1736
# FLAG '-DART_BASE_ADDRESS=0x70000000' became -DART_BASE_ADDRESS=0x70000000
# FLAG '-DART_TARGET_ANDROID' became -DART_TARGET_ANDROID
# FLAG '-DART_BASE_ADDRESS_MIN_DELTA=-0x1000000' became -DART_BASE_ADDRESS_MIN_DELTA=-0x1000000
# FLAG '-DART_BASE_ADDRESS_MAX_DELTA=0x1000000' became -DART_BASE_ADDRESS_MAX_DELTA=0x1000000
# FLAG '-Wno-frame-larger-than=' became -Wno-frame-larger-than=
# FLAG '-target aarch64-linux-android' became -target aarch64-linux-android
# FLAG '-B${config.Arm64GccRoot}/aarch64-linux-android/bin' became -B${config.Arm64GccRoot}/aarch64-linux-android/bin
# FLAG '-DANDROID_STRICT' became -DANDROID_STRICT
# FLAG '-fPIC' became -fPIC
# FLAG '-D_USING_LIBCXX' became -D_USING_LIBCXX
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fno-rtti")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -ggdb3")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wextra")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wstrict-aliasing")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fstrict-aliasing")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wunreachable-code")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wredundant-decls")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wshadow")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wunused")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fvisibility=protected")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wthread-safety")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wthread-safety-negative")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wimplicit-fallthrough")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wfloat-equal")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wint-to-void-pointer-cast")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wused-but-marked-unused")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wdeprecated")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wunreachable-code-break")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wunreachable-code-return")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D_LIBCPP_ENABLE_THREAD_SAFETY_ANNOTATIONS")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O3")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DART_DEFAULT_GC_TYPE_IS_CMS")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DART_ENABLE_VDEX")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DIMT_SIZE=43")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DART_USE_READ_BARRIER=1")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DART_READ_BARRIER_TYPE_IS_BAKER=1")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DART_STACK_OVERFLOW_GAP_arm=8192")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DART_STACK_OVERFLOW_GAP_arm64=8192")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DART_STACK_OVERFLOW_GAP_mips=16384")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DART_STACK_OVERFLOW_GAP_mips64=16384")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DART_STACK_OVERFLOW_GAP_x86=8192")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DART_STACK_OVERFLOW_GAP_x86_64=8192")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DDYNAMIC_ANNOTATIONS_ENABLED=1")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DVIXL_DEBUG")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -UNDEBUG")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O2")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DART_TARGET")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wmissing-noreturn")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DART_ENABLE_CODEGEN_arm")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DART_ENABLE_CODEGEN_arm64")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wframe-larger-than=1736")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DART_FRAME_SIZE_LIMIT=1736")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DART_BASE_ADDRESS=0x70000000")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DART_TARGET_ANDROID")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DART_BASE_ADDRESS_MIN_DELTA=-0x1000000")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DART_BASE_ADDRESS_MAX_DELTA=0x1000000")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-frame-larger-than=")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -target aarch64-linux-android")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -B${config.Arm64GccRoot}/aarch64-linux-android/bin")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DANDROID_STRICT")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D_USING_LIBCXX")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-rtti")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ggdb3")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wextra")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wstrict-aliasing")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fstrict-aliasing")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wunreachable-code")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wredundant-decls")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wshadow")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wunused")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fvisibility=protected")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wthread-safety")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wthread-safety-negative")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wimplicit-fallthrough")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wfloat-equal")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wint-to-void-pointer-cast")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wused-but-marked-unused")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wdeprecated")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wunreachable-code-break")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wunreachable-code-return")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_LIBCPP_ENABLE_THREAD_SAFETY_ANNOTATIONS")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DART_DEFAULT_GC_TYPE_IS_CMS")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DART_ENABLE_VDEX")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DIMT_SIZE=43")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DART_USE_READ_BARRIER=1")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DART_READ_BARRIER_TYPE_IS_BAKER=1")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DART_STACK_OVERFLOW_GAP_arm=8192")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DART_STACK_OVERFLOW_GAP_arm64=8192")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DART_STACK_OVERFLOW_GAP_mips=16384")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DART_STACK_OVERFLOW_GAP_mips64=16384")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DART_STACK_OVERFLOW_GAP_x86=8192")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DART_STACK_OVERFLOW_GAP_x86_64=8192")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DDYNAMIC_ANNOTATIONS_ENABLED=1")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DVIXL_DEBUG")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -UNDEBUG")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DART_TARGET")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wmissing-noreturn")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DART_ENABLE_CODEGEN_arm")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DART_ENABLE_CODEGEN_arm64")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wframe-larger-than=1736")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DART_FRAME_SIZE_LIMIT=1736")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DART_BASE_ADDRESS=0x70000000")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DART_TARGET_ANDROID")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DART_BASE_ADDRESS_MIN_DELTA=-0x1000000")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DART_BASE_ADDRESS_MAX_DELTA=0x1000000")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-frame-larger-than=")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -target aarch64-linux-android")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -B${config.Arm64GccRoot}/aarch64-linux-android/bin")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DANDROID_STRICT")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_USING_LIBCXX")

# C ONLY FLAGS:
# Raw param [0] = '-std=gnu99'
# Raw param [1] = '${config.CommonGlobalConlyflags}'
# FLAG '-std=gnu99' became -std=gnu99
# variable ${config.CommonGlobalConlyflags} = ''
# Raw param [0] = ''
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu99")

# CPP FLAGS:
# Raw param [0] = '-std=gnu++14'
# Raw param [1] = '${config.CommonClangGlobalCppflags}'
# Raw param [2] = '-fno-rtti'
# Raw param [3] = '${config.Arm64ClangCppflags}'
# FLAG '-std=gnu++14' became -std=gnu++14
# variable ${config.CommonClangGlobalCppflags} = '-Wsign-promo -Wno-inconsistent-missing-override -Wno-null-dereference -D_LIBCPP_ENABLE_THREAD_SAFETY_ANNOTATIONS -Wno-thread-safety-negative'
# Raw param [0] = '-Wsign-promo'
# Raw param [1] = '-Wno-inconsistent-missing-override'
# Raw param [2] = '-Wno-null-dereference'
# Raw param [3] = '-D_LIBCPP_ENABLE_THREAD_SAFETY_ANNOTATIONS'
# Raw param [4] = '-Wno-thread-safety-negative'
# FLAG '-Wsign-promo' became -Wsign-promo
# FLAG '-Wno-inconsistent-missing-override' became -Wno-inconsistent-missing-override
# FLAG '-Wno-null-dereference' became -Wno-null-dereference
# FLAG '-D_LIBCPP_ENABLE_THREAD_SAFETY_ANNOTATIONS' became -D_LIBCPP_ENABLE_THREAD_SAFETY_ANNOTATIONS
# FLAG '-Wno-thread-safety-negative' became -Wno-thread-safety-negative
# FLAG '-fno-rtti' became -fno-rtti
# variable ${config.Arm64ClangCppflags} = '-fvisibility-inlines-hidden'
# Raw param [0] = '-fvisibility-inlines-hidden'
# FLAG '-fvisibility-inlines-hidden' became -fvisibility-inlines-hidden
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++14")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wsign-promo")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-inconsistent-missing-override")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-null-dereference")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_LIBCPP_ENABLE_THREAD_SAFETY_ANNOTATIONS")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-thread-safety-negative")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-rtti")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fvisibility-inlines-hidden")

# SYSTEM INCLUDE FLAGS:
# Raw param [0] = '${config.CommonGlobalIncludes}'
# Raw param [1] = '${config.Arm64IncludeFlags}'
# Raw param [2] = '${config.CommonNativehelperInclude}'
# variable ${config.CommonGlobalIncludes} = '-Isystem/core/include -Isystem/media/audio/include -Ihardware/libhardware/include -Ihardware/libhardware_legacy/include -Ihardware/ril/include -Ilibnativehelper/include -Iframeworks/native/include -Iframeworks/native/opengl/include -Iframeworks/av/include'
# Raw param [0] = '-Isystem/core/include'
# Raw param [1] = '-Isystem/media/audio/include'
# Raw param [2] = '-Ihardware/libhardware/include'
# Raw param [3] = '-Ihardware/libhardware_legacy/include'
# Raw param [4] = '-Ihardware/ril/include'
# Raw param [5] = '-Ilibnativehelper/include'
# Raw param [6] = '-Iframeworks/native/include'
# Raw param [7] = '-Iframeworks/native/opengl/include'
# Raw param [8] = '-Iframeworks/av/include'
# variable ${config.Arm64IncludeFlags} = '-isystem bionic/libc/arch-arm64/include -isystem bionic/libc/include -isystem bionic/libc/kernel/uapi -isystem bionic/libc/kernel/uapi/asm-arm64 -isystem bionic/libc/kernel/android/scsi -isystem bionic/libc/kernel/android/uapi'
# Raw param [0] = '-isystem'
# Raw param [1] = 'bionic/libc/arch-arm64/include'
# Raw param [2] = '-isystem'
# Raw param [3] = 'bionic/libc/include'
# Raw param [4] = '-isystem'
# Raw param [5] = 'bionic/libc/kernel/uapi'
# Raw param [6] = '-isystem'
# Raw param [7] = 'bionic/libc/kernel/uapi/asm-arm64'
# Raw param [8] = '-isystem'
# Raw param [9] = 'bionic/libc/kernel/android/scsi'
# Raw param [10] = '-isystem'
# Raw param [11] = 'bionic/libc/kernel/android/uapi'
# variable ${config.CommonNativehelperInclude} = '-Ilibnativehelper/include_deprecated'
# Raw param [0] = '-Ilibnativehelper/include_deprecated'
include_directories(SYSTEM
        "${ANDROID_ROOT}/bionic/libc/arch-arm64/include"
        "${ANDROID_ROOT}/bionic/libc/include"
        "${ANDROID_ROOT}/bionic/libc/kernel/uapi"
        "${ANDROID_ROOT}/bionic/libc/kernel/uapi/asm-arm64"
        "${ANDROID_ROOT}/bionic/libc/kernel/android/scsi"
        "${ANDROID_ROOT}/bionic/libc/kernel/android/uapi"
        )

file (GLOB_RECURSE TMP_HEADERS
        "${ANDROID_ROOT}/bionic/libc/arch-arm64/include/**/*.h"
        "${ANDROID_ROOT}/bionic/libc/include/**/*.h"
        "${ANDROID_ROOT}/bionic/libc/kernel/uapi/**/*.h"
        "${ANDROID_ROOT}/bionic/libc/kernel/uapi/asm-arm64/**/*.h"
        "${ANDROID_ROOT}/bionic/libc/kernel/android/scsi/**/*.h"
        "${ANDROID_ROOT}/bionic/libc/kernel/android/uapi/**/*.h"
        )
list (APPEND SOURCE_FILES ${TMP_HEADERS})

include_directories(
        "${ANDROID_ROOT}/system/core/include"
        "${ANDROID_ROOT}/system/media/audio/include"
        "${ANDROID_ROOT}/hardware/libhardware/include"
        "${ANDROID_ROOT}/hardware/libhardware_legacy/include"
        "${ANDROID_ROOT}/hardware/ril/include"
        "${ANDROID_ROOT}/libnativehelper/include"
        "${ANDROID_ROOT}/frameworks/native/include"
        "${ANDROID_ROOT}/frameworks/native/opengl/include"
        "${ANDROID_ROOT}/frameworks/av/include"
        "${ANDROID_ROOT}/libnativehelper/include_deprecated"
)

file (GLOB_RECURSE TMP_HEADERS
        "${ANDROID_ROOT}/system/core/include/**/*.h"
        "${ANDROID_ROOT}/system/media/audio/include/**/*.h"
        "${ANDROID_ROOT}/hardware/libhardware/include/**/*.h"
        "${ANDROID_ROOT}/hardware/libhardware_legacy/include/**/*.h"
        "${ANDROID_ROOT}/hardware/ril/include/**/*.h"
        "${ANDROID_ROOT}/libnativehelper/include/**/*.h"
        "${ANDROID_ROOT}/frameworks/native/include/**/*.h"
        "${ANDROID_ROOT}/frameworks/native/opengl/include/**/*.h"
        "${ANDROID_ROOT}/frameworks/av/include/**/*.h"
        "${ANDROID_ROOT}/libnativehelper/include_deprecated/**/*.h"
        )

file (GLOB_RECURSE TMP_HEADERS
        "${ANDROID_ROOT}/art/runtime/*.h")

list (APPEND SOURCE_FILES ${TMP_HEADERS})

include_directories(
        "${ANDROID_ROOT}/external/vixl/src"
        "${ANDROID_ROOT}/external/vixl/src/aarch64"
)

file(GLOB_RECURSE TMP_HEADERS
        "${ANDROID_ROOT}/external/vixl/src/*.h"
        "${ANDROID_ROOT}/external/vixl/src/aarch64/*.h"
        )


add_executable(libartd-compiler ${SOURCE_FILES})
