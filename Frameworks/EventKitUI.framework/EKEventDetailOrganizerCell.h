/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@protocol EKIdentityProtocol;
@class NSString, EKUILabeledAvatarView, UILabel;

@interface EKEventDetailOrganizerCell : EKEventDetailCell {

	NSString* _organizerName;
	EKUILabeledAvatarView* _organizerView;
	UILabel* _organizerLabel;
	UILabel* _titleView;
	id<EKIdentityProtocol> _organizerOverride;
	BOOL _hideDisclosureIndicator;

}

@property (assign,nonatomic) BOOL hideDisclosureIndicator;              //@synthesize hideDisclosureIndicator=_hideDisclosureIndicator - In the implementation block
+(id)_titleFont;
+(id)_organizerFont;
-(BOOL)shouldDisplayForEvent;
-(void)_updateDisclosureIndicator;
-(id)_organizerView;
-(id)_organizerLabel;
-(BOOL)update;
-(BOOL)hideDisclosureIndicator;
-(void)setHideDisclosureIndicator:(BOOL)arg1 ;
-(id)_titleView;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 organizerOverride:(id)arg3 ;
@end

