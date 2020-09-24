/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIView.h>

@class TSDLineEnd;

@interface TSDLineEndView : UIView {

	TSDLineEnd* mLineEnd;
	BOOL mOnRight;

}

@property (nonatomic,retain) TSDLineEnd * lineEnd; 
@property (assign,nonatomic) BOOL onRight; 
+(id)viewWithLineEnd:(id)arg1 onRight:(BOOL)arg2 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(TSDLineEnd *)lineEnd;
-(BOOL)onRight;
-(void)setLineEnd:(TSDLineEnd *)arg1 ;
-(void)setOnRight:(BOOL)arg1 ;
@end
