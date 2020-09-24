/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TSTimeConverter : NSObject {

	NSArray* _taiutc;

}
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)init;
-(id)taiDateFromUTCDate:(id)arg1 ;
-(id)utcDateFromTAIDate:(id)arg1 ;
-(id)initWithTAIUTCArray:(id)arg1 ;
-(double)leapSecondForUTCDate:(id)arg1 ;
-(double)leapSecondForTAIDate:(id)arg1 ;
@end
