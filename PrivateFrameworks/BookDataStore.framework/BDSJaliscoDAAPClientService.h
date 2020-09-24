/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BDSJaliscoDAAPClientService <NSObject>
@required
-(void)updatePolitely:(BOOL)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)hideItemsWithStoreIDs:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setItemHidden:(BOOL)arg1 forStoreID:(id)arg2;
-(void)updateFamilyPolitely:(BOOL)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3;

@end
