/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASLock;

@interface ATXTrialAssets : NSObject {

	_PASLock* _lock;

}
-(id)filePathForClass:(Class)arg1 ;
-(BOOL)clearStaleUnarchivedLevels;
-(id)init;
-(id)_unarchiveResource:(id)arg1 ;
-(id)dictionaryForResource:(id)arg1 ;
-(id)dictionaryForClass:(Class)arg1 ;
-(id)client;
-(BOOL)_cleanModelDirectory;
-(id)_treatmentId;
-(id)filePathForResource:(id)arg1 ;
-(id)_unarchivedResourcePath;
-(id)pathForLegacyResourcePath:(id)arg1 ;
-(void)addUpdateHandlerWithBlock:(/*^block*/id)arg1 ;
@end

