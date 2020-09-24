/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DrawingKit/DrawingKit-Structs.h>
@interface HWEncoding : NSObject
+(id)protoDrawingFromDrawing:(id)arg1 compress:(BOOL)arg2 ;
+(id)protoMessageFromHandwriting:(id)arg1 ;
+(id)decodedBrushStrokesWithData:(id)arg1 inCanvasBounds:(CGRect)arg2 inStrokesFrame:(CGRect)arg3 strokeDataFieldCount:(unsigned)arg4 count:(unsigned long long)arg5 ;
+(id)encodeBrushStrokesAsData:(id)arg1 inCanvasBounds:(CGRect)arg2 inStrokesFrame:(CGRect)arg3 ;
+(id)encodeHandwriting:(id)arg1 compress:(BOOL)arg2 ;
+(id)decodeHandwritingFromData:(id)arg1 ;
+(void)writeDataToDisk:(id)arg1 withName:(id)arg2 ;
@end
