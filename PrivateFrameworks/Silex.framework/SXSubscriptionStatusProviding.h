/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXSubscriptionStatusProviding <NSObject>
@property (readonly,nonatomic) long long bundleSubscriptionStatus; 
@property (readonly,nonatomic) long long channelSubscriptionStatus; 
@required
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(long long)bundleSubscriptionStatus;
-(long long)channelSubscriptionStatus;

@end

