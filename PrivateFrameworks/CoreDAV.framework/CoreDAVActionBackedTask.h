/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class CoreDAVAction;

@interface CoreDAVActionBackedTask : CoreDAVTask {

	CoreDAVAction* _backingAction;

}

@property (nonatomic,retain) CoreDAVAction * backingAction;              //@synthesize backingAction=_backingAction - In the implementation block
-(id)description;
-(void)setBackingAction:(CoreDAVAction *)arg1 ;
-(CoreDAVAction *)backingAction;
@end

