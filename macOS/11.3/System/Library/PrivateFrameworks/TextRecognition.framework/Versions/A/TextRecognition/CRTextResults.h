/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/Versions/A/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, CRTextDetectorResults, CRTextRecognizerResults, NSArray, CRTextFeature;

@interface CRTextResults : NSObject {

	NSDate* _startTime;
	NSDate* _endTime;
	CRTextDetectorResults* _detectorResults;
	CRTextRecognizerResults* _recognizerResults;
	NSArray* _textFeatures;
	CRTextFeature* _titleTextFeature;

}

@property (nonatomic,retain) NSDate * startTime;                                       //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                                         //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) CRTextDetectorResults * detectorResults;                  //@synthesize detectorResults=_detectorResults - In the implementation block
@property (nonatomic,retain) CRTextRecognizerResults * recognizerResults;              //@synthesize recognizerResults=_recognizerResults - In the implementation block
@property (nonatomic,retain) NSArray * textFeatures;                                   //@synthesize textFeatures=_textFeatures - In the implementation block
@property (nonatomic,retain) CRTextFeature * titleTextFeature;                         //@synthesize titleTextFeature=_titleTextFeature - In the implementation block
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(void)setTextFeatures:(NSArray *)arg1 ;
-(void)setDetectorResults:(CRTextDetectorResults *)arg1 ;
-(CRTextDetectorResults *)detectorResults;
-(void)setRecognizerResults:(CRTextRecognizerResults *)arg1 ;
-(CRTextRecognizerResults *)recognizerResults;
-(NSArray *)textFeatures;
-(void)setTitleTextFeature:(CRTextFeature *)arg1 ;
-(CRTextFeature *)titleTextFeature;
@end

