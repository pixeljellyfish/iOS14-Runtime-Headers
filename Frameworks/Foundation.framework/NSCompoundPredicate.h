/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicate.h>

@class NSArray;

@interface NSCompoundPredicate : NSPredicate {

	void* _reserved2;
	unsigned long long _type;
	NSArray* _subpredicates;

}

@property (readonly) unsigned long long compoundPredicateType; 
@property (copy,readonly) NSArray * subpredicates; 
+(id)notPredicateWithSubpredicate:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_operatorForType:(unsigned long long)arg1 ;
+(id)andPredicateWithSubpredicates:(id)arg1 ;
+(id)orPredicateWithSubpredicates:(id)arg1 ;
-(id)CKDPQueryFiltersWithTranslator:(id)arg1 error:(id*)arg2 ;
-(id)vui_predicateWithSubpredicateFilterBlock:(/*^block*/id)arg1 ;
-(id)hd_sqlPredicateForSelect;
-(id)FCCKPQueryFiltersWithTranslator:(id)arg1 error:(id*)arg2 ;
-(id)em_searchableIndexQueryGenerator;
-(id)predicateNodeFromPropertyMapper:(id)arg1 ;
-(id)hk_filterRepresentationForDataTypes:(id)arg1 ;
-(id)cls_normalizedPredicate:(id)arg1 error:(id*)arg2 ;
-(id)br_watchedURL;
-(id)br_urlWithWatchedChildren;
-(id)_br_watchedURLWithORPredicate1:(id)arg1 predicate2:(id)arg2 ;
-(id)_br_watchedParentURLWithORPredicate1:(id)arg1 predicate2:(id)arg2 ;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(void)ab_bindJoinClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(BOOL)ab_hasCallback;
-(void)ab_addCallbackContextToArray:(id)arg1 ;
-(id)ab_newQueryWithSortOrder:(unsigned)arg1 ranked:(BOOL)arg2 addressBook:(void*)arg3 propertyIndices:(const _CFDictionary*)arg4 ;
-(void)ab_bindSelectClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)minimalFormInContext:(id)arg1 ;
-(id)_keypathsForDerivedPropertyValidation:(id*)arg1 ;
-(id)predicateFormat;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(NSArray *)subpredicates;
-(void)dealloc;
-(void)allowEvaluation;
-(id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2 ;
-(void)_acceptSubpredicates:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)predicateWithSubstitutionVariables:(id)arg1 ;
-(id)_copySubpredicateDescription:(id)arg1 ;
-(id)predicateOperator;
-(id)generateMetadataDescription;
-(unsigned long long)compoundPredicateType;
-(id)_predicateOperator;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(unsigned long long)hash;
@end
