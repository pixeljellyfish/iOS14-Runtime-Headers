/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/ICContentMapping.h>

@class NSDateFormatter;

@interface ICDateContentMapping : ICContentMapping {

	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,retain) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)getStringRepresentation:(/*^block*/id)arg1 withInput:(id)arg2 parameters:(id)arg3 ;
-(id)initWithDefinition:(id)arg1 ;
@end

