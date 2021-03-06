/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class NSArray, NSInvocation;

@interface FPFrameworkOverridesIterator : NSProxy {

	NSArray* _overrides;
	/*^block*/id _noSuitableModuleFoundHandler;
	unsigned long long _currentIndex;
	NSInvocation* _invocation;

}
+(void)addOverride:(id)arg1 ;
+(void)removeOverride:(id)arg1 ;
+(id)allOverrides;
+(id)newIteratorWithNotFoundHandler:(/*^block*/id)arg1 ;
+(id)overrideDirectoryURL;
-(void)forwardInvocation:(id)arg1 ;
-(void)finish;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)callNextOverrides;
-(id)initWithOverrides:(id)arg1 noSuitableModuleFoundHandler:(/*^block*/id)arg2 ;
@end

