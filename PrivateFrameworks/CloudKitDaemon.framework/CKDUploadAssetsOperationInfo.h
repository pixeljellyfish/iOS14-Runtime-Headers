/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray, NSDictionary;

@interface CKDUploadAssetsOperationInfo : CKDatabaseOperationInfo {

	BOOL _temporary;
	NSArray* _assetsToUpload;
	NSDictionary* _assetUUIDToExpectedProperties;
	NSDictionary* _packageUUIDToExpectedProperties;

}

@property (nonatomic,retain) NSArray * assetsToUpload;                                    //@synthesize assetsToUpload=_assetsToUpload - In the implementation block
@property (nonatomic,retain) NSDictionary * assetUUIDToExpectedProperties;                //@synthesize assetUUIDToExpectedProperties=_assetUUIDToExpectedProperties - In the implementation block
@property (nonatomic,retain) NSDictionary * packageUUIDToExpectedProperties;              //@synthesize packageUUIDToExpectedProperties=_packageUUIDToExpectedProperties - In the implementation block
@property (assign,nonatomic) BOOL temporary;                                              //@synthesize temporary=_temporary - In the implementation block
-(void)setTemporary:(BOOL)arg1 ;
-(NSDictionary *)assetUUIDToExpectedProperties;
-(void)setAssetUUIDToExpectedProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)packageUUIDToExpectedProperties;
-(void)setPackageUUIDToExpectedProperties:(NSDictionary *)arg1 ;
-(BOOL)temporary;
-(NSArray *)assetsToUpload;
-(void)setAssetsToUpload:(NSArray *)arg1 ;
@end

