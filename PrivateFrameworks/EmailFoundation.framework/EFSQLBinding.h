/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/EFSQLBindable.h>

@class NSString;

@interface EFSQLBinding : NSObject <EFSQLBindable>

@property (nonatomic,readonly) EFSQLBinding * ef_SQLBinding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bindingWithData:(id)arg1 ;
+(id)bindingWithDouble:(double)arg1 ;
+(id)bindingWithInt64:(long long)arg1 ;
+(id)bindingWithString:(id)arg1 ;
+(id)nullBinding;
-(void)bindTo:(sqlite3_stmtRef)arg1 withSQLIndex:(int)arg2 ;
-(EFSQLBinding *)ef_SQLBinding;
-(void)bindToStatement:(id)arg1 usingIndex:(unsigned long long)arg2 ;
-(void)bindToStatement:(id)arg1 usingName:(id)arg2 ;
@end

