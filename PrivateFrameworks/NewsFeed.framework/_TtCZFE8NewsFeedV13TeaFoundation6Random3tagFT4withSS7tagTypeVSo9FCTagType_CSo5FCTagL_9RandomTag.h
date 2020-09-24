/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCTag.h>

@class NSArray;

@interface _TtCZFE8NewsFeedV13TeaFoundation6Random3tagFT4withSS7tagTypeVSo9FCTagType_CSo5FCTagL_9RandomTag : FCTag

@property (readonly,nonatomic) NSArray * currentIssueIDs; 
-(id)initChannelForTestingWithIdentifier:(id)arg1 name:(id)arg2 publisherPaidBundlePurchaseIDs:(id)arg3 ;
-(id)initWithData:(id)arg1 context:(id)arg2 ;
-(id)init;
-(id)initChannelForTestingWithIdentifier:(id)arg1 name:(id)arg2 defaultSection:(id)arg3 publisherAuthorizationURL:(id)arg4 publisherVerificationURL:(id)arg5 ;
-(NSArray *)currentIssueIDs;
-(id)initChannelFromNotificationWithIdentifier:(id)arg1 name:(id)arg2 nameImageAssetHandle:(id)arg3 nameImageMaskAssetHandle:(id)arg4 ;
-(id)initWithTagRecord:(id)arg1 assetManager:(id)arg2 interestToken:(id)arg3 ;
-(id)initWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3 ;
-(id)initForTestingWithTagType:(unsigned long long)arg1 identifier:(id)arg2 name:(id)arg3 ;
@end
