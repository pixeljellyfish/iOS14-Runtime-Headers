/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarNotification/CalendarNotification-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface CALNNotificationCategory : NSObject <NSCopying> {

	NSString* _identifier;
	NSArray* _actions;
	unsigned long long _options;
	NSString* _hiddenPreviewsBodyPlaceholder;
	NSString* _categorySummaryFormat;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                                     //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                 //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * hiddenPreviewsBodyPlaceholder;              //@synthesize hiddenPreviewsBodyPlaceholder=_hiddenPreviewsBodyPlaceholder - In the implementation block
@property (nonatomic,copy,readonly) NSString * categorySummaryFormat;                      //@synthesize categorySummaryFormat=_categorySummaryFormat - In the implementation block
+(id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 options:(unsigned long long)arg4 ;
+(id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 options:(unsigned long long)arg4 categorySummaryFormat:(id)arg5 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(NSArray *)actions;
-(NSString *)categorySummaryFormat;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)hiddenPreviewsBodyPlaceholder;
-(BOOL)isEqualToCategory:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithIdentifier:(id)arg1 actions:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 options:(unsigned long long)arg4 categorySummaryFormat:(id)arg5 ;
-(id)description;
@end
