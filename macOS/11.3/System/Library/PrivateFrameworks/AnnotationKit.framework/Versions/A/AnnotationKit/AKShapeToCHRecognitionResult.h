/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class CHRecognitionResult, NSBezierPath, PKDrawing, AKAnnotation;

@interface AKShapeToCHRecognitionResult : NSObject {

	char _doodlePathIsPrestroked;
	long long _tag;
	CHRecognitionResult* _result;
	NSBezierPath* _doodlePath;
	PKDrawing* _inkDrawing;
	AKAnnotation* _annotation;
	CGRect _doodlePathBoundsInInputView;

}

@property (assign) long long tag;                                   //@synthesize tag=_tag - In the implementation block
@property (retain) CHRecognitionResult * result;                    //@synthesize result=_result - In the implementation block
@property (retain) NSBezierPath * doodlePath;                       //@synthesize doodlePath=_doodlePath - In the implementation block
@property (retain) PKDrawing * inkDrawing;                          //@synthesize inkDrawing=_inkDrawing - In the implementation block
@property (retain) AKAnnotation * annotation;                       //@synthesize annotation=_annotation - In the implementation block
@property (assign) CGRect doodlePathBoundsInInputView;              //@synthesize doodlePathBoundsInInputView=_doodlePathBoundsInInputView - In the implementation block
@property (assign) char doodlePathIsPrestroked;                     //@synthesize doodlePathIsPrestroked=_doodlePathIsPrestroked - In the implementation block
-(CHRecognitionResult *)result;
-(void)setResult:(CHRecognitionResult *)arg1 ;
-(void)setTag:(long long)arg1 ;
-(long long)tag;
-(AKAnnotation *)annotation;
-(void)setAnnotation:(AKAnnotation *)arg1 ;
-(id)initWith:(long long)arg1 result:(id)arg2 ;
-(NSBezierPath *)doodlePath;
-(CGRect)doodlePathBoundsInInputView;
-(char)doodlePathIsPrestroked;
-(void)setDoodlePath:(NSBezierPath *)arg1 ;
-(void)setDoodlePathIsPrestroked:(char)arg1 ;
-(void)setDoodlePathBoundsInInputView:(CGRect)arg1 ;
-(void)setInkDrawing:(PKDrawing *)arg1 ;
-(PKDrawing *)inkDrawing;
@end

