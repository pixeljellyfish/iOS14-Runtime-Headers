/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOGPU/IOGPU-Structs.h>
#import <IOGPU/IOGPUMetalCommandEncoder.h>

@interface IOGPUMetalResourceStateCommandEncoder : IOGPUMetalCommandEncoder
-(unsigned long long)getType;
-(void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 indirectBuffer:(id)arg3 indirectBufferOffset:(unsigned long long)arg4 ;
-(void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 region:(SCD_Struct_IO24)arg3 mipLevel:(unsigned long long)arg4 slice:(unsigned long long)arg5 ;
-(void)updateTextureMappings:(id)arg1 mode:(unsigned long long)arg2 regions:(const SCD_Struct_IO24*)arg3 mipLevels:(const unsigned long long*)arg4 slices:(const unsigned long long*)arg5 numRegions:(unsigned long long)arg6 ;
@end
