/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKRequestDelegate.h>
#import <libobjc.A.dylib/FCReceiptRefresherType.h>

@class NSString, SKReceiptRefreshRequest, NFPendingPromise;

@interface FCReceiptRefresher : NSObject <SKRequestDelegate, FCReceiptRefresherType> {

	NSString* _restoreBundleID;
	SKReceiptRefreshRequest* _request;
	NFPendingPromise* _pendingPromise;

}

@property (nonatomic,copy) NSString * restoreBundleID;                       //@synthesize restoreBundleID=_restoreBundleID - In the implementation block
@property (nonatomic,retain) SKReceiptRefreshRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NFPendingPromise * pendingPromise;              //@synthesize pendingPromise=_pendingPromise - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setPendingPromise:(NFPendingPromise *)arg1 ;
-(void)setRestoreBundleID:(NSString *)arg1 ;
-(NSString *)restoreBundleID;
-(id)refreshReceiptDirectoryURLWithBundleID:(id)arg1 ;
-(NFPendingPromise *)pendingPromise;
-(id)refreshForPurchase:(id)arg1 ;
-(void)requestDidFinish:(id)arg1 ;
-(SKReceiptRefreshRequest *)request;
-(void)setRequest:(SKReceiptRefreshRequest *)arg1 ;
@end
