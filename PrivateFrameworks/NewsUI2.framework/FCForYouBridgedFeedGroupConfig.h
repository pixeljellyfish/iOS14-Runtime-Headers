/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FCForYouBridgedFeedGroupConfig <NFCopying>
@property (readonly,nonatomic) long long bridgedGroupType; 
@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) NSString * channelID; 
@property (readonly,nonatomic) NSString * backingTagID; 
@required
-(NSString *)channelID;
-(NSString *)identifier;
-(NSString *)backingTagID;
-(long long)bridgedGroupType;

@end

