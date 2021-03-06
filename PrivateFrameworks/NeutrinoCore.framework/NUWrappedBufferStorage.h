/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NUAbstractBufferStorage.h>
#import <libobjc.A.dylib/NUBuffer.h>
#import <libobjc.A.dylib/NUMutableBuffer.h>

@class NUPixelFormat, NSString;

@interface NUWrappedBufferStorage : _NUAbstractBufferStorage <NUBuffer, NUMutableBuffer> {

	long long _length;
	long long _rowBytes;
	void* _bytes;

}

@property (nonatomic,readonly) SCD_Struct_NU7 size; 
@property (nonatomic,readonly) NUPixelFormat * format; 
@property (nonatomic,readonly) long long rowBytes;                  //@synthesize rowBytes=_rowBytes - In the implementation block
@property (nonatomic,readonly) const void* bytes;                   //@synthesize bytes=_bytes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) void* mutableBytes; 
-(const void*)bytes;
-(void*)mutableBytes;
-(long long)sizeInBytes;
-(long long)rowBytes;
-(NSString *)description;
-(long long)readBufferInRegion:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)writeBufferInRegion:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)newRenderDestination;
-(id)initWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 bytes:(void*)arg3 rowBytes:(long long)arg4 length:(long long)arg5 ;
@end

