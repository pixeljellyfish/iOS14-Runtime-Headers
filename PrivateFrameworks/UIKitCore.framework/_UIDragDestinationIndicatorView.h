/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@interface _UIDragDestinationIndicatorView : UIView {

	BOOL _isSourceList;
	double _scaleFactor;

}

@property (assign,nonatomic) BOOL isSourceList;                 //@synthesize isSourceList=_isSourceList - In the implementation block
@property (nonatomic,readonly) double scaleFactor;              //@synthesize scaleFactor=_scaleFactor - In the implementation block
-(double)scaleFactor;
-(void)setIsSourceList:(BOOL)arg1 ;
-(void)positionOnCellFrame:(CGRect)arg1 above:(BOOL)arg2 ;
-(BOOL)isSourceList;
-(id)initWithSourceListStyle:(BOOL)arg1 ;
-(void)positionVerticallyCenteredInFrame:(CGRect)arg1 ;
-(void)positionHorizontallyCenteredInFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end
