/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface NFCallbackScope : NSObject {

	unsigned long long _scope;
	NSArray* _names;

}

@property (nonatomic,readonly) unsigned long long scope;              //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) NSArray * names;                       //@synthesize names=_names - In the implementation block
-(unsigned long long)scope;
-(NSArray *)names;
-(id)initWithScope:(unsigned long long)arg1 names:(id)arg2 ;
@end

