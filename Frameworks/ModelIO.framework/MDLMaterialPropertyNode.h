/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDLNamed.h>

@class NSArray, NSMutableArray, NSString;

@interface MDLMaterialPropertyNode : NSObject <MDLNamed> {

	NSArray* _inputs;
	NSArray* _outputs;
	NSMutableArray* _inputNodes;
	/*^block*/id _evaluationFunction;
	NSString* _name;

}

@property (nonatomic,copy) id evaluationFunction;              //@synthesize evaluationFunction=_evaluationFunction - In the implementation block
@property (nonatomic,readonly) NSArray * inputs;               //@synthesize inputs=_inputs - In the implementation block
@property (nonatomic,readonly) NSArray * outputs;              //@synthesize outputs=_outputs - In the implementation block
@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
-(NSArray *)inputs;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)outputs;
-(NSString *)name;
-(id)initWithInputs:(id)arg1 outputs:(id)arg2 evaluationFunction:(/*^block*/id)arg3 ;
-(id)evaluationFunction;
-(void)setEvaluationFunction:(id)arg1 ;
@end
