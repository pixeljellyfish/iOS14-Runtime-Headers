/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSViewServiceHostProtocol <NSObject>
@required
-(void)_presentViewController;
-(void)_dismissViewController;
-(void)_request:(id)arg1 didFinishWithResponse:(id)arg2;
-(void)_request:(id)arg1 didFailWithError:(id)arg2;
-(void)_didChooseAdditionalProvidersForRequest:(id)arg1;
-(void)_didCancelRequest:(id)arg1;
-(void)_didChooseProviderWithIdentifier:(id)arg1 vetoHandler:(/*^block*/id)arg2;

@end

