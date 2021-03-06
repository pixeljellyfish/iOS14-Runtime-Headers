/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol HMIPersonManagerDataSource;
@class NSUUID;

@interface HMIPersonManager : HMFObject {

	BOOL _supportsFaceClassification;
	BOOL _personDataAvailableViaHomeKit;
	NSUUID* _UUID;
	NSUUID* _homeUUID;
	id<HMIPersonManagerDataSource> _dataSource;

}

@property (copy,readonly) NSUUID * UUID;                                                            //@synthesize UUID=_UUID - In the implementation block
@property (copy,readonly) NSUUID * homeUUID;                                                        //@synthesize homeUUID=_homeUUID - In the implementation block
@property (assign,nonatomic,__weak) id<HMIPersonManagerDataSource> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) BOOL supportsFaceClassification;                                                 //@synthesize supportsFaceClassification=_supportsFaceClassification - In the implementation block
@property (getter=isPersonDataAvailableViaHomeKit) BOOL personDataAvailableViaHomeKit;              //@synthesize personDataAvailableViaHomeKit=_personDataAvailableViaHomeKit - In the implementation block
-(id)initWithUUID:(id)arg1 ;
-(void)setDataSource:(id<HMIPersonManagerDataSource>)arg1 ;
-(NSUUID *)UUID;
-(NSUUID *)homeUUID;
-(id<HMIPersonManagerDataSource>)dataSource;
-(BOOL)supportsFaceClassification;
-(void)handleUpdatedPerson:(id)arg1 ;
-(void)handleUpdatedPersonFaceCrop:(id)arg1 ;
-(void)handleUpdatedFaceprint:(id)arg1 ;
-(void)handleRemovedPersonWithUUID:(id)arg1 ;
-(void)handleRemovedFaceCropWithUUID:(id)arg1 ;
-(void)handleRemovedFaceprintWithUUID:(id)arg1 ;
-(void)setSupportsFaceClassification:(BOOL)arg1 ;
-(BOOL)isPersonDataAvailableViaHomeKit;
-(void)setPersonDataAvailableViaHomeKit:(BOOL)arg1 ;
-(id)initWithUUID:(id)arg1 homeUUID:(id)arg2 ;
-(void)handleUpdatedUnassociatedFaceCrop:(id)arg1 ;
@end

