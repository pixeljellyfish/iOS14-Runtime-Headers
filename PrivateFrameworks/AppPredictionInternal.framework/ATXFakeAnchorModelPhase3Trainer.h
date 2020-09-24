/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXAnchorModelPhase3TrainerProtocol.h>

@class NSMutableArray, NSString;

@interface ATXFakeAnchorModelPhase3Trainer : NSObject <ATXAnchorModelPhase3TrainerProtocol> {

	NSMutableArray* _candidateIdsForPhase3Training;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)trainPhase3ForCandidate:(id)arg1 ;
-(id)candidateIdsForPhase3Training;
@end
