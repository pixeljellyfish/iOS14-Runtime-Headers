/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKCFGExpression.h>

@class NSString, NSMutableArray, NSCharacterSet;

@interface _HKCFGNonTerminal : _HKCFGExpression {

	NSString* _label;
	NSMutableArray* _replacementRules;
	NSCharacterSet* _charactersToBeSkipped;

}

@property (nonatomic,copy) NSCharacterSet * charactersToBeSkipped;              //@synthesize charactersToBeSkipped=_charactersToBeSkipped - In the implementation block
+(id)nonTerminalWithLabel:(id)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(id)_parseTreeWithContext:(id)arg1 ;
-(void)_checkForCycles:(id)arg1 ;
-(void)addReplacementRuleWithExpressions:(id)arg1 nodeEvaluator:(/*^block*/id)arg2 ;
-(id)_replacementRules;
-(NSCharacterSet *)charactersToBeSkipped;
-(unsigned long long)_minimumLength;
-(id)_label;
-(void)_invalidate;
-(void)_checkForCycles;
-(BOOL)_tryNodesForExpressions:(id)arg1 nodes:(id)arg2 context:(id)arg3 solutionTest:(/*^block*/id)arg4 ;
-(void)_tryNodesWithContext:(id)arg1 solutionTest:(/*^block*/id)arg2 ;
-(void)setCharactersToBeSkipped:(NSCharacterSet *)arg1 ;
@end

