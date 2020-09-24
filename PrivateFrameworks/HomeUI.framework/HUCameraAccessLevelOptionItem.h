/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class HMUser, HMHome;

@interface HUCameraAccessLevelOptionItem : HFItem {

	HMUser* _user;
	HMHome* _home;
	unsigned long long _accessLevel;

}

@property (nonatomic,readonly) HMUser * user;                               //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) HMHome * home;                               //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) unsigned long long accessLevel;              //@synthesize accessLevel=_accessLevel - In the implementation block
-(HMUser *)user;
-(id)initWithUser:(id)arg1 home:(id)arg2 accessLevel:(unsigned long long)arg3 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(unsigned long long)accessLevel;
-(HMHome *)home;
@end
