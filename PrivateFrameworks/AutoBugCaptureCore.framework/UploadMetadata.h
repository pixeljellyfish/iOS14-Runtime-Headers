/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface UploadMetadata : NSObject {

	BOOL _uploaded;
	short _taskState;
	short _observedPrimaryInterfaceOnCompletion;
	NSURL* _fileURL;
	unsigned long long _retryCount;
	unsigned long long _fileSize;
	unsigned long long _httpStatusCode;
	NSString* _errorDomain;
	long long _errorCode;

}

@property (nonatomic,retain) NSURL * fileURL;                                         //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) BOOL uploaded;                                           //@synthesize uploaded=_uploaded - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                           //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;                             //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) unsigned long long httpStatusCode;                       //@synthesize httpStatusCode=_httpStatusCode - In the implementation block
@property (nonatomic,retain) NSString * errorDomain;                                  //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) long long errorCode;                                     //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) short taskState;                                         //@synthesize taskState=_taskState - In the implementation block
@property (assign,nonatomic) short observedPrimaryInterfaceOnCompletion;              //@synthesize observedPrimaryInterfaceOnCompletion=_observedPrimaryInterfaceOnCompletion - In the implementation block
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)fileSize;
-(void)setUploaded:(BOOL)arg1 ;
-(unsigned long long)retryCount;
-(NSURL *)fileURL;
-(NSString *)errorDomain;
-(void)setTaskState:(short)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(BOOL)uploaded;
-(short)taskState;
-(id)debugDescription;
-(void)setErrorCode:(long long)arg1 ;
-(id)init;
-(void)setFileSize:(unsigned long long)arg1 ;
-(void)setHttpStatusCode:(unsigned long long)arg1 ;
-(unsigned long long)httpStatusCode;
-(long long)errorCode;
-(id)description;
-(void)setObservedPrimaryInterfaceOnCompletion:(short)arg1 ;
-(short)observedPrimaryInterfaceOnCompletion;
@end

