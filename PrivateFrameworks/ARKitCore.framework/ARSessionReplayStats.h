/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ARSessionReplayStats : NSObject {

	int _recordingFormat;
	NSString* _deviceModel;
	NSString* _osVersion;
	NSString* _arkitVersion;
	NSString* _fileName;
	unsigned long long _recordedSensorTypes;

}

@property (assign,nonatomic) int recordingFormat;                                 //@synthesize recordingFormat=_recordingFormat - In the implementation block
@property (nonatomic,retain) NSString * deviceModel;                              //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,retain) NSString * osVersion;                                //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,retain) NSString * arkitVersion;                             //@synthesize arkitVersion=_arkitVersion - In the implementation block
@property (nonatomic,retain) NSString * fileName;                                 //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) unsigned long long recordedSensorTypes;              //@synthesize recordedSensorTypes=_recordedSensorTypes - In the implementation block
-(void)setDeviceModel:(NSString *)arg1 ;
-(void)setOsVersion:(NSString *)arg1 ;
-(NSString *)deviceModel;
-(NSString *)osVersion;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(NSString *)arkitVersion;
-(int)recordingFormat;
-(void)setRecordingFormat:(int)arg1 ;
-(void)setArkitVersion:(NSString *)arg1 ;
-(unsigned long long)recordedSensorTypes;
-(void)setRecordedSensorTypes:(unsigned long long)arg1 ;
@end
