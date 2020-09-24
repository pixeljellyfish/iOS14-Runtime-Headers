/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIContext : NSObject {

	void* _priv;

}

@property (readonly) Context* _internalContext; 
@property (readonly) unsigned long long identifier; 
@property (nonatomic,readonly) CGColorSpaceRef workingColorSpace; 
@property (nonatomic,readonly) int workingFormat; 
+(id)_IS_sharedIconCompositorContext;
+(id)_MI_sharedIconCompositorContext;
+(id)contextWithOptions:(id)arg1 ;
+(CGColorSpaceRef)defaultWorkingColorSpace;
+(id)_singletonContext;
+(CGColorSpaceRef)defaultGrayColorSpace;
+(CGColorSpaceRef)defaultRGBColorSpace;
+(id)context;
+(Context*)internalContextWithMTLDevice:(id)arg1 options:(id)arg2 ;
+(id)contextWithMTLDevice:(id)arg1 ;
+(Context*)internalGLContextWithOptions:(id)arg1 ;
+(Context*)internalContextWithEAGLContext:(id)arg1 options:(id)arg2 ;
+(Context*)internalContextWithMTLCommandQueue:(id)arg1 options:(id)arg2 ;
+(id)contextWithMTLCommandQueue:(id)arg1 options:(id)arg2 ;
+(id)contextWithEAGLContext:(id)arg1 ;
+(int)_crashed_because_nonaddressable_memory_was_passed_to_render:(id)arg1 toBitmap:(void*)arg2 rowBytes:(long long)arg3 bounds:(CGRect)arg4 format:(int)arg5 colorSpace:(CGColorSpaceRef)arg6 ;
+(id)contextWithCGContext:(CGContextRef)arg1 options:(id)arg2 ;
+(id)contextWithEAGLContext:(id)arg1 options:(id)arg2 ;
+(id)contextWithMTLDevice:(id)arg1 options:(id)arg2 ;
+(id)contextWithMTLCommandQueue:(id)arg1 ;
+(Context*)internalCLContextWithOptions:(id)arg1 glContext:(void*)arg2 ;
+(Context*)internalCLContextWithOptions:(id)arg1 ;
-(CGAffineTransform)CTM;
-(id)device;
-(void)setCTM:(CGAffineTransform)arg1 ;
-(CGSize)outputImageMaximumSize;
-(void)clearCaches;
-(unsigned long long)identifier;
-(id)_initWithInternalRepresentation:(void*)arg1 ;
-(CGImageRef)createCGImage:(id)arg1 fromRect:(CGRect)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(BOOL)writePNGRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 options:(id)arg5 error:(id*)arg6 ;
-(CGRect)bounds;
-(id)PNGRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 options:(id)arg4 ;
-(void)_insertEventMarker:(const char*)arg1 ;
-(void)invalidate;
-(id)_pdfDataRepresentation;
-(void)lock;
-(id)startTaskToClear:(id)arg1 error:(id*)arg2 ;
-(void)render:(id)arg1 toCVPixelBuffer:(CVBufferRef)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)writeJPEGRepresentationOfImage:(id)arg1 toURL:(id)arg2 colorSpace:(CGColorSpaceRef)arg3 options:(id)arg4 error:(id*)arg5 ;
-(void)unlock;
-(CGImageRef)createCGImage:(id)arg1 fromRect:(CGRect)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 deferred:(BOOL)arg5 ;
-(CGSize)inputImageMaximumSize;
-(void)dealloc;
-(id)createColorCubeDataForFilters:(id)arg1 dimension:(int)arg2 ;
-(BOOL)writeTIFFRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 options:(id)arg5 error:(id*)arg6 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)prepareRender:(id)arg1 fromRect:(CGRect)arg2 toDestination:(id)arg3 atPoint:(CGPoint)arg4 error:(id*)arg5 ;
-(unsigned long long)maximumInputImageSize;
-(void)render:(id)arg1 toTexture:(unsigned)arg2 target:(unsigned)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(void)drawImage:(id)arg1 atPoint:(CGPoint)arg2 fromRect:(CGRect)arg3 ;
-(id)initWithEAGLContext:(id)arg1 options:(id)arg2 ;
-(void)render:(id)arg1 toBitmap:(void*)arg2 rowBytes:(long long)arg3 bounds:(CGRect)arg4 format:(int)arg5 colorSpace:(CGColorSpaceRef)arg6 ;
-(void)render:(id)arg1 toTexture:(unsigned)arg2 bounds:(CGRect)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(void)_gpuContextCheck;
-(void)render:(id)arg1 toCVPixelBuffer:(CVBufferRef)arg2 bounds:(CGRect)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(id)initWithMTLDevice:(id)arg1 options:(id)arg2 ;
-(id)_startTaskToRender:(id)arg1 toDestination:(id)arg2 forPrepareRender:(BOOL)arg3 forClear:(BOOL)arg4 error:(id*)arg5 ;
-(void)abort;
-(id)depthBlurEffectFilterForImage:(id)arg1 disparityImage:(id)arg2 portraitEffectsMatte:(id)arg3 orientation:(unsigned)arg4 options:(id)arg5 ;
-(BOOL)measureRequirementsOf:(id)arg1 query:(int)arg2 :(id*)arg3 results:(CGRect*)arg4 ;
-(id)flatten:(id)arg1 fromRect:(CGRect)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(void)render:(id)arg1 ;
-(BOOL)_isGLBackedContext;
-(BOOL)_isCGBackedContext;
-(IOSurfaceRef)createIOSurface:(id)arg1 ;
-(id)init;
-(id)initWithCGContext:(CGContextRef)arg1 options:(id)arg2 ;
-(CGLayerRef)createCGLayerWithSize:(CGSize)arg1 info:(CFDictionaryRef)arg2 ;
-(id)initWithOptions:(id)arg1 ;
-(int)workingFormat;
-(void)reclaimResources;
-(id)_createClone;
-(BOOL)writeHEIFRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 options:(id)arg5 error:(id*)arg6 ;
-(IOSurfaceRef)createIOSurface:(id)arg1 fromRect:(CGRect)arg2 ;
-(id)initWithEAGLContext:(id)arg1 ;
-(Context*)_internalContext;
-(id)internalCommandQueue;
-(CGImageRef)createCGImage:(id)arg1 fromRect:(CGRect)arg2 format:(int)arg3 ;
-(CGColorSpaceRef)workingColorSpace;
-(CGColorSpaceRef)_outputColorSpace;
-(CGImageRef)createCGImage:(id)arg1 fromRect:(CGRect)arg2 ;
-(CGImageRef)_createCGImage:(id)arg1 fromRect:(CGRect)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 deferred:(Trilean)arg5 ;
-(id)depthBlurEffectFilterForImage:(id)arg1 disparityImage:(id)arg2 portraitEffectsMatte:(id)arg3 hairSemanticSegmentation:(id)arg4 orientation:(unsigned)arg5 options:(id)arg6 ;
-(id)startTaskToRender:(id)arg1 toDestination:(id)arg2 error:(id*)arg3 ;
-(id)initWithMTLCommandQueue:(id)arg1 options:(id)arg2 ;
-(id)startTaskToRender:(id)arg1 fromRect:(CGRect)arg2 toDestination:(id)arg3 atPoint:(CGPoint)arg4 error:(id*)arg5 ;
-(unsigned long long)maximumOutputImageSize;
-(id)HEIFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 options:(id)arg4 ;
-(BOOL)_isGLInternalContext;
-(id)depthBlurEffectFilterForImageData:(id)arg1 options:(id)arg2 ;
-(id)depthBlurEffectFilterForImageURL:(id)arg1 options:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)render:(id)arg1 toMTLTexture:(id)arg2 commandBuffer:(id)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(void)drawImage:(id)arg1 inRect:(CGRect)arg2 fromRect:(CGRect)arg3 ;
-(void)render:(id)arg1 toIOSurface:(IOSurfaceRef)arg2 bounds:(CGRect)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(id)description;
-(id)TIFFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 options:(id)arg4 ;
-(id)clientCommandQueue;
-(BOOL)_isMetalInternalContext;
-(id)JPEGRepresentationOfImage:(id)arg1 colorSpace:(CGColorSpaceRef)arg2 options:(id)arg3 ;
-(void)_performFaceDetection:(id)arg1 image:(id)arg2 orientation:(int)arg3 filter:(id)arg4 ;
@end
