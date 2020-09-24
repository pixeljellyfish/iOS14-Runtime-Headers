/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct MPSSymbolTableStringMap<std::__1::basic_string<char>, llvm::MallocAllocator>StringMapEntryBaseIIIIMallocAllocator* PSSymbolTableRef;

typedef struct PointerIntPair<void *, 2, mlir::Value::Kind, mlir::Value::ImplTypeTraits, llvm::PointerIntPairInfo<void *, 2, mlir::Value::ImplTypeTraits> > {
	long long Value;
} PointerIntPair<void *, 2, mlir::Value::Kind, mlir::Value::ImplTypeTraits, llvm::PointerIntPairInfo<void *, 2, mlir::Value::ImplTypeTraits> >;

typedef struct Value {
	PointerIntPair<void *, 2, mlir::Value::Kind, mlir::Value::ImplTypeTraits, llvm::PointerIntPairInfo<void *, 2, mlir::Value::ImplTypeTraits> > ownerAndKind;
} Value;

typedef struct _compressed_pair<mlir::MLIRContextImpl *, std::__1::default_delete<mlir::MLIRContextImpl> > {
	MLIRContextImpl __value_;
} compressed_pair<mlir::MLIRContextImpl *, std::__1::default_delete<mlir::MLIRContextImpl> >;

typedef struct unique_ptr<mlir::MLIRContextImpl, std::__1::default_delete<mlir::MLIRContextImpl> > {
	compressed_pair<mlir::MLIRContextImpl *, std::__1::default_delete<mlir::MLIRContextImpl> > __ptr_;
} unique_ptr<mlir::MLIRContextImpl, std::__1::default_delete<mlir::MLIRContextImpl> >;

typedef struct MLIRContext {
	unique_ptr<mlir::MLIRContextImpl, std::__1::default_delete<mlir::MLIRContextImpl> > impl;
} MLIRContext;

typedef struct ModuleOp {
	Operation state;
} ModuleOp;

typedef struct OwningModuleRef {
	ModuleOp module;
} OwningModuleRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<MPSGraphTensor *, std::__1::__value_type<MPSGraphTensor *, mlir::Value>, std::__1::less<MPSGraphTensor *>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<MPSGraphTensor *, std::__1::__value_type<MPSGraphTensor *, mlir::Value>, std::__1::less<MPSGraphTensor *>, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MPSGraphTensor *, mlir::Value>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MPSGraphTensor *, mlir::Value>, void *> > >;

typedef struct _tree<std::__1::__value_type<MPSGraphTensor *, mlir::Value>, std::__1::__map_value_compare<MPSGraphTensor *, std::__1::__value_type<MPSGraphTensor *, mlir::Value>, std::__1::less<MPSGraphTensor *>, true>, std::__1::allocator<std::__1::__value_type<MPSGraphTensor *, mlir::Value> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MPSGraphTensor *, mlir::Value>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<MPSGraphTensor *, std::__1::__value_type<MPSGraphTensor *, mlir::Value>, std::__1::less<MPSGraphTensor *>, true> > __pair3_;
} tree<std::__1::__value_type<MPSGraphTensor *, mlir::Value>, std::__1::__map_value_compare<MPSGraphTensor *, std::__1::__value_type<MPSGraphTensor *, mlir::Value>, std::__1::less<MPSGraphTensor *>, true>, std::__1::allocator<std::__1::__value_type<MPSGraphTensor *, mlir::Value> > >;

typedef struct map<MPSGraphTensor *, mlir::Value, std::__1::less<MPSGraphTensor *>, std::__1::allocator<std::__1::pair<MPSGraphTensor *const, mlir::Value> > > {
	tree<std::__1::__value_type<MPSGraphTensor *, mlir::Value>, std::__1::__map_value_compare<MPSGraphTensor *, std::__1::__value_type<MPSGraphTensor *, mlir::Value>, std::__1::less<MPSGraphTensor *>, true>, std::__1::allocator<std::__1::__value_type<MPSGraphTensor *, mlir::Value> > > __tree_;
} map<MPSGraphTensor *, mlir::Value, std::__1::less<MPSGraphTensor *>, std::__1::allocator<std::__1::pair<MPSGraphTensor *const, mlir::Value> > >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<MPSGraphTensor *, std::__1::__value_type<MPSGraphTensor *, mlir::Operation *>, std::__1::less<MPSGraphTensor *>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<MPSGraphTensor *, std::__1::__value_type<MPSGraphTensor *, mlir::Operation *>, std::__1::less<MPSGraphTensor *>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MPSGraphTensor *, mlir::Operation *>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MPSGraphTensor *, mlir::Operation *>, void *> > >;

typedef struct _tree<std::__1::__value_type<MPSGraphTensor *, mlir::Operation *>, std::__1::__map_value_compare<MPSGraphTensor *, std::__1::__value_type<MPSGraphTensor *, mlir::Operation *>, std::__1::less<MPSGraphTensor *>, true>, std::__1::allocator<std::__1::__value_type<MPSGraphTensor *, mlir::Operation *> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<MPSGraphTensor *, mlir::Operation *>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<MPSGraphTensor *, std::__1::__value_type<MPSGraphTensor *, mlir::Operation *>, std::__1::less<MPSGraphTensor *>, true> > __pair3_;
} tree<std::__1::__value_type<MPSGraphTensor *, mlir::Operation *>, std::__1::__map_value_compare<MPSGraphTensor *, std::__1::__value_type<MPSGraphTensor *, mlir::Operation *>, std::__1::less<MPSGraphTensor *>, true>, std::__1::allocator<std::__1::__value_type<MPSGraphTensor *, mlir::Operation *> > >;

typedef struct map<MPSGraphTensor *, mlir::Operation *, std::__1::less<MPSGraphTensor *>, std::__1::allocator<std::__1::pair<MPSGraphTensor *const, mlir::Operation *> > > {
	tree<std::__1::__value_type<MPSGraphTensor *, mlir::Operation *>, std::__1::__map_value_compare<MPSGraphTensor *, std::__1::__value_type<MPSGraphTensor *, mlir::Operation *>, std::__1::less<MPSGraphTensor *>, true>, std::__1::allocator<std::__1::__value_type<MPSGraphTensor *, mlir::Operation *> > > __tree_;
} map<MPSGraphTensor *, mlir::Operation *, std::__1::less<MPSGraphTensor *>, std::__1::allocator<std::__1::pair<MPSGraphTensor *const, mlir::Operation *> > >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<void *, std::__1::__value_type<void *, MPSGraphTensor *>, std::__1::less<void *>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<void *, std::__1::__value_type<void *, MPSGraphTensor *>, std::__1::less<void *>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<void *, MPSGraphTensor *>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<void *, MPSGraphTensor *>, void *> > >;

typedef struct _tree<std::__1::__value_type<void *, MPSGraphTensor *>, std::__1::__map_value_compare<void *, std::__1::__value_type<void *, MPSGraphTensor *>, std::__1::less<void *>, true>, std::__1::allocator<std::__1::__value_type<void *, MPSGraphTensor *> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<void *, MPSGraphTensor *>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<void *, std::__1::__value_type<void *, MPSGraphTensor *>, std::__1::less<void *>, true> > __pair3_;
} tree<std::__1::__value_type<void *, MPSGraphTensor *>, std::__1::__map_value_compare<void *, std::__1::__value_type<void *, MPSGraphTensor *>, std::__1::less<void *>, true>, std::__1::allocator<std::__1::__value_type<void *, MPSGraphTensor *> > >;

typedef struct map<void *, MPSGraphTensor *, std::__1::less<void *>, std::__1::allocator<std::__1::pair<void *const, MPSGraphTensor *> > > {
	tree<std::__1::__value_type<void *, MPSGraphTensor *>, std::__1::__map_value_compare<void *, std::__1::__value_type<void *, MPSGraphTensor *>, std::__1::less<void *>, true>, std::__1::allocator<std::__1::__value_type<void *, MPSGraphTensor *> > > __tree_;
} map<void *, MPSGraphTensor *, std::__1::less<void *>, std::__1::allocator<std::__1::pair<void *const, MPSGraphTensor *> > >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> *> >;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, std::__1::hash<unsigned long long>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, std::__1::hash<unsigned long long>, true> >;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, std::__1::equal_to<unsigned long long>, true> > {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, std::__1::equal_to<unsigned long long>, true> >;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> > > {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> > >;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> *> > {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> *> > __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> *> >;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> *> > > {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> *> > __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> *> > >;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> *> > > {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> *> > > __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> *> > >;

typedef struct _hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > > > > {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *> *> > > __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, void *> > > __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, std::__1::hash<unsigned long long>, true> > __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, std::__1::equal_to<unsigned long long>, true> > __p3_;
} hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > > > >;

typedef struct unordered_map<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> >, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > > > > {
	hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > > > > __table_;
} unordered_map<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> >, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime> > > > >;
