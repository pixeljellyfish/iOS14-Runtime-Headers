/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AMSUICommonView.h>

@class UIView;

@interface AMSUIWebSnapshotView : AMSUICommonView {

	UIView* _snapshot;

}

@property (nonatomic,retain) UIView * snapshot;              //@synthesize snapshot=_snapshot - In the implementation block
+(void)screenCapFromView:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)_imageViewForImage:(id)arg1 ;
-(void)setSnapshot:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)snapshot;
-(void)_updateSnapshot:(id)arg1 ;
-(id)initWithView:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

