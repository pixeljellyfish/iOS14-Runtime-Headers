/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAContext;

@interface CADisplayFlipBook : NSObject {

	void* _impl;

}

@property (nonatomic,retain) CAContext * context; 
@property (nonatomic,readonly) unsigned long long capacity; 
+(id)new;
-(unsigned long long)capacity;
-(void)dealloc;
-(void)purge;
-(void)setContext:(CAContext *)arg1 ;
-(id)init;
-(CAContext *)context;
-(id)_initWithDisplayId:(unsigned)arg1 width:(unsigned)arg2 height:(unsigned)arg3 capacity:(unsigned long long)arg4 ;
-(double)cancelAtTime:(double)arg1 ;
-(BOOL)renderForTime:(double)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)setPurgeable;
-(id)description;
@end

