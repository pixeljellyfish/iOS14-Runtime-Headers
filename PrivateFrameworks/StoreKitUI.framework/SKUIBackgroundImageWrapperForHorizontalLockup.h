/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIImageView.h>

@class SKUIHorizontalLockupView, SKUIImageView;

@interface SKUIBackgroundImageWrapperForHorizontalLockup : SKUIImageView {

	SKUIHorizontalLockupView* _lockup;
	SKUIImageView* _imageView;

}

@property (assign,nonatomic,__weak) SKUIHorizontalLockupView * lockup;              //@synthesize lockup=_lockup - In the implementation block
@property (assign,nonatomic,__weak) SKUIImageView * imageView;                      //@synthesize imageView=_imageView - In the implementation block
-(id)initWithImage:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setImageView:(SKUIImageView *)arg1 ;
-(SKUIHorizontalLockupView *)lockup;
-(void)setLockup:(SKUIHorizontalLockupView *)arg1 ;
-(SKUIImageView *)imageView;
@end

