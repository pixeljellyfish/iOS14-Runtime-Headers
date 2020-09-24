/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSinkConfiguration.h>

@class NSArray;

@interface FigCaptureVideoThumbnailSinkConfiguration : FigCaptureSinkConfiguration {

	CGSize _thumbnailSize;
	NSArray* _filters;

}

@property (assign,nonatomic) CGSize thumbnailSize;              //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,copy) NSArray * filters;                   //@synthesize filters=_filters - In the implementation block
-(void)setFilters:(NSArray *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSArray *)filters;
-(id)copyXPCEncoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(CGSize)thumbnailSize;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(int)sinkType;
@end
