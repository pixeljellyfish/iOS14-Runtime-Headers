/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEditKit/CameraEditKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface CEKLightingCubeAppearance : NSObject <NSCopying, NSMutableCopying> {

	CGGradientRef _background;
	CGColorRef _topFill;
	CGGradientRef _topGlow;
	CGGradientRef _topMask;
	CGColorRef _bottomFill;
	CGGradientRef _bottomInnerGlow;
	CGGradientRef _bottomOuterGlow;
	CGGradientRef _bottomMask;
	CGColorRef _verticalFillColor;
	double _verticalFillFrontIntensity;
	double _verticalFillBackIntensity;
	CGGradientRef _topOver;
	CGColorRef _stroke;

}

@property (nonatomic,readonly) CGGradientRef background;                       //@synthesize background=_background - In the implementation block
@property (nonatomic,readonly) CGColorRef topFill;                             //@synthesize topFill=_topFill - In the implementation block
@property (nonatomic,readonly) CGGradientRef topGlow;                          //@synthesize topGlow=_topGlow - In the implementation block
@property (nonatomic,readonly) CGGradientRef topMask;                          //@synthesize topMask=_topMask - In the implementation block
@property (nonatomic,readonly) CGColorRef bottomFill;                          //@synthesize bottomFill=_bottomFill - In the implementation block
@property (nonatomic,readonly) CGGradientRef bottomInnerGlow;                  //@synthesize bottomInnerGlow=_bottomInnerGlow - In the implementation block
@property (nonatomic,readonly) CGGradientRef bottomOuterGlow;                  //@synthesize bottomOuterGlow=_bottomOuterGlow - In the implementation block
@property (nonatomic,readonly) CGGradientRef bottomMask;                       //@synthesize bottomMask=_bottomMask - In the implementation block
@property (nonatomic,readonly) CGColorRef verticalFillColor;                   //@synthesize verticalFillColor=_verticalFillColor - In the implementation block
@property (nonatomic,readonly) double verticalFillBackIntensity;               //@synthesize verticalFillBackIntensity=_verticalFillBackIntensity - In the implementation block
@property (nonatomic,readonly) double verticalFillFrontIntensity;              //@synthesize verticalFillFrontIntensity=_verticalFillFrontIntensity - In the implementation block
@property (nonatomic,readonly) CGGradientRef topOver;                          //@synthesize topOver=_topOver - In the implementation block
@property (nonatomic,readonly) CGColorRef stroke;                              //@synthesize stroke=_stroke - In the implementation block
+(id)appearanceFrom:(id)arg1 to:(id)arg2 progress:(double)arg3 ;
-(CGColorRef)stroke;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGGradientRef)topMask;
-(void)dealloc;
-(CGGradientRef)bottomMask;
-(CGGradientRef)topGlow;
-(CGColorRef)topFill;
-(CGGradientRef)topOver;
-(CGGradientRef)background;
-(id)initWithStroke:(CGColorRef)arg1 ;
-(CGColorRef)verticalFillColor;
-(CGColorRef)bottomFill;
-(CGGradientRef)bottomOuterGlow;
-(double)verticalFillFrontIntensity;
-(double)verticalFillBackIntensity;
-(CGGradientRef)bottomInnerGlow;
@end

