/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSArray, VSOptional, VSStoreURLBag;

@interface VSFeaturedIdentityProviderLimitingOperation : VSAsyncOperation {

	NSArray* _unlimitedIdentityProviders;
	VSOptional* _result;
	VSStoreURLBag* _bag;

}

@property (nonatomic,retain) VSStoreURLBag * bag;                             //@synthesize bag=_bag - In the implementation block
@property (nonatomic,copy) NSArray * unlimitedIdentityProviders;              //@synthesize unlimitedIdentityProviders=_unlimitedIdentityProviders - In the implementation block
@property (nonatomic,retain) VSOptional * result;                             //@synthesize result=_result - In the implementation block
-(void)setBag:(VSStoreURLBag *)arg1 ;
-(VSStoreURLBag *)bag;
-(VSOptional *)result;
-(id)init;
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(void)setUnlimitedIdentityProviders:(NSArray *)arg1 ;
-(NSArray *)unlimitedIdentityProviders;
@end

