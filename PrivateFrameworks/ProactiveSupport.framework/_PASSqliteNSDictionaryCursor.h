/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/_PASSqliteKeyValueCursor.h>

@class NSDictionary, NSEnumerator;

@interface _PASSqliteNSDictionaryCursor : _PASSqliteKeyValueCursor {

	NSDictionary* _dictionary;
	NSEnumerator* _keysEnumerator;
	id _currentKey;
	id _currentValue;
	id _valueEqualTo;

}

@property (nonatomic,retain) NSDictionary * collection; 
+(const char*)sqliteMethodName;
+(id)planningInfoForKeyConstraint:(int)arg1 ;
-(void)applyKeyConstraint:(int)arg1 withArgument:(id)arg2 ;
-(id)currentIndexedValue;
-(void)setCollection:(NSDictionary *)arg1 ;
-(void)stepIndexedRow;
-(id)currentIndexedKey;
-(void)finalizeConstraints;
-(BOOL)currentIndexedRowSatisfiesConstraints;
@end
