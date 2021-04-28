/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSRotationGestureRecognizer.h>

@class AKController;

@interface AKRotationGestureRecognizer : NSRotationGestureRecognizer {

	AKController* _annotationController;

}

@property (assign,nonatomic,__weak) AKController * annotationController;              //@synthesize annotationController=_annotationController - In the implementation block
-(void)setAnnotationController:(AKController *)arg1 ;
-(AKController *)annotationController;
@end

