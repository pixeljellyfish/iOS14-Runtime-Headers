/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFWeakContainer;

@interface _PFWeakContainerSentenal : NSObject {

	PFWeakContainer* _container;

}
+(void)initialize;
-(void)clearContainer;
-(oneway void)release;
-(void)dealloc;
-(void)associateWithObject:(id)arg1 ;
-(BOOL)isAssociatedWithObject:(id)arg1 ;
-(void)removeAssociationWithObject:(id)arg1 ;
-(id)initWithContainer:(id)arg1 ;
@end
