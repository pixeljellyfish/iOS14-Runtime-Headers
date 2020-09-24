/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class CKAsset;

@interface CKDDownloadAssetURLInfo : NSObject {

	CKAsset* _asset;
	OpaquePCSShareProtectionRef _recordPCS;

}

@property (nonatomic,retain) CKAsset * asset;                                    //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) OpaquePCSShareProtectionRef recordPCS;              //@synthesize recordPCS=_recordPCS - In the implementation block
-(CKAsset *)asset;
-(OpaquePCSShareProtectionRef)recordPCS;
-(void)setRecordPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(void)setAsset:(CKAsset *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
