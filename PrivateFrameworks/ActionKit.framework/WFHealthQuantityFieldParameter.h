/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFQuantityFieldParameter.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class NSArray, HKQuantityType, WFAction, NSString;

@interface WFHealthQuantityFieldParameter : WFQuantityFieldParameter <WFActionEventObserver> {

	NSArray* _possibleUnits;
	HKQuantityType* _quantityType;
	WFAction* _action;

}

@property (assign,nonatomic,__weak) WFAction * action;                     //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKQuantityType *)quantityType;
-(WFAction *)action;
-(BOOL)isHidden;
-(id)localizedLabel;
-(void)setAction:(WFAction *)arg1 ;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(void)attributesDidChange;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)setPossibleUnits:(id)arg1 ;
-(id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3 ;
-(id)possibleUnits;
-(void)updatePossibleUnits;
@end
