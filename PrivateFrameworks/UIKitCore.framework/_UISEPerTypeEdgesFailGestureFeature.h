/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISEGestureFeature.h>
#import <UIKitCore/_UISEGestureFeatureDelegate.h>
#import <UIKitCore/_UISETouchedEdgesProvider.h>

@class NSDictionary, NSString;

@interface _UISEPerTypeEdgesFailGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate, _UISETouchedEdgesProvider> {

	NSDictionary* _edgeTypeSubfeatures;

}

@property (nonatomic,readonly) unsigned long long touchedEdges; 
@property (nonatomic,readonly) NSDictionary * edgeTypeSubfeatures;              //@synthesize edgeTypeSubfeatures=_edgeTypeSubfeatures - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)featureDidChangeState:(id)arg1 ;
-(id)debugDictionary;
-(unsigned long long)touchedEdges;
-(void)_incorporateSample:(const UISEGestureFeatureSample*)arg1 ;
-(id)initWithEdgeTypeSubfeatures:(id)arg1 ;
-(NSDictionary *)edgeTypeSubfeatures;
@end

