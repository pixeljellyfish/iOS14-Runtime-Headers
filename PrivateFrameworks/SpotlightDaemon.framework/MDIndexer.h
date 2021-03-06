/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MDIndexer <CSSearchableIndexInterface>
@property (__weak) id<CSIndexExtensionDelegate> extensionDelegate; 
@optional
-(id)taskForQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1 protectionClass:(id)arg2 shouldGC:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(id<CSIndexExtensionDelegate>)extensionDelegate;
-(id)startQuery:(id)arg1 withContext:(id)arg2 eventHandler:(/*^block*/id)arg3 handler:(/*^block*/id)arg4;
-(void)queryPreheat:(id)arg1;
-(void)deleteActionsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)recordEngagementForBundleID:(id)arg1 uniqueIdentifier:(id)arg2 protectionClass:(id)arg3 userQuery:(id)arg4 date:(id)arg5;
-(id)startQuery:(id)arg1 withContext:(id)arg2 handler:(/*^block*/id)arg3;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)deleteActionsBeforeTime:(double)arg1 completionHandler:(/*^block*/id)arg2;
-(id)startQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(/*^block*/id)arg3 resultsHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)deleteAllUserActivities:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setExtensionDelegate:(id)arg1;
-(void)startQueryTask:(id)arg1;

@required
-(double)lastUpdateTime;
-(id)delegateServiceName;
-(id)indexServiceName;
-(void)clientDidCheckin:(id)arg1 protectionClass:(id)arg2 service:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)runMigration;
-(id)searchServiceName;
-(void)userPerformedAction:(id)arg1 withItem:(id)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4;

@end

