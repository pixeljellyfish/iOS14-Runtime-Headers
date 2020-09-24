/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKShareTargetCollectorDelegate;
@class NSSet;

@interface CRKShareTargetCollector : NSObject {

	id<CRKShareTargetCollectorDelegate> _delegate;
	NSSet* _studentTargets;
	NSSet* _instructorTargets;

}

@property (nonatomic,copy) NSSet * studentTargets;                                             //@synthesize studentTargets=_studentTargets - In the implementation block
@property (nonatomic,copy) NSSet * instructorTargets;                                          //@synthesize instructorTargets=_instructorTargets - In the implementation block
@property (assign,nonatomic,__weak) id<CRKShareTargetCollectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)setDelegate:(id<CRKShareTargetCollectorDelegate>)arg1 ;
-(id<CRKShareTargetCollectorDelegate>)delegate;
-(void)studentTargetsDidChange:(id)arg1 ;
-(void)instructorTargetsDidChange:(id)arg1 ;
-(NSSet *)studentTargets;
-(void)setStudentTargets:(NSSet *)arg1 ;
-(void)diffNewTargets:(id)arg1 againstOldTargets:(id)arg2 ;
-(NSSet *)instructorTargets;
-(void)setInstructorTargets:(NSSet *)arg1 ;
-(void)didRemoveTargets:(id)arg1 ;
-(void)didFindTargets:(id)arg1 ;
@end
