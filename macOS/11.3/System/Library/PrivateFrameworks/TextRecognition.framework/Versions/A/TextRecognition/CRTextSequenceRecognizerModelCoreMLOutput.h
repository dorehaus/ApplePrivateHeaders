/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/Versions/A/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>
#import <libobjc.A.dylib/CRTextRecognizerModelOutput.h>

@class NSArray, MLMultiArray, NSSet, NSString;

@interface CRTextSequenceRecognizerModelCoreMLOutput : NSObject <MLFeatureProvider, CRTextRecognizerModelOutput> {

	NSArray* _textFeatureInfo;
	MLMultiArray* _output_label_prob_map;

}

@property (retain) NSArray * textFeatureInfo;                                   //@synthesize textFeatureInfo=_textFeatureInfo - In the implementation block
@property (nonatomic,retain) MLMultiArray * output_label_prob_map;              //@synthesize output_label_prob_map=_output_label_prob_map - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(void)setOutput_label_prob_map:(MLMultiArray *)arg1 ;
-(void)setTextFeatureInfo:(NSArray *)arg1 ;
-(NSArray *)textFeatureInfo;
-(MLMultiArray *)output_label_prob_map;
-(id)initWithOutput_label_prob_map:(id)arg1 ;
@end
