/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTVocToken.h>

@class NSString, NSData;

@interface FTMutableVocToken : FTVocToken

@property (nonatomic,copy) NSString * orthography; 
@property (nonatomic,copy) NSData * blob; 
-(NSData *)blob;
-(void)blob:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)orthography;
-(void)setOrthography:(NSString *)arg1 ;
-(id)init;
-(void)setBlob:(NSData *)arg1 ;
@end
