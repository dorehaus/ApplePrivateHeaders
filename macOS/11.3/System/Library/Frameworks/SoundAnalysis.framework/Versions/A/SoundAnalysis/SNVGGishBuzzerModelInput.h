/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/Versions/A/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SNVGGishBuzzerModelInput : NSObject <MLFeatureProvider> {

	MLMultiArray* _input1;
	MLMultiArray* _stateIn;
	MLMultiArray* _detectedHistoryIn;

}

@property (nonatomic,retain) MLMultiArray * input1;                         //@synthesize input1=_input1 - In the implementation block
@property (nonatomic,retain) MLMultiArray * stateIn;                        //@synthesize stateIn=_stateIn - In the implementation block
@property (nonatomic,retain) MLMultiArray * detectedHistoryIn;              //@synthesize detectedHistoryIn=_detectedHistoryIn - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(MLMultiArray *)input1;
-(id)initWithInput1:(id)arg1 stateIn:(id)arg2 detectedHistoryIn:(id)arg3 ;
-(id)initWithInput1:(id)arg1 ;
-(void)setInput1:(MLMultiArray *)arg1 ;
-(MLMultiArray *)stateIn;
-(void)setStateIn:(MLMultiArray *)arg1 ;
-(MLMultiArray *)detectedHistoryIn;
-(void)setDetectedHistoryIn:(MLMultiArray *)arg1 ;
@end

