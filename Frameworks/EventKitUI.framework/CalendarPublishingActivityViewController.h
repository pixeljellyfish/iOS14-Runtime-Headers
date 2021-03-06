/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivityViewController.h>

@protocol CalendarPublishingActivityDelegate;
@interface CalendarPublishingActivityViewController : UIActivityViewController {

	id<CalendarPublishingActivityDelegate> _activityDelegate;

}

@property (__weak) id<CalendarPublishingActivityDelegate> activityDelegate;              //@synthesize activityDelegate=_activityDelegate - In the implementation block
-(void)_prepareActivity:(id)arg1 ;
-(BOOL)_shouldShowSystemActivityType:(id)arg1 ;
-(id<CalendarPublishingActivityDelegate>)activityDelegate;
-(void)setActivityDelegate:(id<CalendarPublishingActivityDelegate>)arg1 ;
@end

