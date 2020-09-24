/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@class HDCloudSyncOperation;

@interface HDCloudSyncConditionalOperation : HDCloudSyncOperation {

	HDCloudSyncOperation* _operation;
	/*^block*/id _shouldRunHandler;

}

@property (retain) HDCloudSyncOperation * operation;              //@synthesize operation=_operation - In the implementation block
@property (copy) id shouldRunHandler;                             //@synthesize shouldRunHandler=_shouldRunHandler - In the implementation block
+(BOOL)shouldLogAtOperationStart;
+(BOOL)shouldProduceOperationAnalytics;
-(void)setOperation:(HDCloudSyncOperation *)arg1 ;
-(HDCloudSyncOperation *)operation;
-(void)main;
-(id)description;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 operation:(id)arg3 shouldRunHandler:(/*^block*/id)arg4 ;
-(void)setShouldRunHandler:(id)arg1 ;
-(id)shouldRunHandler;
@end
