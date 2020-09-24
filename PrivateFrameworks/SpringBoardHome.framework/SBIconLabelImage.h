/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIImage.h>

@class SBIconLabelImageParameters, UIImage;

@interface SBIconLabelImage : UIImage {

	SBIconLabelImageParameters* _parameters;
	UIEdgeInsets _alignmentRectInsets;
	double _baselineOffsetFromBottom;
	UIImage* _legibilityImage;

}

@property (nonatomic,retain) UIImage * legibilityImage;                                   //@synthesize legibilityImage=_legibilityImage - In the implementation block
@property (nonatomic,copy,readonly) SBIconLabelImageParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(BOOL)attributedText:(id)arg1 fitsInRect:(CGRect)arg2 textRect:(out CGRect*)arg3 ;
+(CGSize)_maxLegibilityImageSizeForLabelSize:(CGSize)arg1 ;
+(void)applyKerning:(double)arg1 whitespaceKerning:(double)arg2 toAttributedString:(id)arg3 ;
+(id)legibilityImageForIconLabelImage:(id)arg1 parameters:(id)arg2 pool:(id)arg3 ;
+(double)legibilityStrengthForLegibilityStyle:(long long)arg1 ;
+(BOOL)needsLegibilityImageForParameters:(id)arg1 ;
+(id)imageWithParameters:(id)arg1 ;
+(id)imageWithParameters:(id)arg1 pool:(id)arg2 legibilityPool:(id)arg3 ;
-(UIImage *)legibilityImage;
-(SBIconLabelImageParameters *)parameters;
-(id)_initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 parameters:(id)arg4 alignmentRectInsets:(UIEdgeInsets)arg5 baselineOffsetFromBottom:(double)arg6 ;
-(double)baselineOffsetFromBottom;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setLegibilityImage:(UIImage *)arg1 ;
-(BOOL)hasBaseline;
-(id)description;
@end
