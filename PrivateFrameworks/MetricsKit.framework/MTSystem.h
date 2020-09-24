/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricsKit/MTObject.h>

@protocol MTEventFilter;
@class MTEnvironment, MTEventRecorder;

@interface MTSystem : MTObject {

	MTEnvironment* _environment;
	MTEventRecorder* _eventRecorder;
	id<MTEventFilter> _eventFilter;
	id<MTEventFilter> _treatmentFilter;

}

@property (nonatomic,retain) MTEnvironment * environment;                    //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) MTEventRecorder * eventRecorder;                //@synthesize eventRecorder=_eventRecorder - In the implementation block
@property (nonatomic,retain) id<MTEventFilter> eventFilter;                  //@synthesize eventFilter=_eventFilter - In the implementation block
@property (nonatomic,retain) id<MTEventFilter> treatmentFilter;              //@synthesize treatmentFilter=_treatmentFilter - In the implementation block
-(void)setEnvironment:(MTEnvironment *)arg1 ;
-(id<MTEventFilter>)eventFilter;
-(void)setEventFilter:(id<MTEventFilter>)arg1 ;
-(MTEnvironment *)environment;
-(MTEventRecorder *)eventRecorder;
-(id)initWithMetricsKit:(id)arg1 ;
-(id<MTEventFilter>)treatmentFilter;
-(void)setEventRecorder:(MTEventRecorder *)arg1 ;
-(void)setEventFilterWithJavaScriptFunction:(id)arg1 context:(id)arg2 operationQueue:(id)arg3 ;
-(void)setTreatmentFilter:(id<MTEventFilter>)arg1 ;
@end
