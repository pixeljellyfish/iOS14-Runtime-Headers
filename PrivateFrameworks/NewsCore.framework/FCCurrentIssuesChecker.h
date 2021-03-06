/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCCurrentIssuesChecker.h>

@protocol FCCurrentIssuesChecker <NSObject>
@required
-(void)fetchCurrentIssuesWithCompletion:(/*^block*/id)arg1;
-(void)fetchUsersCurrentIssuesWithCompletion:(/*^block*/id)arg1;

@end


@protocol FCContentContext, FCBundleSubscriptionProviderType;
@class FCSubscriptionController, FCIssueReadingHistory, NSString;

@interface FCCurrentIssuesChecker : NSObject <FCCurrentIssuesChecker> {

	id<FCContentContext> _context;
	FCSubscriptionController* _subscriptionController;
	FCIssueReadingHistory* _issueReadingHistory;
	id<FCBundleSubscriptionProviderType> _bundleSubscriptionProvider;

}

@property (nonatomic,retain) id<FCContentContext> context;                                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FCSubscriptionController * subscriptionController;                            //@synthesize subscriptionController=_subscriptionController - In the implementation block
@property (nonatomic,retain) FCIssueReadingHistory * issueReadingHistory;                                  //@synthesize issueReadingHistory=_issueReadingHistory - In the implementation block
@property (nonatomic,retain) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider;              //@synthesize bundleSubscriptionProvider=_bundleSubscriptionProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCIssueReadingHistory *)issueReadingHistory;
-(id)_promiseFollowedAndAutofavoriteChannelIDsWithChainingData:(id)arg1 ;
-(void)setBundleSubscriptionProvider:(id<FCBundleSubscriptionProviderType>)arg1 ;
-(id<FCBundleSubscriptionProviderType>)bundleSubscriptionProvider;
-(id)demoFollowedChannelIDs;
-(id)sortIssues:(id)arg1 basedOnTagIDs:(id)arg2 ;
-(id)initWithContext:(id)arg1 subscriptionController:(id)arg2 issueReadingHistory:(id)arg3 bundleSubscriptionProvider:(id)arg4 ;
-(id)_promiseCurrentIssuesFromChannelIDs:(id)arg1 withChainingData:(id)arg2 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(id)init;
-(id)_promiseBundleChannelIDs;
-(void)setIssueReadingHistory:(FCIssueReadingHistory *)arg1 ;
-(id<FCContentContext>)context;
-(void)setSubscriptionController:(FCSubscriptionController *)arg1 ;
-(FCSubscriptionController *)subscriptionController;
-(void)fetchCurrentIssuesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchUsersCurrentIssuesWithCompletion:(/*^block*/id)arg1 ;
-(id)_promiseFilterUnreadIssuesWithFromIssues:(id)arg1 withChainingdata:(id)arg2 ;
@end

