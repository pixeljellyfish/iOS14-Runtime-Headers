/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <CMCapture/CMCapture-Structs.h>
@class BWVideoFormat, NSString, NSDictionary, BWMemoryPool, NSObject;

@interface BWPixelBufferPool : NSObject {

	BWVideoFormat* _videoFormat;
	unsigned long long _capacity;
	NSString* _name;
	BOOL _clientProvidesPool;
	NSDictionary* _additionalPixelBufferAttributes;
	os_unfair_lock_s _pixelBufferPoolConfigurationLock;
	CVPixelBufferPoolRef _pixelBufferPool;
	NSDictionary* _pixelBufferPoolAuxAttributes;
	int _pixelBufferPoolCreateError;
	BWMemoryPool* _memoryPool;
	BOOL _providesBackPressure;
	NSObject*<OS_dispatch_semaphore> _backPressureSemaphore;

}

@property (readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long capacity; 
@property (nonatomic,readonly) unsigned pixelFormat; 
@property (nonatomic,readonly) CVPixelBufferPoolRef cvPixelBufferPool; 
@property (nonatomic,readonly) CFDictionaryRef cvPixelBufferPoolAuxAttributes; 
+(void)initialize;
-(unsigned long long)capacity;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)flush;
-(unsigned)pixelFormat;
-(void)_flush;
-(void)prefetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCapacity:(unsigned long long)arg1 ;
-(void)setCVPixelBufferPool:(CVPixelBufferPoolRef)arg1 attributes:(CFDictionaryRef)arg2 ;
-(CVBufferRef)_newPixelBuffer;
-(void)flushToMinimumCapacity:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 memoryPool:(id)arg4 ;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(BOOL)arg4 memoryPool:(id)arg5 providesBackPressure:(BOOL)arg6 ;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 additionalPixelBufferAttributes:(id)arg4 ;
-(void)preallocateWithCompletionHandler:(/*^block*/id)arg1 ;
-(CVPixelBufferPoolRef)cvPixelBufferPool;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 ;
-(void)enumerateSurfacesUsingBlock:(/*^block*/id)arg1 ;
-(CVBufferRef)newPixelBuffer;
-(int)preallocate;
-(int)_ensurePool;
-(NSString *)name;
-(CFDictionaryRef)cvPixelBufferPoolAuxAttributes;
@end
