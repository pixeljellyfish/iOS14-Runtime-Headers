/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUJSProxy.h>
#import <libobjc.A.dylib/NUJSImageGeometryExport.h>

@class NUJSScale, NUImageGeometry;

@interface NUJSImageGeometry : NUJSProxy <NUJSImageGeometryExport>

@property (readonly) NUImageGeometry * geometry; 
@property (readonly) CGRect extent; 
@property (readonly) CGSize size; 
@property (readonly) CGSize scaledSize; 
@property (readonly) NUJSScale * scale; 
@property (readonly) long long orientation; 
-(NUJSScale *)scale;
-(long long)orientation;
-(CGRect)extent;
-(CGSize)size;
-(NUImageGeometry *)geometry;
-(CGSize)scaledSize;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id)initWithGeometry:(id)arg1 context:(id)arg2 ;
@end

