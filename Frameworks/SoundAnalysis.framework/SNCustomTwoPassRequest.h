/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNTwoPassRequest.h>
#import <libobjc.A.dylib/SNAnalysisPassStrategyProviding.h>

@class SNTwoPassConfiguration, NSString;

@interface SNCustomTwoPassRequest : NSObject <SNTwoPassRequest, SNAnalysisPassStrategyProviding> {

	/*^block*/id _createSecondPassControllerFunction;
	SNTwoPassConfiguration* _twoPassConfiguration;

}

@property (readonly) SNTwoPassConfiguration * twoPassConfiguration;              //@synthesize twoPassConfiguration=_twoPassConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long analysisPassStrategy; 
-(id)createSecondPassController;
-(SNTwoPassConfiguration *)twoPassConfiguration;
-(long long)analysisPassStrategy;
-(id)initWithTwoPassConfiguration:(id)arg1 createSecondPassControllerFunction:(/*^block*/id)arg2 ;
@end

