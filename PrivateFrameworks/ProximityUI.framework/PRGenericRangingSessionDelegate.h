/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PRGenericRangingSessionDelegate <NSObject>
@optional
-(void)didReceiveNewSolutions:(id)arg1;
-(void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;
-(void)remoteDevice:(id)arg1 didChangeState:(long long)arg2;

@required
-(void)didFailWithError:(id)arg1;
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1 cause:(long long)arg2;

@end

