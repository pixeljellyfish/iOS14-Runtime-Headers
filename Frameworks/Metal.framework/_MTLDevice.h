/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MTLRenderPipelineState, MTLComputePipelineState;
#import <Metal/Metal-Structs.h>
@class NSObject, NSMutableArray, MTLDeviceFeatureQueries, NSString, MTLLoader, MTLGPUBVHBuilder, MTLCompiler, NSArray, MTLTargetDeviceArchitecture;

@interface _MTLDevice : NSObject {

	SCD_Struct_MT47 _limits;
	void* _supportedGPUFamilies;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _pipelineSerializationQueue;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	BOOL _hasInitSerializationPaths;
	BOOL _shaderDebugInfoCaching;
	NSMutableArray* _progressTrackBufferStack;
	BOOL _needsEncoderTypeMatchingProgressBlits;
	id<MTLRenderPipelineState> _progressTrackRenderPipeline;
	id<MTLComputePipelineState> _progressTrackComputePipeline;
	MTLDeviceFeatureQueries* _featureQueries;
	unsigned long long _globalTraceObjectID;
	Ai _commandQueueCount;
	MTLLibraryBuilder* _libraryBuilder;
	MTLPipelineLibraryBuilder* _pipelineLibraryBuilder;
	MTLPipelineCollection* _pipelineCollection;
	NSString* _pipelineDescriptorsOutputFile;
	NSString* _librariesOutputDirectory;
	BOOL _collectAllLibraries;
	BOOL _gpuAssertionsEnabled;
	MTLLoader* _dynamicLoader;
	os_unfair_lock_s _GPUBVHBuilderLock;
	MTLGPUBVHBuilder* _GPUBVHBuilder;
	once_flag _initProgressTrackingOnceToken;
	BOOL _DynamicFunctionPointersSupported;
	unsigned long long _commandBufferErrorOptions;

}

@property (nonatomic,readonly) BOOL supportsBufferlessClientStorageTexture; 
@property (nonatomic,readonly) BOOL supportsComputeMemoryBarrier; 
@property (nonatomic,readonly) BOOL supportsRenderMemoryBarrier; 
@property (nonatomic,readonly) BOOL supportsArgumentBuffersTier2; 
@property (nonatomic,readonly) BOOL supportsReadWriteTextureArgumentsTier2; 
@property (nonatomic,readonly) BOOL supportsProgrammableSamplePositions; 
@property (nonatomic,readonly) BOOL supportsLargeFramebufferConfigs; 
@property (nonatomic,readonly) BOOL supportsCustomBorderColor; 
@property (nonatomic,readonly) BOOL supportsSamplerAddressModeClampToHalfBorder; 
@property (nonatomic,readonly) BOOL supportsBCTextureCompression; 
@property (nonatomic,readonly) BOOL supports3DBCTextures; 
@property (nonatomic,readonly) BOOL supportsRGBA10A2Gamma; 
@property (nonatomic,readonly) BOOL supportsPrimitiveRestartOverride; 
@property (nonatomic,readonly) BOOL supports32bpcMSAATextures; 
@property (nonatomic,readonly) BOOL supports32BitMSAA; 
@property (nonatomic,readonly) BOOL supports32BitFloatFiltering; 
@property (nonatomic,readonly) BOOL supportsVertexAmplification; 
@property (nonatomic,readonly) BOOL supportsPlacementHeaps; 
@property (nonatomic,readonly) BOOL supportsOpenCLTextureWriteSwizzles; 
@property (nonatomic,readonly) BOOL supportsPullModelInterpolation; 
@property (nonatomic,readonly) BOOL supportsInt64; 
@property (nonatomic,readonly) BOOL supportsFixedLinePointFillDepthGradient; 
@property (nonatomic,readonly) BOOL supportsNonZeroTextureWriteLOD; 
@property (nonatomic,readonly) BOOL supportsSharedTextureHandles; 
@property (nonatomic,readonly) BOOL supportsBufferPrefetchStatistics; 
@property (nonatomic,readonly) BOOL supportsLimitedYUVFormats; 
@property (nonatomic,readonly) BOOL supportsNonPrivateDepthStencilTextures; 
@property (nonatomic,readonly) BOOL supportsNonPrivateMSAATextures; 
@property (nonatomic,readonly) BOOL supportsSharedStorageHeapResources; 
@property (nonatomic,readonly) BOOL supportsSharedStorageTextures; 
@property (nonatomic,readonly) BOOL supportsLinearTextureFromSharedBuffer; 
@property (nonatomic,readonly) BOOL supportsPipelineLibraries; 
@property (nonatomic,readonly) BOOL supportsFragmentOnlyEncoders; 
@property (nonatomic,readonly) BOOL supportsBufferWithIOSurface; 
@property (nonatomic,readonly) BOOL supportsProgrammableBlending; 
@property (nonatomic,readonly) BOOL supportsRenderToLinearTextures; 
@property (nonatomic,readonly) BOOL supportsMemorylessRenderTargets; 
@property (nonatomic,readonly) BOOL supportsFastMathInfNaNPropagation; 
@property (nonatomic,readonly) BOOL supportsInvariantVertexPosition; 
@property (nonatomic,readonly) BOOL supportsShaderLODAverage; 
@property (nonatomic,readonly) BOOL supportsRelaxedTextureViewRequirements; 
@property (nonatomic,readonly) BOOL supportsSeparateDepthStencil; 
@property (nonatomic,readonly) BOOL supportsGPUStatistics; 
@property (nonatomic,readonly) BOOL supportsCompressedTextureViewSPI; 
@property (nonatomic,readonly) BOOL supportsRenderTargetTextureRotation; 
@property (nonatomic,readonly) BOOL supportsDynamicControlPointCount; 
@property (nonatomic,readonly) BOOL supportsIABHashForTools; 
@property (nonatomic,readonly) BOOL supportsBinaryArchives; 
@property (nonatomic,readonly) BOOL supportsBinaryLibraries; 
@property (nonatomic,readonly) BOOL supportsASTCTextureCompression; 
@property (nonatomic,readonly) BOOL supportsExtendedYUVFormats; 
@property (nonatomic,readonly) BOOL supportsPublicXR10Formats; 
@property (nonatomic,readonly) BOOL supportsSRGBwrites; 
@property (nonatomic,readonly) BOOL supportsDepthClipMode; 
@property (nonatomic,readonly) BOOL supportsPacked32TextureBufferWrites; 
@property (nonatomic,readonly) BOOL supports3DASTCTextures; 
@property (nonatomic,readonly) BOOL supportsExtendedXR10Formats; 
@property (nonatomic,readonly) BOOL supportsFragmentBufferWrites; 
@property (nonatomic,readonly) BOOL supportsCountingOcclusionQuery; 
@property (nonatomic,readonly) BOOL supportsBaseVertexInstanceDrawing; 
@property (nonatomic,readonly) BOOL supportsIndirectDrawAndDispatch; 
@property (nonatomic,readonly) BOOL supportsTessellation; 
@property (nonatomic,readonly) BOOL supportsReadWriteBufferArguments; 
@property (nonatomic,readonly) BOOL supportsArrayOfTextures; 
@property (nonatomic,readonly) BOOL supportsArrayOfSamplers; 
@property (nonatomic,readonly) BOOL supportsCombinedMSAAStoreAndResolveAction; 
@property (nonatomic,readonly) BOOL supportsMutableTier1ArgumentBuffers; 
@property (nonatomic,readonly) BOOL supportsSamplerCompareFunction; 
@property (nonatomic,readonly) BOOL supportsMSAADepthResolve; 
@property (nonatomic,readonly) BOOL supportsMSAAStencilResolve; 
@property (nonatomic,readonly) BOOL supportsMSAADepthResolveFilter; 
@property (nonatomic,readonly) BOOL supportsGFXIndirectCommandBuffers; 
@property (nonatomic,readonly) BOOL supportsCMPIndirectCommandBuffers; 
@property (nonatomic,readonly) BOOL supportsIndirectStageInRegion; 
@property (nonatomic,readonly) BOOL supportsIndirectTextures; 
@property (nonatomic,readonly) BOOL supportsNorm16BCubicFiltering; 
@property (nonatomic,readonly) BOOL supportsTextureOutOfBoundsReads; 
@property (nonatomic,readonly) BOOL supportsTextureSwizzle; 
@property (nonatomic,readonly) BOOL supportsAlphaYUVFormats; 
@property (nonatomic,readonly) BOOL supportsMemoryOrderAtomics; 
@property (nonatomic,readonly) BOOL supportsQuadGroup; 
@property (nonatomic,readonly) BOOL supportsRenderTextureWrites; 
@property (nonatomic,readonly) BOOL supportsImageBlocks; 
@property (nonatomic,readonly) BOOL supportsTileShaders; 
@property (nonatomic,readonly) BOOL supportsImageBlockSampleCoverageControl; 
@property (nonatomic,readonly) BOOL supportsNativeHardwareFP16; 
@property (nonatomic,readonly) BOOL supportsPostDepthCoverage; 
@property (nonatomic,readonly) BOOL supportsMipLevelsSmallerThanBlockSize; 
@property (nonatomic,readonly) BOOL supportsNonUniformThreadgroupSize; 
@property (nonatomic,readonly) BOOL supportsReadWriteTextureArguments; 
@property (nonatomic,readonly) BOOL supportsReadWriteTextureCubeArguments; 
@property (nonatomic,readonly) BOOL supportsTextureCubeArray; 
@property (nonatomic,readonly) BOOL supportsQuadShufflesAndBroadcast; 
@property (nonatomic,readonly) BOOL supportsConcurrentComputeDispatch; 
@property (nonatomic,readonly) BOOL supportsRenderPassWithoutRenderTarget; 
@property (nonatomic,readonly) BOOL supportsRasterOrderGroups; 
@property (nonatomic,readonly) BOOL supportsRasterOrderGroupsColorAttachment; 
@property (nonatomic,readonly) BOOL supportsLinearTexture2DArray; 
@property (nonatomic,readonly) BOOL supportsNonSquareTileShaders; 
@property (nonatomic,readonly) BOOL supportsSeparateVisibilityAndShadingRate; 
@property (nonatomic,readonly) BOOL supports2DLinearTexArraySPI; 
@property (nonatomic,readonly) BOOL supportsLayeredRendering; 
@property (nonatomic,readonly) BOOL supportsViewportAndScissorArray; 
@property (nonatomic,readonly) BOOL supportsIndirectTessellation; 
@property (nonatomic,readonly) BOOL supportsMSAAStencilResolveFilter; 
@property (nonatomic,readonly) BOOL supportsStencilFeedback; 
@property (nonatomic,readonly) BOOL supportsFP32TessFactors; 
@property (nonatomic,readonly) BOOL supportsUnalignedVertexFetch; 
@property (nonatomic,readonly) BOOL supportsSIMDGroup; 
@property (nonatomic,readonly) BOOL supportsShaderMinLODClamp; 
@property (nonatomic,readonly) BOOL supportsSIMDShufflesAndBroadcast; 
@property (nonatomic,readonly) BOOL supportsWritableArrayOfTextures; 
@property (nonatomic,readonly) BOOL supportsVariableRateRasterization; 
@property (nonatomic,readonly) BOOL supportsYCBCRFormats; 
@property (nonatomic,readonly) BOOL supportsYCBCRFormatsPQ; 
@property (nonatomic,readonly) BOOL supportsYCBCRFormats12; 
@property (nonatomic,readonly) BOOL supportsYCBCRFormatsXR; 
@property (nonatomic,readonly) BOOL supportsASTCHDRTextureCompression; 
@property (nonatomic,readonly) BOOL supportsSparseTextures; 
@property (nonatomic,readonly) BOOL supportsSparseHeaps; 
@property (nonatomic,readonly) BOOL supportsIndirectWritableTextures; 
@property (nonatomic,readonly) BOOL supportsFunctionPointers; 
@property (nonatomic,readonly) BOOL supportsBinaryFunctionPointers; 
@property (nonatomic,readonly) BOOL supportsDynamicLibraries; 
@property (nonatomic,readonly) BOOL supportsStatefulDynamicLibraries; 
@property (nonatomic,readonly) BOOL supportsShaderBarycentricCoordinates; 
@property (nonatomic,readonly) BOOL supportsBlackOrWhiteSamplerBorderColors; 
@property (nonatomic,readonly) BOOL supportsMirrorClampToEdgeSamplerMode; 
@property (nonatomic,readonly) BOOL supportsSIMDReduction; 
@property (nonatomic,readonly) BOOL supportsDepthClipModeClampExtended; 
@property (nonatomic,readonly) BOOL supportsTexture2DMultisampleArray; 
@property (nonatomic,readonly) BOOL supportsForceSeamsOnCubemaps; 
@property (nonatomic,readonly) BOOL supportsFloat16BCubicFiltering; 
@property (nonatomic,readonly) BOOL supportsFloat16InfNanFiltering; 
@property (nonatomic,readonly) BOOL supportsRTZRounding; 
@property (nonatomic,readonly) BOOL supportsAnisoSampleFix; 
@property (nonatomic,readonly) BOOL supportsYCBCRPackedFormatsPQ; 
@property (nonatomic,readonly) BOOL supportsYCBCRPackedFormats12; 
@property (nonatomic,readonly) BOOL supportsYCBCRPackedFormatsXR; 
@property (nonatomic,readonly) BOOL supportsBufferBoundsChecking; 
@property (nonatomic,readonly) BOOL supportsForkJoin; 
@property (nonatomic,readonly) BOOL supportsDevicePartitioning; 
@property (nonatomic,readonly) BOOL supportsComputeCompressedTextureWrite; 
@property (nonatomic,readonly) BOOL supportsSIMDGroupMatrix; 
@property (nonatomic,readonly) BOOL supportsInterchangeTiled; 
@property (nonatomic,readonly) BOOL supportsQuadReduction; 
@property (readonly) NSString * name; 
@property (assign) BOOL shaderDebugInfoCaching;                                                                                    //@synthesize shaderDebugInfoCaching=_shaderDebugInfoCaching - In the implementation block
@property (readonly) unsigned long long deviceCreationFlags; 
@property (readonly) const SCD_Struct_MT47* limits; 
@property (readonly) unsigned long long globalTraceObjectID;                                                                       //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (readonly) unsigned long long maxFramebufferStorageBits; 
@property (readonly) unsigned long long linearTextureArrayAlignmentBytes; 
@property (readonly) unsigned long long linearTextureArrayAlignmentSlice; 
@property (readonly) unsigned long long maxTileBuffers; 
@property (readonly) unsigned long long maxTileTextures; 
@property (readonly) unsigned long long maxTileSamplers; 
@property (readonly) unsigned long long maxTileInlineDataSize; 
@property (readonly) unsigned long long minTilePixels; 
@property (readonly) unsigned long long maxColorAttachments; 
@property (readonly) unsigned long long maxVertexAttributes; 
@property (readonly) unsigned long long maxVertexBuffers; 
@property (readonly) unsigned long long maxVertexTextures; 
@property (readonly) unsigned long long maxVertexSamplers; 
@property (readonly) unsigned long long maxVertexInlineDataSize; 
@property (readonly) unsigned long long maxInterpolants; 
@property (readonly) unsigned long long maxFragmentBuffers; 
@property (readonly) unsigned long long maxFragmentTextures; 
@property (readonly) unsigned long long maxFragmentSamplers; 
@property (readonly) unsigned long long maxFragmentInlineDataSize; 
@property (readonly) unsigned long long maxComputeBuffers; 
@property (readonly) unsigned long long maxComputeTextures; 
@property (readonly) unsigned long long maxComputeSamplers; 
@property (readonly) unsigned long long maxComputeInlineDataSize; 
@property (readonly) unsigned long long maxComputeLocalMemorySizes; 
@property (readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup; 
@property (readonly) unsigned long long maxComputeThreadgroupMemory; 
@property (readonly) float maxLineWidth; 
@property (readonly) float maxPointSize; 
@property (readonly) unsigned long long maxVisibilityQueryOffset; 
@property (readonly) unsigned long long minConstantBufferAlignmentBytes; 
@property (readonly) unsigned long long minBufferNoCopyAlignmentBytes; 
@property (readonly) unsigned long long maxTextureWidth1D; 
@property (readonly) unsigned long long maxTextureWidth2D; 
@property (readonly) unsigned long long maxTextureHeight2D; 
@property (readonly) unsigned long long maxTextureWidth3D; 
@property (readonly) unsigned long long maxTextureHeight3D; 
@property (readonly) unsigned long long maxTextureDepth3D; 
@property (readonly) unsigned long long maxTextureDimensionCube; 
@property (readonly) unsigned long long maxTextureLayers; 
@property (readonly) unsigned long long linearTextureAlignmentBytes; 
@property (readonly) unsigned long long iosurfaceTextureAlignmentBytes; 
@property (readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes; 
@property (readonly) unsigned long long deviceLinearTextureAlignmentBytes; 
@property (readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes; 
@property (readonly) unsigned long long maxFunctionConstantIndices; 
@property (readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes; 
@property (readonly) unsigned long long maxInterpolatedComponents; 
@property (readonly) unsigned long long maxTessellationFactor; 
@property (readonly) unsigned long long maxIndirectBuffers; 
@property (readonly) unsigned long long maxIndirectTextures; 
@property (readonly) unsigned long long maxIndirectSamplers; 
@property (readonly) unsigned long long maxIndirectSamplersPerDevice; 
@property (readonly) unsigned long long maxFenceInstances; 
@property (readonly) unsigned long long maxViewportCount; 
@property (readonly) unsigned long long maxCustomSamplePositions; 
@property (readonly) unsigned long long maxVertexAmplificationFactor; 
@property (readonly) unsigned long long maxVertexAmplificationCount; 
@property (readonly) unsigned long long maxTextureBufferWidth; 
@property (readonly) unsigned long long maxComputeAttributes; 
@property (readonly) unsigned long long maxConstantBufferArguments; 
@property (readonly) unsigned long long maxBufferLength; 
@property (readonly) NSObject*<OS_dispatch_queue> serialQueue;                                                                     //@synthesize serialQueue=_serialQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> concurrentQueue;                                                                 //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (readonly) unsigned acceleratorPort; 
@property (readonly) MTLCompiler * compiler; 
@property (readonly) IndirectArgumentBufferCapabilities indirectArgumentBufferCapabilities; 
@property (readonly) unsigned long long readWriteTextureSupport; 
@property (readonly) unsigned long long argumentBuffersSupport; 
@property (getter=areRasterOrderGroupsSupported,readonly) BOOL rasterOrderGroupsSupported; 
@property (getter=isFloat32FilteringSupported,readonly) BOOL float32FilteringSupported; 
@property (getter=isBCTextureCompressionSupported,readonly) BOOL BCTextureCompressionSupported; 
@property (getter=isMsaa32bSupported,readonly) BOOL msaa32bSupported; 
@property (getter=isRGB10A2GammaSupported,readonly) BOOL RGB10A2GammaSupported; 
@property (getter=areBarycentricCoordsSupported,readonly) BOOL barycentricCoordsSupported; 
@property (getter=isRTZRoundingSupported,readonly) BOOL RTZRoundingSupported; 
@property (readonly) long long defaultTextureWriteRoundingMode; 
@property (getter=isAnisoSampleFixSupported,readonly) BOOL AnisoSampleFixSupported; 
@property (getter=isFixedLinePointFillDepthGradientSupported,readonly) BOOL FixedLinePointFillDepthGradientSupported; 
@property (getter=isDynamicFunctionPointersSupported,readonly) BOOL DynamicFunctionPointersSupported;                              //@synthesize DynamicFunctionPointersSupported=_DynamicFunctionPointersSupported - In the implementation block
@property (getter=isBinaryFunctionPointersSupported,readonly) BOOL BinaryFunctionPointersSupported; 
@property (readonly) unsigned long long sparseTexturesSupport; 
@property (readonly) unsigned long long sparseTileSizeInBytes; 
@property (readonly) unsigned long long maxArgumentBufferSamplerCount; 
@property (setter=setGPUAssertionsEnabled:,getter=areGPUAssertionsEnabled) BOOL gpuAssertionsEnabled; 
@property (getter=isLargeMRTSupported,readonly) BOOL largeMRTSupported; 
@property (readonly) unsigned long long maxRasterizationRateLayerCount; 
@property (readonly) NSArray * counterSets; 
@property (getter=isPlacementHeapSupported,readonly) BOOL placementHeapSupported; 
@property (assign,nonatomic) unsigned long long commandBufferErrorOptions;                                                         //@synthesize commandBufferErrorOptions=_commandBufferErrorOptions - In the implementation block
@property (readonly) BOOL supportsRaytracing; 
@property (readonly) MTLGPUBVHBuilder * GPUBVHBuilder; 
@property (readonly) BOOL requiresRaytracingEmulation; 
@property (readonly) const MTLTargetDeviceArch* targetDeviceInfo; 
@property (readonly) MTLTargetDeviceArchitecture * targetDeviceArchitecture; 
+(BOOL)featureProfile:(unsigned long long)arg1 supportsFeatureSet:(unsigned long long)arg2 ;
+(BOOL)useNewPrimitiveRestartBehavior;
-(id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT49*)arg2 error:(id*)arg3 ;
-(BOOL)isBinaryFunctionPointersSupported;
-(unsigned long long)deviceCreationFlags;
-(BOOL)supports32bpcMSAATextures;
-(BOOL)supportsASTCHDRTextureCompression;
-(id)newDynamicLibraryFromURL:(id)arg1 error:(id*)arg2 ;
-(void*)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 keySize:(unsigned long long*)arg3 ;
-(BOOL)supportsFragmentBufferWrites;
-(BOOL)supportsInt64;
-(id)newSharedEvent;
-(BOOL)supportsIndirectTessellation;
-(BOOL)supportsRasterizationRateMapWithLayerCount:(unsigned long long)arg1 ;
-(BOOL)areRasterOrderGroupsSupported;
-(id)newArgumentEncoderWithArguments:(id)arg1 ;
-(unsigned long long)maxVertexAttributes;
-(BOOL)isCollectingLibraries;
-(void)freeVisibleFunctionKey:(void*)arg1 keySize:(unsigned long long)arg2 ;
-(BOOL)supportsMSAAStencilResolveFilter;
-(BOOL)supportsNonSquareTileShaders;
-(BOOL)supportsFunctionPointers;
-(BOOL)supportsCMPIndirectCommandBuffers;
-(BOOL)supportsBinaryFunctionPointers;
-(id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT49*)arg2 error:(id*)arg3 ;
-(BOOL)supportsExtendedYUVFormats;
-(unsigned long long)commandBufferErrorOptions;
-(BOOL)supportsNonUniformThreadgroupSize;
-(void*)getShaderCacheKeys;
-(IndirectArgumentBufferCapabilities)indirectArgumentBufferCapabilities;
-(BOOL)supportsLayeredRendering;
-(void)freeFragmentFunctionKey:(void*)arg1 fragmentKeySize:(unsigned long long)arg2 ;
-(void*)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 fragmentKeySize:(unsigned long long*)arg2 previousStateVariant:(id)arg3 ;
-(BOOL)supports32BitMSAA;
-(BOOL)supportsAlphaYUVFormats;
-(id)vertexVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2 ;
-(BOOL)supportsBlackOrWhiteSamplerBorderColors;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(BOOL)supportsRGBA10A2Gamma;
-(BOOL)supportsSparseHeaps;
-(BOOL)supportsSharedStorageTextures;
-(BOOL)copyShaderCacheToPath:(id)arg1 ;
-(void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newDynamicLibraryWithURL:(id)arg1 error:(id*)arg2 ;
-(long long)defaultTextureWriteRoundingMode;
-(id)newSharedTextureWithDescriptor:(id)arg1 ;
-(id)newComputePipelineWithDescriptor:(id)arg1 variant:(id)arg2 errorMessage:(id*)arg3 ;
-(BOOL)supportsInterchangeTiled;
-(BOOL)supportsMirrorClampToEdgeSamplerMode;
-(id)newRenderPipelineWithDescriptor:(id)arg1 vertexVariant:(id)arg2 fragmentVariant:(id)arg3 errorMessage:(id*)arg4 ;
-(id)newRenderPipelineDescriptorWithSerializedData:(id)arg1 deserializationContext:(id)arg2 ;
-(id)newSharedEventWithHandle:(id)arg1 ;
-(unsigned long long)maxViewportCount;
-(unsigned long long)maxVertexAmplificationCount;
-(void)registerRenderPipelineDescriptor:(id)arg1 ;
-(id)newAccelerationStructureWithSize:(unsigned long long)arg1 ;
-(BOOL)supportsMipLevelsSmallerThanBlockSize;
-(BOOL)supportsMSAADepthResolveFilter;
-(BOOL)supportsPullModelInterpolation;
-(id)newCommandQueue;
-(void*)visibleFunctionKey:(id)arg1 withFunctionDescriptor:(id)arg2 keySize:(unsigned long long*)arg3 ;
-(BOOL)isAnisoSampleFixSupported;
-(BOOL)supportsPrimitiveType:(unsigned long long)arg1 ;
-(const SCD_Struct_MT47*)limits;
-(unsigned long long)maxFragmentSamplers;
-(void)initFeatureQueries;
-(MTLTargetDeviceArchitecture *)targetDeviceArchitecture;
-(unsigned long long)maxComputeAttributes;
-(unsigned long long)linearTextureArrayAlignmentSlice;
-(BOOL)supportsIndirectStageInRegion;
-(BOOL)supportsCustomBorderColor;
-(BOOL)deviceSupportsFeatureSet:(unsigned long long)arg1 ;
-(BOOL)supportsCombinedMSAAStoreAndResolveAction;
-(BOOL)supportsYCBCRPackedFormatsPQ;
-(BOOL)shaderDebugInfoCaching;
-(id)serializeStructType:(id)arg1 version:(unsigned)arg2 ;
-(id)computeVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2 ;
-(unsigned long long)maxComputeTextures;
-(BOOL)supportsCounterSampling:(unsigned long long)arg1 ;
-(id)newCommandQueueWithDescriptor:(id)arg1 ;
-(BOOL)supportsReadWriteTextureCubeArguments;
-(BOOL)supportsTexture2DMultisampleArray;
-(id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsFloat16BCubicFiltering;
-(BOOL)supportsTextureCubeArray;
-(id)newRasterizationRateMapWithDescriptor:(id)arg1 ;
-(unsigned long long)maxConstantBufferArguments;
-(BOOL)supportsIABHashForTools;
-(unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1 ;
-(BOOL)supportsFixedLinePointFillDepthGradient;
-(BOOL)supportsGFXIndirectCommandBuffers;
-(BOOL)supportsBufferBoundsChecking;
-(unsigned long long)minConstantBufferAlignmentBytes;
-(unsigned long long)deviceLinearTextureAlignmentBytes;
-(BOOL)supportsDevicePartitioning;
-(void)allowLibrariesFromOtherPlatforms;
-(BOOL)supportsRaytracing;
-(BOOL)supportsPacked32TextureBufferWrites;
-(unsigned long long)globalTraceObjectID;
-(void*)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 previousStateVariant:(id)arg3 fragmentKeySize:(unsigned long long*)arg4 ;
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(BOOL)supportsPostDepthCoverage;
-(NSArray *)counterSets;
-(BOOL)validateDynamicLibraryURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsStencilFeedback;
-(unsigned long long)maxIndirectBuffers;
-(BOOL)supportsComputeCompressedTextureWrite;
-(void)dealloc;
-(id)productName;
-(id)_deviceWrapper;
-(id)newComputeVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2 ;
-(id)newAccelerationStructureWithDescriptor:(id)arg1 ;
-(BOOL)isRTZRoundingSupported;
-(unsigned long long)maxColorAttachments;
-(id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)supportsReadWriteBufferArguments;
-(MTLCompiler *)compiler;
-(BOOL)supportsASTCTextureCompression;
-(void)compilerPropagatesThreadPriority:(BOOL)arg1 ;
-(id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1 ;
-(BOOL)supportsRenderTargetTextureRotation;
-(BOOL)supportsArrayOfSamplers;
-(void)deserializeCompileTimeStats:(id)arg1 addToDictionary:(id)arg2 ;
-(BOOL)supportsLinearTextureFromSharedBuffer;
-(BOOL)isClampToHalfBorderSupported;
-(BOOL)supportsNativeHardwareFP16;
-(id)newLibraryWithDAG:(id)arg1 functions:(id)arg2 error:(id*)arg3 ;
-(void)setCommandBufferErrorOptions:(unsigned long long)arg1 ;
-(void)setGPUAssertionsEnabled:(BOOL)arg1 ;
-(id)newPipelineLibraryWithFilePath:(id)arg1 error:(id*)arg2 ;
-(id)newComputePipelineWithDescriptor:(id)arg1 variant:(id)arg2 ;
-(unsigned long long)readWriteTextureSupport;
-(unsigned long long)maxFragmentTextures;
-(id)loadDynamicLibrariesForComputeDescriptor:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)maxFenceInstances;
-(BOOL)supportsQuadReduction;
-(BOOL)isPlacementHeapSupported;
-(unsigned long long)minBufferNoCopyAlignmentBytes;
-(BOOL)supportsIndirectWritableTextures;
-(SCD_Struct_MT50)pipelineCacheStats;
-(void*)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 nextStageVariant:(id)arg3 vertexKeySize:(unsigned long long*)arg4 ;
-(unsigned long long)maxRasterizationRateLayerCount;
-(float)maxPointSize;
-(void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)areBarycentricCoordsSupported;
-(BOOL)supportsFragmentOnlyEncoders;
-(BOOL)supportsPublicXR10Formats;
-(BOOL)supportsViewportAndScissorArray;
-(void)initProgressTracking;
-(float)maxLineWidth;
-(BOOL)isBCTextureCompressionSupported;
-(id)newFunctionWithGLIR:(void*)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3 ;
-(id)familyName;
-(BOOL)supportsStatefulDynamicLibraries;
-(BOOL)supports3DASTCTextures;
-(void)compileVisibleFunction:(id)arg1 withDescriptor:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)fragmentVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2 ;
-(BOOL)supportsBinaryArchives;
-(unsigned long long)minTilePixels;
-(BOOL)supportsConcurrentComputeDispatch;
-(void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)supportsFamily:(long long)arg1 ;
-(unsigned long long)maxCustomSamplePositions;
-(id)serializeStructType:(id)arg1 ;
-(unsigned long long)optionsForPipelineLibrarySerialization;
-(BOOL)supportsMemorylessRenderTargets;
-(void*)libraryKeyWithComputePipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 keySize:(unsigned long long*)arg3 ;
-(BOOL)isDynamicFunctionPointersSupported;
-(BOOL)supportsWritableArrayOfTextures;
-(BOOL)supportsDynamicControlPointCount;
-(unsigned long long)deviceLinearReadOnlyTextureAlignmentBytes;
-(id)serializeRenderPipelineDescriptor:(id)arg1 ;
-(id)newEvent;
-(id)newArgumentEncoderWithArguments:(id)arg1 structType:(id*)arg2 ;
-(id)newComputePipelineDescriptorWithSerializedData:(id)arg1 deserializationContext:(id)arg2 ;
-(unsigned long long)maxTextureDepth3D;
-(BOOL)supportsShaderBarycentricCoordinates;
-(BOOL)supportsSIMDGroup;
-(BOOL)supportsDepthClipModeClampExtended;
-(id)newVertexVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2 ;
-(void)initLimits;
-(BOOL)deviceOrFeatureProfileSupportsFeatureSet:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)supportsTessellation;
-(void)convertSparseTileRegions:(const SCD_Struct_MT51*)arg1 toPixelRegions:(SCD_Struct_MT51*)arg2 withTileSize:(SCD_Struct_MT31)arg3 numRegions:(unsigned long long)arg4 ;
-(BOOL)supportsLimitedYUVFormats;
-(void)dumpPipelineDescriptorsIfRequested;
-(void)initSerializationPaths;
-(void)startCollectingPipelineDescriptorsFromLibrary:(id)arg1 filePath:(id)arg2 ;
-(unsigned long long)maxComputeInlineDataSize;
-(void)compileVisibleFunction:(id)arg1 withDescriptor:(id)arg2 error:(id*)arg3 ;
-(BOOL)supportsCountingOcclusionQuery;
-(BOOL)isCustomBorderColorSupported;
-(id)newRasterizationRateMapWithScreenSize:(SCD_Struct_MT31)arg1 layerCount:(unsigned long long)arg2 layers:(const id*)arg3 ;
-(unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1 ;
-(SCD_Struct_MT31)accelerationStructureSizesWithDescriptor:(id)arg1 ;
-(BOOL)supportsArrayOfTextures;
-(BOOL)supportsRelaxedTextureViewRequirements;
-(void)freeComputeLibraryKey:(void*)arg1 libraryKeySize:(unsigned long long)arg2 ;
-(BOOL)supportsVertexAmplification;
-(void)freeVertexFunctionKey:(void*)arg1 vertexKeySize:(unsigned long long)arg2 ;
-(BOOL)supportsYCBCRFormatsXR;
-(unsigned long long)maxTileTextures;
-(void)getDefaultSamplePositions:(SCD_Struct_MT35*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)supports32BitFloatFiltering;
-(BOOL)isQuadDataSharingSupported;
-(unsigned long long)maxArgumentBufferSamplerCount;
-(BOOL)supportsYCBCRFormats;
-(BOOL)supportsSparseTextures;
-(BOOL)isLargeMRTSupported;
-(unsigned long long)maxComputeThreadgroupMemory;
-(BOOL)supportsTextureSampleCount:(unsigned long long)arg1 ;
-(BOOL)supportsSharedTextureHandles;
-(unsigned long long)maxVertexBuffers;
-(BOOL)supportsFP32TessFactors;
-(id)newCounterSampleBufferWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsUnalignedVertexFetch;
-(unsigned long long)maxIndirectSamplersPerDevice;
-(id)newSharedTextureWithHandle:(id)arg1 ;
-(BOOL)supportsQuadGroup;
-(id)newLibraryWithFile:(id)arg1 error:(id*)arg2 ;
-(void)freeComputeFunctionKey:(void*)arg1 keySize:(unsigned long long)arg2 ;
-(BOOL)supportsProgrammableSamplePositions;
-(unsigned long long)maxFragmentInlineDataSize;
-(void)_incrementCommandQueueCount;
-(BOOL)supportsImageBlocks;
-(void)registerComputePipelineDescriptor:(id)arg1 ;
-(unsigned long long)argumentBuffersSupport;
-(BOOL)supportsPipelineLibraries;
-(BOOL)isMsaa32bSupported;
-(BOOL)supportsPrimitiveRestartOverride;
-(BOOL)supportsReadWriteTextureArguments;
-(id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT49*)arg2 error:(id*)arg3 ;
-(BOOL)isCollectingPipelines;
-(id)newBinaryArchiveWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsTextureWriteFPRoundingMode:(long long)arg1 ;
-(BOOL)supportsFeatureSet:(unsigned long long)arg1 ;
-(BOOL)supportsMemoryOrderAtomics;
-(BOOL)isFloat32FilteringSupported;
-(BOOL)supportsRTZRounding;
-(void)getConstantSamplersBitmasks:(unsigned long long*)arg1 uniqueIdentifiers:(unsigned long long*)arg2 constantSamplerCount:(unsigned long long*)arg3 forComputeVariant:(id)arg4 ;
-(void)_decrementCommandQueueCount;
-(BOOL)supportsCompressedTextureViewSPI;
-(BOOL)supportsVariableRateRasterization;
-(BOOL)supportsSeparateVisibilityAndShadingRate;
-(id)newLibraryWithData:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsNonPrivateMSAATextures;
-(BOOL)isRGB10A2GammaSupported;
-(unsigned long long)maxTextureWidth3D;
-(unsigned long long)maxInterpolants;
-(unsigned long long)maxTextureWidth1D;
-(BOOL)supportsQuadShufflesAndBroadcast;
-(BOOL)supportsSamplerCompareFunction;
-(void)unloadShaderCaches;
-(void)_purgeDevice;
-(id)newDynamicLibrary:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsBufferlessClientStorageTexture;
-(BOOL)supportsShaderLODAverage;
-(BOOL)supportsNonPrivateDepthStencilTextures;
-(unsigned long long)maxTextureWidth2D;
-(void)getConstantSamplersBitmasks:(unsigned long long*)arg1 uniqueIdentifiers:(unsigned long long*)arg2 constantSamplerCount:(unsigned long long*)arg3 forVertexVariant:(id)arg4 fragmentVariant:(id)arg5 ;
-(unsigned long long)iosurfaceReadOnlyTextureAlignmentBytes;
-(unsigned long long)maxVertexAmplificationFactor;
-(void)initGPUFamilySupport;
-(BOOL)isMagicMipmapSupported;
-(BOOL)supportsInvariantVertexPosition;
-(void)_setDeviceWrapper:(id)arg1 ;
-(id)newArgumentEncoderWithLayout:(id)arg1 ;
-(unsigned long long)linearTextureArrayAlignmentBytes;
-(unsigned long long)iosurfaceTextureAlignmentBytes;
-(BOOL)supportsNorm16BCubicFiltering;
-(id)newLibraryWithURL:(id)arg1 error:(id*)arg2 ;
-(id)newDynamicLibraryError:(unsigned long long)arg1 message:(id)arg2 ;
-(BOOL)supports3DBCTextures;
-(id)newFunctionWithGLIR:(void*)arg1 functionType:(unsigned long long)arg2 ;
-(BOOL)supportsMSAADepthResolve;
-(BOOL)supportsOpenCLTextureWriteSwizzles;
-(BOOL)supportsSIMDGroupMatrix;
-(BOOL)supportsSeparateDepthStencil;
-(unsigned long long)maxTextureDimensionCube;
-(unsigned long long)maxFragmentBuffers;
-(id)pipelinePerformanceStatisticsWithComputeVariant:(id)arg1 compileTimeOutput:(id)arg2 ;
-(BOOL)supportsSharedStorageHeapResources;
-(BOOL)supportsArgumentBuffersTier2;
-(BOOL)supportsDepthClipMode;
-(BOOL)supportsFloat16InfNanFiltering;
-(unsigned long long)maxTotalComputeThreadsPerThreadgroup;
-(BOOL)areGPUAssertionsEnabled;
-(unsigned long long)getSupportedCommandBufferErrorOptions;
-(BOOL)supportsBufferWithIOSurface;
-(unsigned long long)maxComputeBuffers;
-(BOOL)supportsYCBCRPackedFormatsXR;
-(BOOL)supportsBinaryLibraries;
-(unsigned long long)maxVertexTextures;
-(MTLGPUBVHBuilder *)GPUBVHBuilder;
-(BOOL)supportsSIMDReduction;
-(BOOL)supportsRenderPassWithoutRenderTarget;
-(id)newFragmentVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2 ;
-(void*)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 vertexKeySize:(unsigned long long*)arg2 nextStageVariant:(id)arg3 ;
-(void)convertSparsePixelRegions:(const SCD_Struct_MT51*)arg1 toTileRegions:(SCD_Struct_MT51*)arg2 withTileSize:(SCD_Struct_MT31)arg3 alignmentMode:(unsigned long long)arg4 numRegions:(unsigned long long)arg5 ;
-(unsigned long long)maxIndirectSamplers;
-(BOOL)supportsTextureSwizzle;
-(id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(BOOL)supports2DLinearTexArraySPI;
-(BOOL)supportsTextureOutOfBoundsReads;
-(BOOL)supportsBaseVertexInstanceDrawing;
-(unsigned long long)sparseTexturesSupport;
-(id)vendorName;
-(unsigned long long)maxComputeSamplers;
-(BOOL)supportsProgrammableBlending;
-(id)pipelinePerformanceStatisticsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2 ;
-(id)serializeComputePipelineDescriptor:(id)arg1 ;
-(void)registerTileRenderPipelineDescriptor:(id)arg1 ;
-(id)newDefaultLibraryWithBundle:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)maxTileBuffers;
-(BOOL)supportsIndirectDrawAndDispatch;
-(unsigned long long)maxVisibilityQueryOffset;
-(BOOL)supportsYCBCRFormatsPQ;
-(void*)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 keySize:(unsigned long long*)arg2 ;
-(BOOL)supportsLargeFramebufferConfigs;
-(BOOL)supportsShaderMinLODClamp;
-(BOOL)supportsAnisoSampleFix;
-(BOOL)supportsComputeMemoryBarrier;
-(BOOL)supportsRenderMemoryBarrier;
-(BOOL)supportsExtendedXR10Formats;
-(BOOL)supportsBCTextureCompression;
-(BOOL)supportsReadWriteTextureArgumentsTier2;
-(id)newRenderPipelineWithDescriptor:(id)arg1 vertexVariant:(id)arg2 fragmentVariant:(id)arg3 ;
-(BOOL)supportsDynamicLibraries;
-(BOOL)supportsLinearTexture2DArray;
-(BOOL)supportsForkJoin;
-(const MTLTargetDeviceArch*)targetDeviceInfo;
-(BOOL)supportsFastMathInfNaNPropagation;
-(BOOL)supportsIndirectTextures;
-(unsigned long long)maxInterpolatedComponents;
-(BOOL)isFixedLinePointFillDepthGradientSupported;
-(void)startCollectingPipelineDescriptorsUsingPrefixForNames:(id)arg1 ;
-(BOOL)supportsNonZeroTextureWriteLOD;
-(void)setShaderDebugInfoCaching:(BOOL)arg1 ;
-(BOOL)supportsSRGBwrites;
-(BOOL)supportsTileShaders;
-(Class)featureQueryClass;
-(unsigned long long)maxTextureHeight3D;
-(unsigned long long)maxTextureBufferWidth;
-(BOOL)requiresRaytracingEmulation;
-(BOOL)supportsMSAAStencilResolve;
-(id)endCollectingPipelineDescriptors;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(NSString *)name;
-(unsigned long long)maxTextureHeight2D;
-(BOOL)supportsYCBCRFormats12;
-(BOOL)supportsTextureWriteRoundingMode:(long long)arg1 ;
-(id)newDefaultLibrary;
-(BOOL)supportsGPUStatistics;
-(unsigned long long)linearTextureAlignmentBytes;
-(id)pipelinePerformanceStatisticsWithComputeVariant:(id)arg1 ;
-(BOOL)supportsPlacementHeaps;
-(void)sampleTimestamps:(unsigned long long*)arg1 gpuTimestamp:(unsigned long long*)arg2 ;
-(id)pipelinePerformanceStatisticsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2 vertexCompileTimeOutput:(id)arg3 fragmentCompileTimeOutput:(id)arg4 ;
-(SCD_Struct_MT52)pipelineFlagsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2 ;
-(unsigned long long)maxIndirectTextures;
-(unsigned long long)maxFramebufferStorageBits;
-(BOOL)supportsRasterOrderGroupsColorAttachment;
-(BOOL)supportsForceSeamsOnCubemaps;
-(BOOL)supportsMutableTier1ArgumentBuffers;
-(unsigned long long)maxFunctionConstantIndices;
-(unsigned long long)maxTextureLayers;
-(SCD_Struct_MT50)libraryCacheStats;
-(unsigned long long)maxTileSamplers;
-(unsigned long long)sparseTileSizeInBytes;
-(unsigned)acceleratorPort;
-(BOOL)supportsRasterOrderGroups;
-(unsigned long long)maxTileInlineDataSize;
-(BOOL)supportsYCBCRPackedFormats12;
-(BOOL)validateDynamicLibrary:(id)arg1 state:(BOOL)arg2 error:(id*)arg3 ;
-(id)description;
-(BOOL)supportsSamplerAddressModeClampToHalfBorder;
-(unsigned long long)maxVertexSamplers;
-(unsigned long long)maxComputeLocalMemorySizes;
-(id)newDynamicLibraryWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)areProgrammableSamplePositionsSupported;
-(id)newDynamicLibrary:(id)arg1 computeDescriptor:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)maxVertexInlineDataSize;
-(void)startCollectingPipelineDescriptors;
-(BOOL)supportsRenderTextureWrites;
-(BOOL)supportsBufferPrefetchStatistics;
-(BOOL)supportsImageBlockSampleCoverageControl;
-(BOOL)supportsSIMDShufflesAndBroadcast;
-(void)releaseCacheEntry:(MTLLibraryContainer*)arg1 ;
-(id)resolveCounters:(id)arg1 withRange:(NSRange)arg2 ;
-(BOOL)supportsRenderToLinearTextures;
-(id)newBinaryLibraryWithOptions:(unsigned long long)arg1 url:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)maxComputeThreadgroupMemoryAlignmentBytes;
-(SCD_Struct_MT53)pipelineFlagsWithComputeVariant:(id)arg1 ;
-(unsigned long long)maxTessellationFactor;
-(id)newSharedEventWithMachPort:(unsigned)arg1 ;
@end

