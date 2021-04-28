/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSImage;


@protocol AKSignatureDetectorProtocol
@property (assign) double baselinePosition; 
@property (assign) double borderWidth; 
@property (readonly) NSImage * testImage; 
@required
-(void)setBorderWidth:(double)arg1;
-(double)borderWidth;
-(void)stopProcessing;
-(id)detectSignatureInPixelBuffer:(CVBufferRef)arg1;
-(id)detectSignatureInImage:(id)arg1;
-(void)startProcessingInQueue:(id)arg1;
-(double)baselinePosition;
-(void)setBaselinePosition:(double)arg1;
-(NSImage *)testImage;

@end
