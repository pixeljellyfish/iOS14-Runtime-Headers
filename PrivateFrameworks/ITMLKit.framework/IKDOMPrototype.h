/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKDOMConditional.h>

@class NSArray, NSString, _IKDOMPrototypeDerivationRules;

@interface IKDOMPrototype : IKDOMConditional {

	struct {
		BOOL parsedGrouping;
	}  _flags;
	NSArray* _grouping;
	NSString* _type;
	NSString* _selector;
	_IKDOMPrototypeDerivationRules* _rules;

}

@property (nonatomic,copy,readonly) _IKDOMPrototypeDerivationRules * rules;              //@synthesize rules=_rules - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * selector;                                 //@synthesize selector=_selector - In the implementation block
@property (nonatomic,copy,readonly) NSArray * grouping;                                  //@synthesize grouping=_grouping - In the implementation block
+(id)_groupingForDOMElement:(id)arg1 ;
+(id)prototypeWithDOMElement:(id)arg1 ;
-(_IKDOMPrototypeDerivationRules *)rules;
-(NSArray *)grouping;
-(NSString *)selector;
-(NSString *)type;
-(id)variantForDataItem:(id)arg1 ;
-(id)initWithDOMElement:(id)arg1 selector:(id)arg2 ;
-(id)_derivativeWithDataItem:(id)arg1 ;
-(id)instantiateDOMElement;
@end
