/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXComponentViewPostProcessorManager.h>

@protocol SXComponentViewPostProcessorManager <NSObject>
@required
-(void)removeProcessor:(id)arg1;
-(void)processComponent:(id)arg1 view:(id)arg2;
-(void)addProcessor:(id)arg1;

@end


@class NSMutableArray, NSString;

@interface SXComponentViewPostProcessorManager : NSObject <SXComponentViewPostProcessorManager> {

	NSMutableArray* _processors;

}

@property (nonatomic,readonly) NSMutableArray * processors;              //@synthesize processors=_processors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeProcessor:(id)arg1 ;
-(void)processComponent:(id)arg1 view:(id)arg2 ;
-(void)addProcessor:(id)arg1 ;
-(NSMutableArray *)processors;
-(id)init;
@end
