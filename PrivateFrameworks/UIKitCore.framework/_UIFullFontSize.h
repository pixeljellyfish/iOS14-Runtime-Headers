/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIFullFontSize : NSObject {

	double _value;
	BOOL _isDefault;
	BOOL _needsEvaluation;

}
+(id)defaultValue;
+(id)valued:(double)arg1 ;
-(id)initWithValue:(double)arg1 isDefault:(BOOL)arg2 ;
-(id)overrideUnlessDefault:(double)arg1 ;
-(double)valueWithEvaluationIfNeeded:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)setNeedsEvaluation;
-(BOOL)needsEvaluation;
@end

